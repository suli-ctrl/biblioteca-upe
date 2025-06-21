//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RegistrarPrestamo_Form.h"
#include "biblioteca.h"
#include "funciones.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRegistrarPrestamoForm *RegistrarPrestamoForm;
//---------------------------------------------------------------------------
__fastcall TRegistrarPrestamoForm::TRegistrarPrestamoForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TRegistrarPrestamoForm::FormShow(TObject *Sender)
{
	bibliotecaUPE.cargarLibrosCSV();
	bibliotecaUPE.cargarSociosCSV();

	ListBoxLibro->Items->Clear();

	for (const auto& libro : bibliotecaUPE.getListaLibros())
	{
		ListBoxLibro->Items->Add(libro.getNombre().c_str());
	}


	ComboBoxDNI->Items->Clear();

	for (const auto& socio : bibliotecaUPE.getListaSocios())
	{
		ComboBoxDNI->Items->Add(socio.getDNI());
	}
}
//---------------------------------------------------------------------------

void __fastcall TRegistrarPrestamoForm::btnRegistrarPrestamoClick(TObject *Sender)

{
	String nombreLibro = ListBoxLibro->Items->Strings[ListBoxLibro->ItemIndex];
	String dniSocio = ComboBoxDNI->Text;
	String dias = ComboBoxDias->Text;
	String fechaActual = FormatDateTime("dd/mm/yyyy", Now());

	std::string nombre_libro = ConvertirStdString(nombreLibro);
	int dni = dniSocio.ToInt();
	int diasPrestamo = dias.ToInt();
	std::string fecha = ConvertirStdString(fechaActual);

	bibliotecaUPE.prestarLibro(nombre_libro, dni, fecha, diasPrestamo);


}
//---------------------------------------------------------------------------

