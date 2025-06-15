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
	TLabel *Label3;
	TLabel *Label7;
	TLabel *Label2;
	TLabel *Label4;
	TLabel *Label5;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TButton *Button1;
	TLabel *Label6;
private:	// User declarations
public:		// User declarations
	__fastcall TAltaLibroForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAltaLibroForm *AltaLibroForm;
//---------------------------------------------------------------------------
#endif
