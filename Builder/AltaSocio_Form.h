//---------------------------------------------------------------------------

#ifndef AltaSocio_FormH
#define AltaSocio_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TAltaSocioForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TListBox *ListBox1;
	TButton *Button1;
	TEdit *Edit3;
	TLabel *Label5;
private:	// User declarations
public:		// User declarations
	__fastcall TAltaSocioForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAltaSocioForm *AltaSocioForm;
//---------------------------------------------------------------------------
#endif
