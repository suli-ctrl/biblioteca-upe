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
	void __fastcall TextBoxEnter(TObject* Sender);
    void __fastcall TextBoxExit(TObject* Sender);
	void __fastcall btnBuscarSocioClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
	biblioteca * bibliotecaUPE;
	void MostrarCoincidencia(int fila, const socios& s);
public:		// User declarations
	__fastcall TVerYBuscarSocioForm(TComponent* Owner);
    void setBiblioteca(biblioteca* pBibliotecaUPE); // metodo para asignar el puntero
};
//---------------------------------------------------------------------------
extern PACKAGE TVerYBuscarSocioForm *VerYBuscarSocioForm;
//---------------------------------------------------------------------------
#endif
