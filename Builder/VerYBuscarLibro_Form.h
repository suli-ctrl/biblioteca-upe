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
private:	// User declarations
	biblioteca bibliotecaUPE; //instancio la clase
public:		// User declarations
	__fastcall TVerYBuscarLibroForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TVerYBuscarLibroForm *VerYBuscarLibroForm;
//---------------------------------------------------------------------------
#endif
