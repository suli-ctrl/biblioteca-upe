//---------------------------------------------------------------------------

#ifndef BajaLibro_FormH
#define BajaLibro_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TBajaLibroForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblIngreseInfoLibroBaja;
	TLabel *lblBajaLibro;
	TLabel *lblNombreBaja;
	TEdit *txtNombreBaja;
	TButton *btnDarBaja;
private:	// User declarations
public:		// User declarations
	__fastcall TBajaLibroForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBajaLibroForm *BajaLibroForm;
//---------------------------------------------------------------------------
#endif
