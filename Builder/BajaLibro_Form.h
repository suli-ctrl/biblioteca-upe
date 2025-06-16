//---------------------------------------------------------------------------

#ifndef BajaLibro_FormH
#define BajaLibro_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "biblioteca.h"
//---------------------------------------------------------------------------
class TBajaLibroForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblIngreseInfoLibroBaja;
	TLabel *lblBajaLibro;
	TLabel *lblNombreBaja;
	TButton *btnDarBaja;
	TComboBox *ComboBoxBaja;
	void __fastcall btnDarBajaClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
	biblioteca bibliotecaUPE;
public:		// User declarations
	__fastcall TBajaLibroForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBajaLibroForm *BajaLibroForm;
//---------------------------------------------------------------------------
#endif
