//---------------------------------------------------------------------------

#ifndef RegistrarPrestamo_FormH
#define RegistrarPrestamo_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "biblioteca.h"
//---------------------------------------------------------------------------
class TRegistrarPrestamoForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblRegistrarPrestamo;
	TLabel *Label1;
	TLabel *Label2;
	TListBox *ListBoxLibro;
	TComboBox *ComboBoxDNI;
	TLabel *Label3;
	TLabel *Label4;
	TComboBox *ComboBoxDias;
	TButton *btnRegistrarPrestamo;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnRegistrarPrestamoClick(TObject *Sender);

private:	// User declarations
	biblioteca bibliotecaUPE;
public:		// User declarations
	__fastcall TRegistrarPrestamoForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegistrarPrestamoForm *RegistrarPrestamoForm;
//---------------------------------------------------------------------------
#endif
