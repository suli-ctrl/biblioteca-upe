//---------------------------------------------------------------------------

#ifndef ModificarLibro_FormH
#define ModificarLibro_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TModificarLibroForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TButton *Button1;
	TLabel *Label2;
	TLabel *Label1;
	TEdit *Edit5;
	TButton *Button2;
	TListBox *ListBox1;
	TEdit *Edit7;
	TEdit *Edit6;
	TEdit *Edit4;
	TEdit *Edit3;
	TEdit *Edit2;
	TEdit *Edit8;
	TLabel *Label10;
	TLabel *Label9;
	TLabel *Label8;
	TLabel *Label7;
	TLabel *Label6;
	TLabel *Label5;
	TLabel *Label4;
	TLabel *Label3;
private:	// User declarations
public:		// User declarations
	__fastcall TModificarLibroForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TModificarLibroForm *ModificarLibroForm;
//---------------------------------------------------------------------------
#endif
