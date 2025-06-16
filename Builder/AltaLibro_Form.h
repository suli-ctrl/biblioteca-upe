//---------------------------------------------------------------------------

#ifndef AltaLibro_FormH
#define AltaLibro_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TAltaLibroForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblAltaLibro;
	TLabel *lblIngreseInfoLibroAlta;
	TLabel *lblNombreAlta;
	TEdit *txtNombreAlta;
	TEdit *txtAreaAlta;
	TLabel *lblAreaAlta;
	TEdit *txtSubAreaAlta;
	TLabel *lblSubAreaAlta;
	TEdit *txtEditorialAlta;
	TLabel *lblEditorialAlta;
	TEdit *txtAutoresAlta;
	TLabel *lblAutoresAlta;
	TEdit *txtUbicacionAlta;
	TLabel *lblUbicacionAlta;
	TEdit *txtAnioPublicacionAlta;
	TLabel *lblAnioPublicacionAlta;
	TLabel *lblEstadoAlta;
	TListBox *lstEstadoAlta;
	TButton *btnDarAlta;
private:	// User declarations
public:		// User declarations
	__fastcall TAltaLibroForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAltaLibroForm *AltaLibroForm;
//---------------------------------------------------------------------------
#endif
