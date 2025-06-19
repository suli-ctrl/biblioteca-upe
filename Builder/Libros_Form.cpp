//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Libros_Form.h"
#include "Inicio_Form.h"
#include "AltaLibro_Form.h"
#include "BajaLibro_Form.h"
#include "VerYBuscarLibro_Form.h"
#include "ModificarLibro_Form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TLibrosForm *LibrosForm;
//---------------------------------------------------------------------------
__fastcall TLibrosForm::TLibrosForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TLibrosForm::MostrarFormEnPanel(TForm *form)//muestra un form dentro de otro
{
	for (int i = PanelContenedor->ControlCount-1; i >= 10; i--)//recorre los controles del PanelContenedor
	{
	 PanelContenedor->RemoveControl(PanelContenedor->Controls[i]); //elimina los controles del panel que se encuentra en ese indice
	}
		form->BorderStyle =bsNone; //le quita los bordes al formulario a insertar
		form->Align = alClient;  //Hace que el formulario a insertar ocupe todo el espacio del panel
		form->Parent = PanelContenedor; //establece que el PanelContenedor va a ser el contenedor padre del formulario
		form->Visible = true;  //hacemos visible al formulario
}
//---------------------------------------------------------------------------


void __fastcall TLibrosForm::BtnAltaLibroClick(TObject *Sender)
{
   TAltaLibroForm * Alta = new TAltaLibroForm(this); //se crea un puntero que apunta al Form a mostrar y se le pasa dinamicamente una nueva instancia
													 //del formulario quien recibe como parametro un puntero (this) que indica que TLibrosForm
													 //va a ser el encargado de administrar esa memoria dinamica y liberarlo cuando sea necesario
   MostrarFormEnPanel(Alta);  //se llama a la funcion para insertar el formulario en el panel

}
//---------------------------------------------------------------------------

void __fastcall TLibrosForm::BtnBajaLibroClick(TObject *Sender)
{
	 TBajaLibroForm  * Baja = new TBajaLibroForm(this);
	 MostrarFormEnPanel(Baja);

}
//---------------------------------------------------------------------------

void __fastcall TLibrosForm::BtnModificarLibroClick(TObject *Sender)
{
	TModificarLibroForm  * Modificar = new TModificarLibroForm (this);
	MostrarFormEnPanel(Modificar);


}
//---------------------------------------------------------------------------

void __fastcall TLibrosForm::BtnVerYBuscarLibroClick(TObject *Sender)
{
	TVerYBuscarLibroForm * VerBuscar = new TVerYBuscarLibroForm(this);
	MostrarFormEnPanel(VerBuscar);

}
//---------------------------------------------------------------------------

void __fastcall TLibrosForm::BtnVolverClick(TObject *Sender)
{
 this->Hide();
 InicioForm->Show();

}
//---------------------------------------------------------------------------

