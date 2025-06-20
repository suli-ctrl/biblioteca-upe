//---------------------------------------------------------------------------

#ifndef RegistrarPrestamo_FormH
#define RegistrarPrestamo_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TRegistrarPrestamoForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblRegistrarPrestamo;
	TLabel *Label1;
	TLabel *Label2;
	TListBox *ListBox1;
	TComboBox *ComboBox1;
	TLabel *Label3;
	TLabel *Label4;
	TComboBox *ComboBox2;
	TButton *Button1;
private:	// User declarations
public:		// User declarations
	__fastcall TRegistrarPrestamoForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegistrarPrestamoForm *RegistrarPrestamoForm;
//---------------------------------------------------------------------------
#endif
