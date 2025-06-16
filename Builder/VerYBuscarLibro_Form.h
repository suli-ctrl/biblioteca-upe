//---------------------------------------------------------------------------

#ifndef VerYBuscarLibro_FormH
#define VerYBuscarLibro_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include "biblioteca.h"
//---------------------------------------------------------------------------
class TVerYBuscarLibroForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TListBox *ListBox1;
	TEdit *Edit8;
	TCheckBox *CheckBox1;
	TStringGrid *StringGridLibros;
	TButton *Button1;
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
	biblioteca bibliotecaUPE; //instancio la clase
public:		// User declarations
	__fastcall TVerYBuscarLibroForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TVerYBuscarLibroForm *VerYBuscarLibroForm;
//---------------------------------------------------------------------------
#endif
