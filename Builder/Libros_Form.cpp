//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Libros_Form.h"
#include "Inicio_Form.h"
#include "AltaLibro_Form.h"
#include "BajaLibro_Form.h"
#include "VerYBuscarLibro_Form.h"
#include "ModificarLibro_Form.h"
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
void __fastcall TLibrosForm::MostrarFormEnPanel(TForm *form)//muestra un form dentro de otro
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


void __fastcall TLibrosForm::BtnAltaLibroClick(TObject *Sender)
{
   TAltaLibroForm * Alta = new TAltaLibroForm(this);
   MostrarFormEnPanel(Alta);

}
//---------------------------------------------------------------------------

void __fastcall TLibrosForm::BtnBajaLibroClick(TObject *Sender)
{
	 TBajaLibroForm  * Baja = new TBajaLibroForm(this);
	 MostrarFormEnPanel(Baja);

}
//---------------------------------------------------------------------------

void __fastcall TLibrosForm::BtnModificarLibroClick(TObject *Sender)
{
	TModificarLibroForm  * Modificar = new TModificarLibroForm (this);
	MostrarFormEnPanel(Modificar);


}
//---------------------------------------------------------------------------

void __fastcall TLibrosForm::BtnVerYBuscarLibroClick(TObject *Sender)
{
	TVerYBuscarLibroForm * VerBuscar = new TVerYBuscarLibroForm(this);
	MostrarFormEnPanel(VerBuscar);

}
//---------------------------------------------------------------------------

void __fastcall TLibrosForm::BtnVolverClick(TObject *Sender)
{
 InicioForm->Show();
 this->Hide();

}
//---------------------------------------------------------------------------

