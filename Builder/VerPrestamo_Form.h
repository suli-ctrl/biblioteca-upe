//---------------------------------------------------------------------------

#ifndef VerPrestamo_FormH
#define VerPrestamo_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TVerPrestamoActivoForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblVerPrestamos;
	TStringGrid *StringGrid1;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TComboBox *ComboBox3;
	TCheckBox *CheckBox1;
	TButton *Button1;
private:	// User declarations
public:		// User declarations
	__fastcall TVerPrestamoActivoForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TVerPrestamoActivoForm *VerPrestamoActivoForm;
//---------------------------------------------------------------------------
#endif
