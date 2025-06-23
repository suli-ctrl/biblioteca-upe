//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "VerPrestamo_Form.h"
#include "biblioteca.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TVerPrestamoActivoForm *VerPrestamoActivoForm;
//---------------------------------------------------------------------------
__fastcall TVerPrestamoActivoForm::TVerPrestamoActivoForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void TVerPrestamoActivoForm::setBiblioteca(biblioteca* pBibliotecaUPE) {
    bibliotecaUPE = pBibliotecaUPE;
}


void __fastcall TVerPrestamoActivoForm::FormShow(TObject *Sender)
{
	bibliotecaUPE->cargarLibrosCSV(); //prestamos depende de libros y socios por las referencias y otras cosas
	bibliotecaUPE->cargarSociosCSV();
	bibliotecaUPE->cargarPrestamosCSV();

	const std::vector<prestamos>& listaPrestamos = bibliotecaUPE->getListaPrestamos();


	StringGridPrestamos->ColCount = 7;

	StringGridPrestamos->Cells[0][0] = "Libro";
	StringGridPrestamos->Cells[1][0] = "Ubicacion";
	StringGridPrestamos->Cells[2][0] = "Socio";
	StringGridPrestamos->Cells[3][0] = "DNI";
	StringGridPrestamos->Cells[4][0] = "Fecha prestamo";
	StringGridPrestamos->Cells[5][0] = "Dias";
	StringGridPrestamos->Cells[6][0] = "Vencimiento";

	int fila = 1; //La cabecera

	for (int i = 0; i < listaPrestamos.size(); i++) {

		const prestamos& p = listaPrestamos[i];

		if (p.libroDevuelto())  //
		{
			continue;
		}

		StringGridPrestamos->Cells[0][fila] = p.getLibroPrestado().getNombre().c_str();
		StringGridPrestamos->Cells[1][fila] = p.getLibroPrestado().getUbicacion().c_str();
		StringGridPrestamos->Cells[2][fila] = p.getSocioPrestatario().getApellido().c_str();
		StringGridPrestamos->Cells[3][fila] = IntToStr(p.getSocioPrestatario().getDNI());
		StringGridPrestamos->Cells[4][fila] = p.getFechaPrestamo().c_str();
		StringGridPrestamos->Cells[5][fila] = IntToStr(p.getDiasPrestamo());
		StringGridPrestamos->Cells[6][fila] = p.getFechaVencimiento().c_str();

		fila++; //por cada prestamo activo se agrega una fila
	}

	StringGridPrestamos->RowCount = fila; //Al finalizar el conteo de prestamos, se muestra la cantidad de filas acordes a prestamos activos
}
//---------------------------------------------------------------------------

