//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Socios_Form.h"
#include "Inicio_Form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSociosForm *SociosForm;
//---------------------------------------------------------------------------
__fastcall TSociosForm::TSociosForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSociosForm::BtnVolverSociosClick(TObject *Sender)
{
	InicioForm->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

