//---------------------------------------------------------------------------

#ifndef AltaLibro_FormH
#define AltaLibro_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "biblioteca.h"
//---------------------------------------------------------------------------
class TAltaLibroForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *EditNombreLibro;
	TEdit *EditAreaLibro;
	TLabel *Label4;
	TEdit *EditSubAreaLibro;
	TLabel *Label5;
	TEdit *EditEditorialLibro;
	TLabel *Label6;
	TEdit *EditAutorLibro;
	TLabel *Label7;
	TEdit *EditUbiLibro;
	TLabel *Label8;
	TEdit *EditAñoLibro;
	TLabel *Label9;
	TLabel *Label10;
	TListBox *ListBoxEstado;
	TButton *BtnAltaLibro;
	void __fastcall BtnAltaLibroClick(TObject *Sender);
private:	// User declarations
    biblioteca bibliotecaUPE;
public:		// User declarations
	__fastcall TAltaLibroForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAltaLibroForm *AltaLibroForm;
//---------------------------------------------------------------------------
#endif
