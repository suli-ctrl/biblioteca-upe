//---------------------------------------------------------------------------

#ifndef ModificarSocio_FormH
#define ModificarSocio_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TModificarSocioForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TButton *Button1;
	TLabel *Label2;
	TLabel *Label1;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TListBox *ListBox1;
	TButton *Button2;
	TEdit *Edit8;
	TLabel *Label11;
private:	// User declarations
public:		// User declarations
	__fastcall TModificarSocioForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TModificarSocioForm *ModificarSocioForm;
//---------------------------------------------------------------------------
#endif
