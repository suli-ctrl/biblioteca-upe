//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "VerYBuscarSocio_Form.h"
#include "biblioteca.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TVerYBuscarSocioForm *VerYBuscarSocioForm;
//---------------------------------------------------------------------------
__fastcall TVerYBuscarSocioForm::TVerYBuscarSocioForm(TComponent* Owner)
	: TForm(Owner)
{
	bibliotecaUPE.cargarSociosCSV();

	const std::vector<socios>& listaSocios = bibliotecaUPE.getListaSocios();

	StringGridSocios->ColCount = 8;
	StringGridSocios->RowCount = listaSocios.size() + 1;

	StringGridSocios->Cells[0][0] = "Apellido";
	StringGridSocios->Cells[1][0] = "DNI";
	StringGridSocios->Cells[2][0] = "Genero";
	StringGridSocios->Cells[3][0] = "Direccion";
	StringGridSocios->Cells[4][0] = "Telefono";
	StringGridSocios->Cells[5][0] = "Edad";
	StringGridSocios->Cells[6][0] = "Fecha de nacimiento";
	StringGridSocios->Cells[7][0] = "Email";

	for (int i = 0; i < listaSocios.size(); i++) {

		const socios& s = listaSocios[i];

		StringGridSocios->Cells[0][i+1] = s.getApellido().c_str();
		StringGridSocios->Cells[1][i+1] = IntToStr(s.getDNI());
		StringGridSocios->Cells[2][i+1] = s.getGenero().c_str();
		StringGridSocios->Cells[3][i+1] = s.getDireccion().c_str();
		StringGridSocios->Cells[4][i+1] = s.getTelefono().c_str();
		StringGridSocios->Cells[5][i+1] = IntToStr(s.getEdad());
		StringGridSocios->Cells[6][i+1] = s.getFechaNacimiento().c_str();
		StringGridSocios->Cells[7][i+1] = s.getEmail().c_str();
	}
}
//---------------------------------------------------------------------------

