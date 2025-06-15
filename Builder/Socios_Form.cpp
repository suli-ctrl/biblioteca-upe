//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Socios_Form.h"
#include "Inicio_Form.h"
#include "AltaSocio_Form.h"
#include "BajaSocio_Form.h"
#include "ModificarSocio_Form.h"
#include "VerYBuscarSocio_Form.h"
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

  void __fastcall TSociosForm::MostrarFormEnPanel(TForm *form)
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
void __fastcall TSociosForm::BtnVolverClick(TObject *Sender)
{
  InicioForm->Show();
  this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TSociosForm::BtnAltaSocioClick(TObject *Sender)
{
	TAltaSocioForm * AltaSocio = new TAltaSocioForm(this);
	MostrarFormEnPanel(AltaSocio);

}
//---------------------------------------------------------------------------

void __fastcall TSociosForm::BtnBajaSocioClick(TObject *Sender)
{
	  TBajaSocioForm * BajaSocio = new TBajaSocioForm(this);
	  MostrarFormEnPanel(BajaSocio);
}
//---------------------------------------------------------------------------

void __fastcall TSociosForm::BtnModificarSocioClick(TObject *Sender)
{
	   TModificarSocioForm * ModificarSocio = new TModificarSocioForm(this);
	   MostrarFormEnPanel(ModificarSocio);
}
//---------------------------------------------------------------------------

void __fastcall TSociosForm::BtnVerYBuscarSocioClick(TObject *Sender)
{
		TVerYBuscarSocioForm * VerBuscarSocio = new TVerYBuscarSocioForm(this);
		MostrarFormEnPanel(VerBuscarSocio);
}
//---------------------------------------------------------------------------

