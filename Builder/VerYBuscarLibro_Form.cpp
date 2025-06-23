//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "VerYBuscarLibro_Form.h"
#include "biblioteca.h"
#include "libros.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TVerYBuscarLibroForm *VerYBuscarLibroForm;
//---------------------------------------------------------------------------
__fastcall TVerYBuscarLibroForm::TVerYBuscarLibroForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void TVerYBuscarLibroForm::setBiblioteca(biblioteca* pBibliotecaUPE) {
    bibliotecaUPE = pBibliotecaUPE;
}

void __fastcall TVerYBuscarLibroForm::FormShow(TObject *Sender)
{
	bibliotecaUPE->cargarLibrosCSV();

	const std::vector<libros>& listaLibros = bibliotecaUPE->getListaLibros();

	StringGridLibros->ColCount = 9;
	StringGridLibros->RowCount = listaLibros.size() + 1;

	StringGridLibros->Cells[0][0] = "Nombre";
	StringGridLibros->Cells[1][0] = "Área";
	StringGridLibros->Cells[2][0] = "Subárea";
	StringGridLibros->Cells[3][0] = "Autores";
	StringGridLibros->Cells[4][0] = "Editorial";
	StringGridLibros->Cells[5][0] = "Año";
	StringGridLibros->Cells[6][0] = "Ubicación";
	StringGridLibros->Cells[7][0] = "Estado";
	StringGridLibros->Cells[8][0] = "Codigo de barras";

	for (int i = 0; i < listaLibros.size(); i++) {

		const libros& l = listaLibros[i];

		StringGridLibros->Cells[0][i+1] = l.getNombre().c_str();
		StringGridLibros->Cells[1][i+1] = l.getArea().c_str();
		StringGridLibros->Cells[2][i+1] = l.getSubArea().c_str();
		StringGridLibros->Cells[3][i+1] = l.getAutores().c_str();
		StringGridLibros->Cells[4][i+1] = l.getEditorial().c_str();
		StringGridLibros->Cells[5][i+1] = IntToStr(l.getAnioDePublicacion());
		StringGridLibros->Cells[6][i+1] = l.getUbicacion().c_str();
		StringGridLibros->Cells[7][i+1] = l.getEstado().c_str();
		StringGridLibros->Cells[8][i+1] = l.getCodigoBarras().c_str();
	}


//------------Simulación de placeholders---------

TEdit* txtboxs[] = {txtNombreBuscar, txtAreaBuscar, txtSubAreaBuscar, txtAutoresBuscar, txtEditorialBuscar,
					   txtAnioPublicacionBuscar, txtUbicacionBuscar, txtCodBarrasBuscar};
String textos[] = {"Nombre", "Area", "SubArea","Autores", "Editorial", "Año de publicación", "Ubicación (EstN°-FN°)", "Código de barras"};

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

void __fastcall TVerYBuscarLibroForm::TextBoxEnter(TObject* Sender)
{
  TEdit* txtbox = dynamic_cast<TEdit*>(Sender);

  if ((txtbox->Text == txtbox->Hint) && (txtbox->Font->Color == clGrayText))
  {
	txtbox->Text = "";
	txtbox->Font->Color= clWindowText;
  }
}

void __fastcall TVerYBuscarLibroForm::TextBoxExit(TObject* Sender)
{
	TEdit* txtbox = dynamic_cast<TEdit*>(Sender);

	if(txtbox->Text.Trim().IsEmpty())
	{
	  txtbox->Text = txtbox->Hint;
	  txtbox->Font->Color= clGrayText;

	}

}

//---------------------------------------------------------------------------

void TVerYBuscarLibroForm::MostrarCoincidencia(int fila, const libros& l) //una vez encontrada la coincicencia en la busqueda, se muestra los datos de esa fila
{

 StringGridLibros->Cells[0][fila] = l.getNombre().c_str();
 StringGridLibros->Cells[1][fila] = l.getArea().c_str();
 StringGridLibros->Cells[2][fila] = l.getSubArea().c_str();
 StringGridLibros->Cells[3][fila] = l.getAutores().c_str();
 StringGridLibros->Cells[4][fila] = l.getEditorial().c_str();
 StringGridLibros->Cells[5][fila] = IntToStr(l.getAnioDePublicacion());
 StringGridLibros->Cells[6][fila] = l.getUbicacion().c_str();
 StringGridLibros->Cells[7][fila] = l.getEstado().c_str();
}

//---------------------------------------------------------------------------


void __fastcall TVerYBuscarLibroForm::btnBuscarLibroClick(TObject *Sender)
{

  //Limpiamos el contenido de las celdas antes de buscar la información requerida
  for(int fila=1; fila<StringGridLibros->RowCount; ++fila)  //recorre las filas hasta que terminen
	{
		for (int col=0; col<8; ++col) //recorre las columnas
		{
		  StringGridLibros->Cells[col][fila] = ""; //limpia el contenido de las celdas
		}
	}

    StringGridLibros->RowCount=1;

	if (chkMostrarTodos->Checked)
	{
			bibliotecaUPE->cargarLibrosCSV();

			const std::vector<libros>& listaLibros = bibliotecaUPE->getListaLibros();

			StringGridLibros->RowCount = listaLibros.size() + 1;

			for (int i = 0; i < listaLibros.size(); i++)
			{
			const libros& l = listaLibros[i];

			StringGridLibros->Cells[0][i+1] = l.getNombre().c_str();
			StringGridLibros->Cells[1][i+1] = l.getArea().c_str();
			StringGridLibros->Cells[2][i+1] = l.getSubArea().c_str();
			StringGridLibros->Cells[3][i+1] = l.getAutores().c_str();
			StringGridLibros->Cells[4][i+1] = l.getEditorial().c_str();
			StringGridLibros->Cells[5][i+1] = IntToStr(l.getAnioDePublicacion());
			StringGridLibros->Cells[6][i+1] = l.getUbicacion().c_str();
			StringGridLibros->Cells[7][i+1] = l.getEstado().c_str();
			}

	}else{

	   bibliotecaUPE->cargarLibrosCSV();
	   const std::vector<libros>& listaLibros = bibliotecaUPE->getListaLibros();
	   StringGridLibros->RowCount = listaLibros.size() + 1;

	   int fila=1;

	   for(int i=0; i < listaLibros.size(); i++)
	   {
		 const libros& l = listaLibros[i];
		 bool coincide = true;

	     if((txtNombreBuscar->Text != "Nombre") && (CompareText(AnsiString(l.getNombre().c_str()).Trim(), txtNombreBuscar->Text.Trim()) != 0))
         {
             coincide = false;
         }
		 if((txtAreaBuscar->Text != "Area") && (CompareText(AnsiString(l.getArea().c_str()).Trim(), txtAreaBuscar->Text.Trim()) != 0))
         {
             coincide = false;
         }
		 if((txtSubAreaBuscar->Text != "SubArea") && (CompareText(AnsiString(l.getSubArea().c_str()).Trim(), txtSubAreaBuscar->Text.Trim()) != 0))
         {
             coincide = false;
         }
		 if((txtAutoresBuscar->Text != "Autores") && (CompareText(AnsiString(l.getAutores().c_str()).Trim(), txtAutoresBuscar->Text.Trim()) != 0))
         {
             coincide = false;
		 }
		 if((txtEditorialBuscar->Text != "Editorial") && (CompareText(AnsiString(l.getEditorial().c_str()).Trim(), txtEditorialBuscar->Text.Trim()) != 0))
		 {
             coincide = false;
		 }
		 if((txtAnioPublicacionBuscar->Text != "Año de publicación") && (CompareText(IntToStr(l.getAnioDePublicacion()).Trim(), txtAnioPublicacionBuscar->Text.Trim()) != 0))
		 {
			 coincide = false;
		 }
		 if((txtUbicacionBuscar->Text != "Ubicación (EstN°-FN°)") && (CompareText(AnsiString(l.getUbicacion().c_str()).Trim(), txtUbicacionBuscar->Text.Trim()) != 0))
		 {
			 coincide = false;
		 }
		 if ((lstEstadoBuscar->ItemIndex != -1) && (CompareText(AnsiString(l.getEstado().c_str()).Trim(),  lstEstadoBuscar->Items->Strings[lstEstadoBuscar->ItemIndex]) != 0))
		 {
			 coincide = false;
		 }

		   if(coincide)
		   {
			 MostrarCoincidencia(fila, l);
			 fila++;
		   }

	   }

	lstEstadoBuscar->ClearSelection();

	}

}
//---------------------------------------------------------------------------

