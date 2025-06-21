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
void __fastcall TVerPrestamoActivoForm::FormShow(TObject *Sender)
{
	bibliotecaUPE.cargarLibrosCSV(); //prestamos depende de libros y socios por las referencias y otras cosas
	bibliotecaUPE.cargarSociosCSV();
	bibliotecaUPE.cargarPrestamosCSV();

	const std::vector<prestamos>& listaPrestamos = bibliotecaUPE.getListaPrestamos();


	StringGridPrestamos->ColCount = 7;
	StringGridPrestamos->RowCount = listaPrestamos.size() + 1;

	StringGridPrestamos->Cells[0][0] = "Libro";
	StringGridPrestamos->Cells[1][0] = "Ubicacion";
	StringGridPrestamos->Cells[2][0] = "Socio";
	StringGridPrestamos->Cells[3][0] = "DNI";
	StringGridPrestamos->Cells[4][0] = "Fecha prestamo";
	StringGridPrestamos->Cells[5][0] = "Dias";
	StringGridPrestamos->Cells[6][0] = "Vencimiento";




	for (int i = 0; i < listaPrestamos.size(); i++) {

		const prestamos& p = listaPrestamos[i];

		StringGridPrestamos->Cells[0][i+1] = p.getLibroPrestado().getNombre().c_str();
		StringGridPrestamos->Cells[1][i+1] = p.getLibroPrestado().getUbicacion().c_str();
		StringGridPrestamos->Cells[2][i+1] = p.getSocioPrestatario().getApellido().c_str();
		StringGridPrestamos->Cells[3][i+1] = IntToStr(p.getSocioPrestatario().getDNI());
		StringGridPrestamos->Cells[4][i+1] = p.getFechaPrestamo().c_str();
		StringGridPrestamos->Cells[5][i+1] = IntToStr(p.getDiasPrestamo());
		StringGridPrestamos->Cells[6][i+1] = p.getFechaVencimiento().c_str();
	}
}
//---------------------------------------------------------------------------

