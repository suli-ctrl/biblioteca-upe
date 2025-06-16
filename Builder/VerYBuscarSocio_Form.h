//---------------------------------------------------------------------------

#ifndef VerYBuscarSocio_FormH
#define VerYBuscarSocio_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include "biblioteca.h"
//---------------------------------------------------------------------------
class TVerYBuscarSocioForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblModificarSocio;
	TEdit *txtApellidoBuscar;
	TEdit *txtDNIBuscar;
	TEdit *txtFechaNacimientoBuscar;
	TEdit *txtNumTelBuscar;
	TEdit *txtEmailBuscar;
	TEdit *txtEdadBuscar;
	TListBox *lstGeneroBuscar;
	TEdit *txtDireccionCalleBuscar;
	TCheckBox *chkMostrarTodos;
	TStringGrid *StringGridSocios;
	TButton *btnBuscarSocio;
private:	// User declarations
    biblioteca bibliotecaUPE;
public:		// User declarations
	__fastcall TVerYBuscarSocioForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TVerYBuscarSocioForm *VerYBuscarSocioForm;
//---------------------------------------------------------------------------
#endif
