//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Prestamos_Form.h"
#include "Inicio_Form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPrestamosForm *PrestamosForm;
//---------------------------------------------------------------------------
__fastcall TPrestamosForm::TPrestamosForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPrestamosForm::BtnVolverPrestamosClick(TObject *Sender)
{
	InicioForm->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

