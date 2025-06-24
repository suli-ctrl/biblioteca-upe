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

//funcion auxiliar para validar texto alfabetico (con tildes, guiones, espacios)
bool esTextoAlfabetico(const String& texto) {
	for (int i = 1; i <= texto.Length(); i++)
	 {
		wchar_t c = texto[i];
		if (!(IsCharAlpha(c) || c == ' ' || c == '-'))
		{
			return false;
		}
	}
	return true;
}

bool validarUbicacionManual(const String& input)
{
	if (input.Pos("Est") != 1)
	{
		return false;
	}

	int posGuion = input.Pos("-");

	if (posGuion == 0 || posGuion < 4)
	{
		return false;
	}

	String numEstante = input.SubString(4, posGuion - 3); // 4 = despues de "Est", largo = diferencia
	String resto = input.SubString(posGuion + 1, input.Length());

	if (resto.Pos("F") != 1)
	{
		return false;
	}

	String numFila = resto.SubString(2, resto.Length());

	if (numEstante.IsEmpty() || numFila.IsEmpty())
	{
		return false;
	}

	for (int i = 1; i <= numEstante.Length(); i++)
	{
		if (!isdigit(numEstante[i]))
		{
			return false;
		}
	}

	for (int i = 1; i <= numFila.Length(); i++)
	{
		if (!isdigit(numFila[i]))
		{
			return false;
		}
	}

	if (numEstante.ToInt() <= 0 || numFila.ToInt() <= 0)
	{
		return false;
	}

	return true;
}

void TAltaLibroForm::setBiblioteca(biblioteca* pBibliotecaUPE) {
	bibliotecaUPE = pBibliotecaUPE;
}

void __fastcall TAltaLibroForm::BtnAltaLibroClick(TObject *Sender)
{
	String nombre = EditNombreLibro->Text;
	String area = EditAreaLibro->Text;
	String subarea = EditSubAreaLibro->Text;
	String autores = EditAutorLibro->Text;
	String editorial = EditEditorialLibro->Text;
	String ubicacion = EditUbiLibro->Text;
	int anioPublicacion = 0;

	if (nombre.IsEmpty() || area.IsEmpty() || subarea.IsEmpty() || autores.IsEmpty() || editorial.IsEmpty() || ubicacion.IsEmpty())
	{
		ShowMessage("Completar todos los campos");
		return;
	}

	//validaciones de campos alfabeticos
	if (!esTextoAlfabetico(area))
	 {
		ShowMessage("El campo 'Area' solo debe contener letras.");
		return;
	}
	if (!esTextoAlfabetico(subarea))
	 {
		ShowMessage("El campo 'Subarea' solo debe contener letras.");
		return;
	}
	if (!esTextoAlfabetico(autores))
	{
		ShowMessage("El campo 'Autores' solo debe contener letras.");
		return;
	}

	if (ListBoxEstado->ItemIndex == -1)
	{
		ShowMessage("Por favor seleccione un estado del libro.");
		return;
	}
	String estado = ListBoxEstado->Items->Strings[ListBoxEstado->ItemIndex];

	if (!TryStrToInt(EditAñoLibro->Text, anioPublicacion))
	{
		ShowMessage("Año invalido. Ingrese solo numeros.");
		return;
	}
	if (anioPublicacion < 1500 || anioPublicacion > 2025)
	{
		ShowMessage("Ingrese un año de publicación valido (1500 - 2025).");
		return;
	}

	if (!validarUbicacionManual(ubicacion))
	{
		ShowMessage("Ubicación inválida. Debe seguir el formato EstN-FN (ej: Est2-F5).");
		return;
	}

	bibliotecaUPE->altaLibro(nombre, area, subarea, autores, editorial, anioPublicacion, ubicacion, estado);

	ShowMessage("Libro agregado exitosamente");
}


