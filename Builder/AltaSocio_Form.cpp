//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AltaSocio_Form.h"
#include "biblioteca.h"
#include <string>
#include <cctype>

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
	int edad = 0;
	String direccion = txtDireccionCalleAlta->Text;
	String telefono = txtNumTelAlta->Text;
	//String fechaNacimiento = txtFechaNacimientoAlta->Text;
	TDateTime fechaNacimiento = DateTimeSocio->Date;

	String dniStr = txtDNIAlta->Text;
	String edadStr = txtEdadAlta->Text;

    String email = txtEmailAlta->Text;




	//-----------------Validacinoes------------------------------//


	//Por si estan vacios
	if (apellido.IsEmpty() || direccion.IsEmpty() || telefono.IsEmpty() || email.IsEmpty() || edadStr.IsEmpty() || dniStr.IsEmpty() ) {

		ShowMessage("Completar todos los campos.");
		return;
	}

	// Apellido
	for (int i = 1; i <= apellido.Length(); i++) {   //Un for que revisa que cada caracter sea una letra (no acepta numeros ni simbolos)
		if (!isalpha(apellido[i])) { //isalpha es una funcion de c++ que verifica que el caracter sea una letra
			ShowMessage("El apellido solo puede tener letras");
			return;
		}
	}

	// DNI

	if (!TryStrToInt(txtDNIAlta->Text, DNI)) {  //Convierte lo ingresado a INT. Si los caracteres no son numericos, salta el mensaje y return
		ShowMessage("El DNI debe tener solo caracteres numericos");
		return;
	}
	if (DNI < 10000000 || DNI > 99999999) {
		ShowMessage("El DNI debe tener 8 cifras.");
		return;
	}

	// Edad


	if (!TryStrToInt(txtEdadAlta->Text, edad)) { //Convierte lo ingresado a INT. Si los caracteres no son numericos, salta el mensaje y return
		ShowMessage("La edad debe tener solo caracteres numericos");
		return;
	}
	if (edad < 18 || edad > 100) {
		ShowMessage("La edad debe estar entre 18 y 100 años");
		return;
	}

	// Direccion        //FindFirstNotOf no funca
	/*
	if (direccion.FindFirstNotOf(" ") == -1) { // uso find first not of que busca en el string un caracter distinto al que le paso, esto me sirve para ver si el usuario ingresa todo espacios, como le mando espacios si solo encuantra eso devuelve npos
		ShowMessage("Ingrese una direccion valida.");
		return;
	}
	*/
	for (int i = 1; i <= direccion.Length(); i++) { //Recorro caracter a caracter la direccion
		if (!(isalnum(direccion[i]) || direccion[i] == ' ')) { //Busco caracteres que no sean letra, numero o espacio (en caso de ser asi salta el mensaje y return)
			ShowMessage("La direccion solo puede contener letras, numeros y espacios.");
			return;
		}
	}

	// Telefono
	if (telefono.Length() != 10) {
		ShowMessage("El telefono debe tener 10 digitos");
		return;
	}
	for (int i = 1; i <= telefono.Length(); i++) {
		if (!isdigit(telefono[i])) { //Si no es digito (numeros) es invalido y salta el mensaje y return
			ShowMessage("El telefono solo debe contener numeros");
			return;
		}
	}

	// Email
	int arrobas = 0, puntos = 0;
	for (int i = 1; i <= email.Length(); i++) {
		if (email[i] == '@') arrobas++;
		else if (email[i] == '.') puntos++;
		else if (!isalnum(email[i])) {
			ShowMessage("El email contiene caracteres inválidos.");
			return;
		}
	}
	if (arrobas != 1 || puntos != 1 || email.Pos("@") > email.Pos(".")) {
		ShowMessage("El email debe tener formato válido: usuario@dominio.com");
		return;
	}

	// Genero
	if (lstGeneroAlta->ItemIndex == -1) {
		ShowMessage("Seleccione un genero");
		return;
	}
	String genero = lstGeneroAlta->Items->Strings[lstGeneroAlta->ItemIndex];



	bibliotecaUPE.altaSocio(DNI, edad, apellido, genero, direccion, telefono, fechaNacimiento, email);

	ShowMessage("Socio agregado exitosamente");
}
//---------------------------------------------------------------------------



