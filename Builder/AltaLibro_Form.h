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
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *Edit1;
	TEdit *Edit2;
	TLabel *Label4;
	TEdit *Edit3;
	TLabel *Label5;
	TEdit *Edit4;
	TLabel *Label6;
	TEdit *Edit5;
	TLabel *Label7;
	TEdit *Edit6;
	TLabel *Label8;
	TEdit *Edit7;
	TLabel *Label9;
	TLabel *Label10;
	TListBox *ListBox1;
	TButton *Button1;
private:	// User declarations
public:		// User declarations
	__fastcall TAltaLibroForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAltaLibroForm *AltaLibroForm;
//---------------------------------------------------------------------------
#endif
