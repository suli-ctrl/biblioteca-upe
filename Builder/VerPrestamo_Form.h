//---------------------------------------------------------------------------

#ifndef VerPrestamo_FormH
#define VerPrestamo_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include "biblioteca.h"
//---------------------------------------------------------------------------
class TVerPrestamoActivoForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblVerPrestamos;
	TStringGrid *StringGridPrestamos;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TComboBox *ComboBox3;
	TCheckBox *CheckBox1;
	TButton *Button1;
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
    biblioteca bibliotecaUPE;
public:		// User declarations
	__fastcall TVerPrestamoActivoForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TVerPrestamoActivoForm *VerPrestamoActivoForm;
//---------------------------------------------------------------------------
#endif
