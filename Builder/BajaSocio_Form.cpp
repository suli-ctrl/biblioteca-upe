//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "BajaSocio_Form.h"
#include "biblioteca.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBajaSocioForm *BajaSocioForm;
//---------------------------------------------------------------------------
__fastcall TBajaSocioForm::TBajaSocioForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TBajaSocioForm::FormShow(TObject *Sender)
{
	ComboBoxBaja->Items->Clear();

	bibliotecaUPE.cargarSociosCSV();

	const std::vector<socios>& socios = bibliotecaUPE.getListaSocios();

	for (int i = 0; i < socios.size(); ++i)
	{
		ComboBoxBaja->Items->Add(String(socios[i].getDNI()));
	}
}
//---------------------------------------------------------------------------

void __fastcall TBajaSocioForm::btnDarBajaClick(TObject *Sender)
{
	String socioBaja = ComboBoxBaja->Text;

	bibliotecaUPE.bajaSocio(socioBaja);
}
//---------------------------------------------------------------------------

