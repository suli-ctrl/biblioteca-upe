//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "VerYBuscarLibro_Form.h"
#include "biblioteca.h"
#include "libros.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TVerYBuscarLibroForm *VerYBuscarLibroForm;
//---------------------------------------------------------------------------
__fastcall TVerYBuscarLibroForm::TVerYBuscarLibroForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TVerYBuscarLibroForm::FormShow(TObject *Sender)
{
	bibliotecaUPE.cargarLibrosCSV();

	const std::vector<libros>& listaLibros = bibliotecaUPE.getListaLibros();

	StringGridLibros->ColCount = 8;
	StringGridLibros->RowCount = listaLibros.size() + 1;

	StringGridLibros->Cells[0][0] = "Nombre";
	StringGridLibros->Cells[1][0] = "Área";
	StringGridLibros->Cells[2][0] = "Subárea";
	StringGridLibros->Cells[3][0] = "Autores";
	StringGridLibros->Cells[4][0] = "Editorial";
	StringGridLibros->Cells[5][0] = "Año";
	StringGridLibros->Cells[6][0] = "Ubicación";
	StringGridLibros->Cells[7][0] = "Estado";

	for (int i = 0; i < listaLibros.size(); i++) {

		const libros& l = listaLibros[i];

		StringGridLibros->Cells[0][i+1] = l.getNombre().c_str();
		StringGridLibros->Cells[1][i+1] = l.getArea().c_str();
		StringGridLibros->Cells[2][i+1] = l.getSubArea().c_str();
		StringGridLibros->Cells[3][i+1] = l.getAutores().c_str();
		StringGridLibros->Cells[4][i+1] = l.getEditorial().c_str();
		StringGridLibros->Cells[5][i+1] = IntToStr(l.getAnioDePublicacion());
		StringGridLibros->Cells[6][i+1] = l.getUbicacion().c_str();
		StringGridLibros->Cells[7][i+1] = l.getEstado().c_str();
	}
}
//---------------------------------------------------------------------------

