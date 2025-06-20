//---------------------------------------------------------------------------

#ifndef RegistrarDevolucion_FormH
#define RegistrarDevolucion_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TRegistarDevoluciónForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblRegistrarDevolucion;
	TLabel *Label3;
	TButton *Button1;
	TComboBox *ComboBox1;
	TListBox *ListBox1;
	TLabel *Label2;
	TLabel *Label1;
private:	// User declarations
public:		// User declarations
	__fastcall TRegistarDevoluciónForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegistarDevoluciónForm *RegistarDevoluciónForm;
//---------------------------------------------------------------------------
#endif
