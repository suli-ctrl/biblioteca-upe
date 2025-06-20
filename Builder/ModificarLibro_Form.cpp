//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ModificarLibro_Form.h"
#include "biblioteca.h"
#include "funciones.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TModificarLibroForm *ModificarLibroForm;
//---------------------------------------------------------------------------
__fastcall TModificarLibroForm::TModificarLibroForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TModificarLibroForm::FormShow(TObject *Sender)
{
	bibliotecaUPE.cargarLibrosCSV();
	//Para mostrar los libros en el ComboBox
	ComboBoxBusqueda->Items->Clear();

	for (const auto& libro : bibliotecaUPE.getListaLibros())
	{
		ComboBoxBusqueda->Items->Add(libro.getNombre().c_str());
	}
}
//---------------------------------------------------------------------------

void __fastcall TModificarLibroForm::BtnBuscarNomAModiClick(TObject *Sender)
{
	std::string nombre_libro_modificar = ConvertirStdString(ComboBoxBusqueda->Text); //Cambio a std string el texto obtenido desde el combobox

	bool existe = false;
	int nuevoAnio = 0;

	const std::vector<libros>& listaLibros = bibliotecaUPE.getListaLibros();

	for (int i = 0; i < listaLibros.size(); i++)
	{
		if (listaLibros[i].getNombre().compare(nombre_libro_modificar) == 0) //similar a strcmp
		{
			existe = true;

			txtNombreAModi->Text = listaLibros[i].getNombre().c_str();
			txtAreaAModi->Text = listaLibros[i].getArea().c_str();
			txtSubAreaAModi->Text = listaLibros[i].getSubArea().c_str();
			txtEditorialAModi->Text = listaLibros[i].getEditorial().c_str();
			txtAutoresAModi->Text = listaLibros[i].getAutores().c_str();
			txtUbicacionAModi->Text = listaLibros[i].getUbicacion().c_str();
			txtAnioPublicacionAModi->Text = IntToStr(listaLibros[i].getAnioDePublicacion());
			ComboBoxEstado->Text = listaLibros[i].getEstado().c_str();

			break;
		}
	}
	if (!existe)
	{
		ShowMessage("Libro no encontrado");

	}
}
//---------------------------------------------------------------------------


void __fastcall TModificarLibroForm::btnModificarLibroClick(TObject *Sender)
{
	std::string nombre_original = ConvertirStdString(ComboBoxBusqueda->Text);
	std::vector<libros>& listaLibros = bibliotecaUPE.getListaLibrosModificable();

	bool modificado = false;

	for (int i = 0; i < listaLibros.size(); i++)
	{
		if (listaLibros[i].getNombre() == nombre_original)
		{
			modificado = true;

			std::string nuevoNombre = ConvertirStdString(txtNombreAModi->Text);
			std::string nuevaArea = ConvertirStdString(txtAreaAModi->Text);
			std::string nuevaSubArea = ConvertirStdString(txtSubAreaAModi->Text);
			std::string nuevaEditorial = ConvertirStdString(txtEditorialAModi->Text);
			std::string nuevosAutores = ConvertirStdString(txtAutoresAModi->Text);
			std::string nuevaUbicacion = ConvertirStdString(txtUbicacionAModi->Text);
			int nuevoAnio = StrToIntDef(txtAnioPublicacionAModi->Text, 0);
			std::string nuevoEstado = ConvertirStdString(ComboBoxEstado->Text);

			listaLibros[i].setNombre(nuevoNombre);
			listaLibros[i].setArea(nuevaArea);
			listaLibros[i].setSubArea(nuevaSubArea);
			listaLibros[i].setEditorial(nuevaEditorial);
			listaLibros[i].setAutores(nuevosAutores);
			listaLibros[i].setUbicacion(nuevaUbicacion);
			listaLibros[i].setAnioDePublicacion(nuevoAnio);
			listaLibros[i].setEstado(nuevoEstado);
            listaLibros[i].setCodigoBarras(listaLibros[i].codBarras()); //Vuelve a generar el cod de barras por si se cambia algo relevante


			break;
		}
	}

	if (modificado)
	{
		bibliotecaUPE.guardarLibrosCSV();
		ShowMessage("Libro modificado correctamente.");
	}

}
//---------------------------------------------------------------------------

