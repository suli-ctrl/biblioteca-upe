//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AltaSocio_Form.h"
#include "biblioteca.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAltaSocioForm *AltaSocioForm;
//---------------------------------------------------------------------------
__fastcall TAltaSocioForm::TAltaSocioForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAltaSocioForm::btnDarAltaClick(TObject *Sender)
{
	String apellido = txtApellidoAlta->Text;
	int DNI = 0;
	String direccion = txtDireccionCalleAlta->Text;
	String telefono = txtNumTelAlta->Text;
	//String fechaNacimiento = txtFechaNacimientoAlta->Text;
	TDateTime fechaNacimiento = DateTimeSocio->Date;



    String email = txtEmailAlta->Text;
	int edad = 0;
	String genero = lstGeneroAlta->Items->Strings[lstGeneroAlta->ItemIndex];

	try {
		DNI = txtDNIAlta->Text.ToInt(); //de string a int
	} catch (...) {
		ShowMessage("DNI invalido");
		return;
	}

	try {
		edad = txtEdadAlta->Text.ToInt(); //de string a int
	} catch (...) {
		ShowMessage("edad invalida");
		return;
	}

	bibliotecaUPE.altaSocio(DNI, edad, apellido, genero, direccion, telefono, fechaNacimiento, email);

	ShowMessage("Socio agregado exitosamente");
}
//---------------------------------------------------------------------------



