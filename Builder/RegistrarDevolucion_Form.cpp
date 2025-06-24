//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RegistrarDevolucion_Form.h"
#include "biblioteca.h"
#include "funciones.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRegistarDevoluciónForm *RegistarDevoluciónForm;
//---------------------------------------------------------------------------
__fastcall TRegistarDevoluciónForm::TRegistarDevoluciónForm(TComponent* Owner)
	: TForm(Owner)
{
	StringGridPrestamos->Options = StringGridPrestamos->Options
	<< goRowSelect
	<< goDrawFocusSelected;
}
//---------------------------------------------------------------------------

void TRegistarDevoluciónForm::setBiblioteca(biblioteca* pBibliotecaUPE) {
    bibliotecaUPE = pBibliotecaUPE;
}



int filaSeleccionada = -1;

void __fastcall TRegistarDevoluciónForm::FormShow(TObject *Sender)
{

	int fila = 1;

	bibliotecaUPE->cargarLibrosCSV(); //prestamos depende de libros y socios por las referencias y otras cosas
	bibliotecaUPE->cargarSociosCSV();
	bibliotecaUPE->cargarPrestamosCSV();

	const std::vector<prestamos>& listaPrestamos = bibliotecaUPE->getListaPrestamos();


	StringGridPrestamos->ColCount = 7;
	StringGridPrestamos->RowCount = 1;

	StringGridPrestamos->Cells[0][0] = "Libro";
	StringGridPrestamos->Cells[1][0] = "Ubicacion";
	StringGridPrestamos->Cells[2][0] = "Socio";
	StringGridPrestamos->Cells[3][0] = "DNI";
	StringGridPrestamos->Cells[4][0] = "Fecha prestamo";
	StringGridPrestamos->Cells[5][0] = "Dias";
	StringGridPrestamos->Cells[6][0] = "Vencimiento";

	for (int i = 0; i < listaPrestamos.size(); i++) {

		const prestamos& p = listaPrestamos[i];
		if(p.libroDevuelto() == false)
		{

			StringGridPrestamos->RowCount = fila + 1;

			StringGridPrestamos->Cells[0][fila] = p.getLibroPrestado().getNombre().c_str();
			StringGridPrestamos->Cells[1][fila] = p.getLibroPrestado().getUbicacion().c_str();
			StringGridPrestamos->Cells[2][fila] = p.getSocioPrestatario().getApellido().c_str();
			StringGridPrestamos->Cells[3][fila] = IntToStr(p.getSocioPrestatario().getDNI());
			StringGridPrestamos->Cells[4][fila] = p.getFechaPrestamo().c_str();
			StringGridPrestamos->Cells[5][fila] = IntToStr(p.getDiasPrestamo());
			StringGridPrestamos->Cells[6][fila] = p.getFechaVencimiento().c_str();

			fila++;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TRegistarDevoluciónForm::StringGridPrestamosClick(TObject *Sender)

{
	int fila = StringGridPrestamos->Row;
	if (fila == 0)
	{
		return;
	}

	filaSeleccionada = fila - 1;
	LabelSeleccionado->Caption = "Prestamo seleccionado: Fila " + IntToStr(filaSeleccionada + 1);
}
//---------------------------------------------------------------------------

void __fastcall TRegistarDevoluciónForm::Button1Click(TObject *Sender)
{
	if(filaSeleccionada < 0)
	{
		ShowMessage("Seleccione un prestamo antes de registrar");
		return;
	}

	String ubicacion = StringGridPrestamos->Cells[1][filaSeleccionada + 1]; // Selecciono la ubicacion
	std::string ubicacionStr = ConvertirStdString(ubicacion);

	bibliotecaUPE->devolverLibro(ubicacionStr);

	FormShow(Sender);  //Actualiza el grid
}
//---------------------------------------------------------------------------

