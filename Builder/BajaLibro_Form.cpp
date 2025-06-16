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
void __fastcall TBajaLibroForm::btnDarBajaClick(TObject *Sender)
{
	String libroBaja = ComboBoxBaja->Text;

	bibliotecaUPE.bajaLibro(libroBaja);

}
//---------------------------------------------------------------------------

void __fastcall TBajaLibroForm::FormShow(TObject *Sender)
{
	ComboBoxBaja->Items->Clear();

	bibliotecaUPE.cargarLibrosCSV();

	for (const auto& libro : bibliotecaUPE.getListaLibros())
	{
		ComboBoxBaja->Items->Add(String(libro.getNombre().c_str()));
	}
}
//---------------------------------------------------------------------------

