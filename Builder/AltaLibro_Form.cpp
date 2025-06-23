//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AltaLibro_Form.h"
#include "biblioteca.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAltaLibroForm *AltaLibroForm;
//---------------------------------------------------------------------------
__fastcall TAltaLibroForm::TAltaLibroForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void TAltaLibroForm::setBiblioteca(biblioteca* pBibliotecaUPE) {
    bibliotecaUPE = pBibliotecaUPE;
}

void __fastcall TAltaLibroForm::BtnAltaLibroClick(TObject *Sender)
{
	String nombre = EditNombreLibro->Text;   //Guardo los datos en un string
	String area = EditAreaLibro->Text;
	String subarea = EditSubAreaLibro->Text;
	String autores = EditAutorLibro->Text;
	String editorial = EditEditorialLibro->Text;
	String ubicacion = EditUbiLibro->Text;
	int anioPublicacion = 0;


	// Si hay un campo vacio, sale un cartel indicando que se completen los campos
	if (nombre.IsEmpty() || area.IsEmpty() || subarea.IsEmpty() || autores.IsEmpty() || editorial.IsEmpty() || ubicacion.IsEmpty()) {
		ShowMessage("Completar todos los campos");
		return;
	}

	if (ListBoxEstado->ItemIndex == -1) { //Indica que no hay ningun estado seleccionado (son 4 campos)
		ShowMessage("Por favor seleccione un estado del libro.");
		return;
	}
	String estado = ListBoxEstado->Items->Strings[ListBoxEstado->ItemIndex];

	if (!TryStrToInt(EditAñoLibro->Text, anioPublicacion)) { //Convierte lo ingresado a INT. Si los caracteres no son numericos, salta el mensaje y return
		ShowMessage("Año inválido. Ingrese solo números.");
		return;
	}
	if (anioPublicacion < 1500 || anioPublicacion > 2025) {   //Si el valor ingresado no está en este rango, salta el mensaje y return
		ShowMessage("Ingrese un año de publicación válido (1500 - 2025).");
		return;
	}

	bibliotecaUPE->altaLibro(nombre, area, subarea, autores, editorial, anioPublicacion, ubicacion, estado);

	ShowMessage("Libro agregado exitosamente");
}


