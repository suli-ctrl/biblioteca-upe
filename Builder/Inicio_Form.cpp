//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Inicio_Form.h"
#include "Libros_Form.h"
#include "Prestamos_Form.h"
#include "Socios_Form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TInicioForm *InicioForm;
//---------------------------------------------------------------------------
__fastcall TInicioForm::TInicioForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TInicioForm::BtnLibrosClick(TObject *Sender)
{
	this->Hide(); //Oculta el form actual
	LibrosForm->Show();  //Cambia al form de Libros

}
//---------------------------------------------------------------------------

void __fastcall TInicioForm::BtnSalirClick(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TInicioForm::BtnPrestamosClick(TObject *Sender)
{
	this->Hide();
	PrestamosForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TInicioForm::BtnSociosClick(TObject *Sender)
{
	this->Hide();
	SociosForm->Show();
}
//---------------------------------------------------------------------------

