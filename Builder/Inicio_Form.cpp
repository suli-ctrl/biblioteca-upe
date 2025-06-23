//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Inicio_Form.h"
#include "Libros_Form.h"
#include "Prestamos_Form.h"
#include "Socios_Form.h"
#include "biblioteca.h"
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

/*
biblioteca* TInicioForm::getBiblioteca() {
    return &bibliotecaUPE;
}
*/


void __fastcall TInicioForm::BtnLibrosClick(TObject *Sender)
{
	LibrosForm->setBiblioteca(&bibliotecaUPE);
	this->Hide(); //Oculta el form actual
	LibrosForm->Show(); //Cambio al form de libros
}
//---------------------------------------------------------------------------

void __fastcall TInicioForm::BtnPrestamosClick(TObject *Sender)
{
    PrestamosForm->setBiblioteca(&bibliotecaUPE);
	this->Hide();
	PrestamosForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TInicioForm::BtnSociosClick(TObject *Sender)
{
	SociosForm->setBiblioteca(&bibliotecaUPE);
	this->Hide();
	SociosForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TInicioForm::BtnSalirClick(TObject *Sender)
{
   Application->Terminate();
}
//---------------------------------------------------------------------------


