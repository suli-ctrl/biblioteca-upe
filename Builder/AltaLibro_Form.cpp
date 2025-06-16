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

void __fastcall TAltaLibroForm::BtnAltaLibroClick(TObject *Sender)
{
	String nombre = EditNombreLibro->Text;   //Guardo los datos en un string
	String area = EditAreaLibro->Text;
	String subarea = EditSubAreaLibro->Text;
	String autores = EditAutorLibro->Text;
	String editorial = EditEditorialLibro->Text;
	String ubicacion = EditUbiLibro->Text;
	String estado = ListBoxEstado->Items->Strings[ListBoxEstado->ItemIndex];
	int anioPublicacion = 0;


	try {
		anioPublicacion = EditAñoLibro->Text.ToInt(); //de string a int
    } catch (...) {
		ShowMessage("Año invalido");
		return;
	}

	bibliotecaUPE.altaLibro(nombre, area, subarea, autores, editorial, anioPublicacion, ubicacion, estado);

	ShowMessage("Libro agregado exitosamente");
}
//---------------------------------------------------------------------------

