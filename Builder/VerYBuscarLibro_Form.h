//---------------------------------------------------------------------------

#ifndef VerYBuscarLibro_FormH
#define VerYBuscarLibro_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include "biblioteca.h"
//---------------------------------------------------------------------------
class TVerYBuscarLibroForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblModificarLibro;
	TEdit *txtNombreBuscar;
	TEdit *txtAreaBuscar;
	TEdit *txtSubAreaBuscar;
	TEdit *txtAutoresBuscar;
	TEdit *txtAnioPublicacionBuscar;
	TEdit *txtEditorialBuscar;
	TEdit *txtUbicacionBuscar;
	TListBox *lstEstadoBuscar;
	TEdit *txtCodBarrasBuscar;
	TCheckBox *chkMostrarTodos;
	TStringGrid *StringGridLibros;
	TButton *btnBuscarLibro;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnBuscarLibroClick(TObject *Sender);
	void __fastcall TextBoxEnter(TObject* Sender);
	void __fastcall TextBoxExit(TObject* Sender);
private:	// User declarations
	biblioteca bibliotecaUPE; //instancio la clase
	void MostrarCoincidencia(int fila, const libros& l); //muestra los datos de las coincidencias encontradas durante la busqueda
public:		// User declarations
	__fastcall TVerYBuscarLibroForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TVerYBuscarLibroForm *VerYBuscarLibroForm;
//---------------------------------------------------------------------------
#endif
