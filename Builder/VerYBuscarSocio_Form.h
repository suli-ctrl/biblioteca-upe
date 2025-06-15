//---------------------------------------------------------------------------

#ifndef VerYBuscarSocio_FormH
#define VerYBuscarSocio_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TVerYBuscarSocioForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TListBox *ListBox1;
	TEdit *Edit8;
	TCheckBox *CheckBox1;
	TStringGrid *StringGrid1;
	TButton *Button1;
private:	// User declarations
public:		// User declarations
	__fastcall TVerYBuscarSocioForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TVerYBuscarSocioForm *VerYBuscarSocioForm;
//---------------------------------------------------------------------------
#endif
