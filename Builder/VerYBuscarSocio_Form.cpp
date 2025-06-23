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

}
//---------------------------------------------------------------------------

void TVerYBuscarSocioForm::setBiblioteca(biblioteca* pBibliotecaUPE) {
	bibliotecaUPE = pBibliotecaUPE;
}

void __fastcall TVerYBuscarSocioForm::FormShow(TObject *Sender)
{
	bibliotecaUPE->cargarSociosCSV();

	const std::vector<socios>& listaSocios = bibliotecaUPE->getListaSocios();

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

TEdit* txtboxs[] = {txtApellidoBuscar, txtDNIBuscar, txtDireccionCalleBuscar, txtNumTelBuscar, txtEdadBuscar, //array de punteros que apunta a todos los textbox
					   txtFechaNacimientoBuscar, txtEmailBuscar};
String textos[] = {"Apellido", "DNI", "Dirección de calle","Número de teléfono", "Edad", "Fecha de nacimiento (D/M/A)", "E-mail"}; //array del contenido que va a tener los textbox (al cargar el form)

const int cantidadBoxs = sizeof(txtboxs) / sizeof(txtboxs[0]);//calcula cuantos elementos tiene el array de punteros de txtboxs

for (int i = 0; i < cantidadBoxs; i++) { //recorre todos los textboxs

	if(txtboxs[i]->Text.Trim().IsEmpty())  //si el textbox esta vacio o tiene espacios
	{
		txtboxs[i]->Text = textos[i]; //agarra el string que está en ese indice y lo mete adentro de la textbox
		txtboxs[i]->Font->Color = clGrayText; //le cambia el color de la letra al contenido del textbox
	}

	txtboxs[i]->Hint = textos[i]; //el contenido del textbox se lo guarda como un texto predeterminado
	txtboxs[i]->OnEnter = TextBoxEnter; //se le asigna un evento cuando se hace foco al textbox (se hace click en el textbox)
	txtboxs[i]->OnExit = TextBoxExit;  //se le asigna un evento cuando se deja de hacer foco al textbox clickeado (se clickea a otro)
}
}
//---------------------------------------------------------------------------

void __fastcall TVerYBuscarSocioForm::TextBoxEnter(TObject* Sender) //evento que se activa cuando se ingresa al textbox
{
  TEdit* txtbox = dynamic_cast<TEdit*>(Sender); //agarra al puntero del objeto que dispara al evento y lo convierte en un tipo de puntero TEdit* (tipo que apunta a un campo de texto)

  if ((txtbox->Text == txtbox->Hint) && (txtbox->Font->Color == clGrayText)) //si el texto actual es igual que al que está por defecto y el sus letras son de color clGrayText
  {
	txtbox->Text = ""; //se borra el contenido
	txtbox->Font->Color= clWindowText; //se cambia el color de la letra
  }
}

void __fastcall TVerYBuscarSocioForm::TextBoxExit(TObject* Sender)// evento que se activa cuando el usuario clickea en otro textbox
{
	TEdit* txtbox = dynamic_cast<TEdit*>(Sender);

	if(txtbox->Text.Trim().IsEmpty())  //si el contenido está vacío o tiene espacios
	{
	  txtbox->Text = txtbox->Hint; //se le vuelve asignar el contenido por defecto
	  txtbox->Font->Color= clGrayText; //se le pone de nuevo el color clGrayText

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

	StringGridSocios->RowCount=1; //inicializamos la fila en uno para mantener el encabezado

	if (chkMostrarTodos->Checked) //si el checkbox está checkeado
	{
			bibliotecaUPE->cargarSociosCSV();

			const std::vector<socios>& listaSocios = bibliotecaUPE->getListaSocios();

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

	}else{ //si el checkbox no está checkeado

		   bibliotecaUPE->cargarSociosCSV();
		   const std::vector<socios>& listaSocios = bibliotecaUPE->getListaSocios();
		   StringGridSocios->RowCount = listaSocios.size() + 1;

		   int fila=1;

		   for(int i=0; i < listaSocios.size(); i++)
		   {
			 const socios& s = listaSocios[i];
			 bool coincide = true;

			 if((txtApellidoBuscar->Text.Trim() != "Apellido") && (CompareText(AnsiString(s.getApellido().c_str()).Trim(), txtApellidoBuscar->Text.Trim()) != 0)) //compare text: parecido a strcmp pero que compara dos Ansistrings | c_str(): convierte un string en const char* |
																																									// AnsiString(): convierte un const char* en un AnsiString(cadena que usa la interfaz) | trim():elimina espacios iniciales y finales
			 {
                 coincide = false;
             }
			 if((txtDNIBuscar->Text != "DNI") && (CompareText(IntToStr(s.getDNI()).Trim(), txtDNIBuscar->Text.Trim()) != 0))
             {
                  coincide = false;
			 }
			 if((lstGeneroBuscar->ItemIndex != -1) && (CompareText(AnsiString(s.getGenero().c_str()).Trim(),  lstGeneroBuscar->Items->Strings[lstGeneroBuscar->ItemIndex]) != 0))
			 {
                  coincide = false;
             }
             if((txtDireccionCalleBuscar->Text != "Dirección de calle") && (CompareText(AnsiString(s.getDireccion().c_str()).Trim(), txtDireccionCalleBuscar->Text.Trim()) != 0))
             {
                   coincide = false;
			 }
			 if((txtNumTelBuscar->Text != "Número de teléfono") && (CompareText(AnsiString(s.getTelefono().c_str()).Trim(), txtNumTelBuscar->Text.Trim()) != 0))
             {
				   coincide = false;
             }
			 if((txtEdadBuscar->Text != "Edad") && (CompareText(IntToStr(s.getEdad()).Trim(), txtEdadBuscar->Text.Trim()) != 0))
             {
                   coincide = false;
             }
			 if((txtFechaNacimientoBuscar->Text != "Fecha de nacimiento (D/M/A)") && (CompareText(AnsiString(s.getFechaNacimiento().c_str()).Trim(), txtFechaNacimientoBuscar->Text.Trim()) != 0))
             {
                   coincide = false;
			 }
			 if((txtEmailBuscar->Text != "E-mail") && (CompareText(AnsiString(s.getEmail().c_str()).Trim(), txtEmailBuscar->Text.Trim()) != 0))
			 {
                   coincide = false;
			 }



			   if(coincide) // si el socio pasó todos los filtros
			   {
				 MostrarCoincidencia(fila, s);
				 fila++;
			   }

		   }
	   lstGeneroBuscar->ClearSelection(); //se limpia la opción seleccionada en el listbox
	}

}

//---------------------------------------------------------------------------



