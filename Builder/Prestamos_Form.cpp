//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Prestamos_Form.h"
#include "Inicio_Form.h"
#include "RegistrarDevolucion_Form.h"
#include "RegistrarPrestamo_Form.h"
#include "VerPrestamo_Form.h"
#include "biblioteca.h"
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

void TPrestamosForm::setBiblioteca(biblioteca* pBibliotecaUPE) {
    bibliotecaUPE = pBibliotecaUPE;
}


void __fastcall TPrestamosForm::MostrarFormEnPanel(TForm *form)
{
	for (int i = PanelContenedor->ControlCount-1; i >= 10; i--)
	{
	 PanelContenedor->RemoveControl(PanelContenedor->Controls[i]);
	}
		form->BorderStyle =bsNone;
		form->Align = alClient;
		form->Parent = PanelContenedor;
		form->Visible = true;

}

//---------------------------------------------------------------------------
void __fastcall TPrestamosForm::BtnRegistrarPrestamoClick(TObject *Sender)
{
	TRegistrarPrestamoForm * RegistrarPrestamo = new TRegistrarPrestamoForm(this);
	RegistrarPrestamo->setBiblioteca(bibliotecaUPE);
	MostrarFormEnPanel(RegistrarPrestamo);

}
//---------------------------------------------------------------------------

void __fastcall TPrestamosForm::BtnRegistrarDevolucionClick(TObject *Sender)
{
	TRegistarDevoluciónForm * RegistrarDevolucion = new TRegistarDevoluciónForm(this);
	RegistrarDevolucion->setBiblioteca(bibliotecaUPE);
	MostrarFormEnPanel(RegistrarDevolucion);

}
//---------------------------------------------------------------------------

void __fastcall TPrestamosForm::BtnVerPrestamosClick(TObject *Sender)
{
	 TVerPrestamoActivoForm * VerPrestamo = new TVerPrestamoActivoForm(this);
     VerPrestamo->setBiblioteca(bibliotecaUPE);
	 MostrarFormEnPanel(VerPrestamo);

}
//---------------------------------------------------------------------------

void __fastcall TPrestamosForm::BtnVolverClick(TObject *Sender)
{
    this->Hide();
	InicioForm->Show();
}
//---------------------------------------------------------------------------

