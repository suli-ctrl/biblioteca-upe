//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BajaLibro_Form.h"
#include "biblioteca.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBajaLibroForm *BajaLibroForm;
//---------------------------------------------------------------------------
__fastcall TBajaLibroForm::TBajaLibroForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void TBajaLibroForm::setBiblioteca(biblioteca* pBibliotecaUPE) {
    bibliotecaUPE = pBibliotecaUPE;
}

void __fastcall TBajaLibroForm::btnDarBajaClick(TObject *Sender)
{
	String libroBaja = ComboBoxBaja->Text;

	bibliotecaUPE->bajaLibro(libroBaja);

}
//---------------------------------------------------------------------------

void __fastcall TBajaLibroForm::FormShow(TObject *Sender)
{
	ComboBoxBaja->Items->Clear();

	bibliotecaUPE->cargarLibrosCSV();

	const std::vector<libros>& libro = bibliotecaUPE->getListaLibros();

	for (int i = 0; i < libro.size(); ++i)
	{
		ComboBoxBaja->Items->Add(String(libro[i].getNombre().c_str()));
	}
}
//---------------------------------------------------------------------------

