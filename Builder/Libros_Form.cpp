//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Libros_Form.h"
#include "Inicio_Form.h"
#include "AltaLibro_Form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TLibrosForm *LibrosForm;
//---------------------------------------------------------------------------
__fastcall TLibrosForm::TLibrosForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TLibrosForm::BtnLibroVolverClick(TObject *Sender)
{

	InicioForm->Show();
    this->Hide();
}
//---------------------------------------------------------------------------



void __fastcall TLibrosForm::BtnAltaLibroClick(TObject *Sender)
{
	AltaLibroForm->Show();
	this->Hide();
}
//---------------------------------------------------------------------------




