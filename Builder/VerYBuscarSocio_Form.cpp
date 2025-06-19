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

//------------Simulación de placeholders---------

TEdit* txtboxs[] = {txtApellidoBuscar, txtDNIBuscar, txtDireccionCalleBuscar, txtNumTelBuscar, txtEdadBuscar,
					   txtFechaNacimientoBuscar, txtEmailBuscar};
String textos[] = {"Apellido", "DNI", "Dirección de calle","Número de teléfono", "Edad", "Fecha de nacimiento (D/M/A)", "E-mail"};

const int cantidadBoxs = sizeof(txtboxs) / sizeof(txtboxs[0]);

for (int i = 0; i < cantidadBoxs; i++) {

	if(txtboxs[i]->Text.Trim().IsEmpty())
	{
		txtboxs[i]->Text = textos[i];
		txtboxs[i]->Font->Color = clGrayText;
	}

	txtboxs[i]->Hint = textos[i];
	txtboxs[i]->OnEnter = TextBoxEnter;
	txtboxs[i]->OnExit = TextBoxExit;
}

}
//---------------------------------------------------------------------------

void __fastcall TVerYBuscarSocioForm::TextBoxEnter(TObject* Sender)
{
  TEdit* txtbox = dynamic_cast<TEdit*>(Sender);

  if ((txtbox->Text == txtbox->Hint) && (txtbox->Font->Color == clGrayText))
  {
	txtbox->Text = "";
	txtbox->Font->Color= clWindowText;
  }
}

void __fastcall TVerYBuscarSocioForm::TextBoxExit(TObject* Sender)
{
	TEdit* txtbox = dynamic_cast<TEdit*>(Sender);

	if(txtbox->Text.Trim().IsEmpty())
	{
	  txtbox->Text = txtbox->Hint;
	  txtbox->Font->Color= clGrayText;

	}

}

 //---------------------------------------------------------------------------

void TVerYBuscarSocioForm::MostrarCoincidencia(int fila, const socios& s) //una vez encontrada la coincicencia en la busqueda, se muestra los datos de esa fila
{

 StringGridSocios->Cells[0][fila] = s.getApellido().c_str();
 StringGridSocios->Cells[1][fila] = IntToStr(s.getDNI());
 StringGridSocios->Cells[2][fila] = s.getGenero().c_str();
 StringGridSocios->Cells[3][fila] = s.getDireccion().c_str();
 StringGridSocios->Cells[4][fila] = s.getTelefono().c_str();
 StringGridSocios->Cells[5][fila] = IntToStr(s.getEdad());
 StringGridSocios->Cells[6][fila] = s.getFechaNacimiento().c_str();
 StringGridSocios->Cells[7][fila] = s.getEmail().c_str();
}

//---------------------------------------------------------------------------

void __fastcall TVerYBuscarSocioForm::btnBuscarSocioClick(TObject *Sender)
{
   //Limpiamos el contenido de las celdas antes de buscar la información requerida
  for(int fila=1; fila<StringGridSocios->RowCount; ++fila)  //recorre las filas hasta que terminen
	{
		for (int col=0; col<8; ++col) //recorre las columnas
		{
		  StringGridSocios->Cells[col][fila] = ""; //limpia el contenido de las celdas
		}
	}

	StringGridSocios->RowCount=1;

	if (chkMostrarTodos->Checked)
	{
			bibliotecaUPE.cargarSociosCSV();

			const std::vector<socios>& listaSocios = bibliotecaUPE.getListaSocios();

			StringGridSocios->RowCount = listaSocios.size() + 1;

			for (int i = 0; i < listaSocios.size(); i++)
			{
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

	}else{

		   bibliotecaUPE.cargarSociosCSV();
		   const std::vector<socios>& listaSocios = bibliotecaUPE.getListaSocios();
		   StringGridSocios->RowCount = listaSocios.size() + 1;

		   int fila=1;

		   for(int i=0; i < listaSocios.size(); i++)
		   {
			 const socios& s = listaSocios[i];
			 bool coincide = true;

			 if((txtApellidoBuscar->Text.Trim() != "Apellido") && (CompareText(AnsiString(s.getApellido().c_str()).Trim(), txtApellidoBuscar->Text.Trim()) != 0))
			 {
				 coincide = false;
			 }
			 if((txtDNIBuscar->Text != "DNI") && (IntToStr(s.getDNI())!=txtDNIBuscar->Text))
			 {
				  coincide = false;
			 }
			 if((lstGeneroBuscar->ItemIndex != -1) && (AnsiString(s.getGenero().c_str()) != lstGeneroBuscar->Items->Strings[lstGeneroBuscar->ItemIndex]))
			 {
				  coincide = false;
			 }
			 if((txtDireccionCalleBuscar->Text != "Dirección de calle") && (AnsiString(s.getDireccion().c_str())!=txtDireccionCalleBuscar->Text))
			 {
				   coincide = false;
			 }
			 if((txtNumTelBuscar->Text != "Número de teléfono") && (AnsiString(s.getTelefono().c_str())!=txtNumTelBuscar->Text))
			 {
				   coincide = false;
			 }
			 if((txtEdadBuscar->Text != "Edad") && (IntToStr(s.getEdad())!=txtEdadBuscar->Text))
			 {
				   coincide = false;
			 }
			 if((txtFechaNacimientoBuscar->Text != "Fecha de nacimiento (D/M/A)") && (AnsiString(s.getFechaNacimiento().c_str())!=txtFechaNacimientoBuscar->Text))
			 {
				   coincide = false;
			 }
			 if((txtEmailBuscar->Text != "E-mail") && (AnsiString(s.getEmail().c_str())!=txtEmailBuscar->Text))
			 {
				   coincide = false;
			 }



			   if(coincide)
			   {
				 MostrarCoincidencia(fila, s);
				 fila++;
			   }

		   }
	   lstGeneroBuscar->ClearSelection();
	}

}

//---------------------------------------------------------------------------

