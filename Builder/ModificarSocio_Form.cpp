//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ModificarSocio_Form.h"
#include "biblioteca.h"
#include "funciones.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TModificarSocioForm *ModificarSocioForm;
//---------------------------------------------------------------------------
__fastcall TModificarSocioForm::TModificarSocioForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void TModificarSocioForm::setBiblioteca(biblioteca* pBibliotecaUPE) {
	bibliotecaUPE = pBibliotecaUPE;
}


 void __fastcall TModificarSocioForm::FormShow(TObject *Sender)
{
	bibliotecaUPE->cargarSociosCSV();
	//Para mostrar el DNI de los socios en el ComboBox
   ComboBoxBusqueda->Items->Clear();

	for (const auto& socio : bibliotecaUPE->getListaSocios())
	{
		ComboBoxBusqueda->Items->Add(socio.getDNI());
	}

}
//---------------------------------------------------------------------------

void __fastcall TModificarSocioForm::btnBuscarSocioModiClick(TObject *Sender)
{
   std::string DNI_Socio_Modificar  = ConvertirStdString(ComboBoxBusqueda->Text);
   std::vector<std::string> generos = {"Masculino","Femenino","No especificado"};
   std::string generoActual;
	bool existe = false;
	int nuevoDni = 0;

	const std::vector<socios>& listaSocios = bibliotecaUPE->getListaSocios();

	for (int i = 0; i < listaSocios.size(); i++)
	{
		if (std::to_string(listaSocios[i].getDNI()).compare(DNI_Socio_Modificar) == 0)
		{
			existe = true;

			txtApellidoAModi->Text = listaSocios[i].getApellido().c_str();
			txtDireccionCalleAModi->Text = listaSocios[i].getDireccion().c_str();
			txtDNIAModi->Text = IntToStr(listaSocios[i].getDNI());
			txtEdadAModi->Text  =  IntToStr(listaSocios[i].getEdad());
			txtFechaNacimientoAModi->Text = listaSocios[i].getFechaNacimiento().c_str();
			txtNumTelAModi->Text = listaSocios[i].getTelefono().c_str();
			txtEmailAModi->Text = listaSocios[i].getEmail().c_str();
		    ComboBoxGenero->Text = listaSocios[i].getGenero().c_str();
			generoActual = listaSocios[i].getGenero();

			for (const auto& genero : generos) //recorre el vector de generos
			{
			  ComboBoxGenero->Items->Add(genero.c_str()); //agrega como items a todos los generos
			}
			 ComboBoxGenero->Text = generoActual.c_str(); //deja como seleccionado al genero que guardamos en genero actual

			break;
		}
	}
	if (!existe)
	{
		ShowMessage("Socio no encontrado");

	}
}
//---------------------------------------------------------------------------

void __fastcall TModificarSocioForm::btnModificarClick(TObject *Sender)
{
	std::string DNI_original = ConvertirStdString(ComboBoxBusqueda->Text);
	std::vector<socios>& listaSocios = bibliotecaUPE->getListaSociosModificable();


	bool modificado = false;

	for (int i = 0; i < listaSocios.size(); i++)
	{
		if (std::to_string(listaSocios[i].getDNI()) == DNI_original)
		{
			modificado = true;

			std::string NuevoApellido =  ConvertirStdString(txtApellidoAModi->Text);
			std::string NuevaDireccion  =  ConvertirStdString(txtDireccionCalleAModi->Text);
			int NuevoDNI = StrToIntDef(txtDNIAModi->Text, 0);
			int NuevaEdad = StrToIntDef(txtEdadAModi->Text, 0);
			std::string NuevaFechaNacimiento =  ConvertirStdString(txtFechaNacimientoAModi->Text);
			std::string NuevoNumTel =  ConvertirStdString(txtNumTelAModi->Text);
			std::string NuevoEmail =  ConvertirStdString(txtEmailAModi->Text);
			std::string NuevoGenero  =   ConvertirStdString(ComboBoxGenero->Text);


			listaSocios[i].setApellido(NuevoApellido);
			listaSocios[i].setDireccion(NuevaDireccion);
			listaSocios[i].setDni(NuevoDNI);
			listaSocios[i].setEdad(NuevaEdad);
			listaSocios[i].setFechaNacimiento(NuevaFechaNacimiento);
			listaSocios[i].setTelefono(NuevoNumTel);
			listaSocios[i].setEmail(NuevoEmail);
			listaSocios[i].setGenero(NuevoGenero);



			break;
		}
	}

	if (modificado)
	{
		bibliotecaUPE->guardarSociosCSV();
		ShowMessage("Socio modificado correctamente.");
	}

}
//---------------------------------------------------------------------------

