//---------------------------------------------------------------------------

#ifndef BajaLibro_FormH
#define BajaLibro_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "biblioteca.h"
//---------------------------------------------------------------------------
class TBajaLibroForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblIngreseInfoLibroBaja;
	TLabel *lblBajaLibro;
	TLabel *lblNombreBaja;
	TButton *btnDarBaja;
	TComboBox *ComboBoxBaja;
	void __fastcall btnDarBajaClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
    biblioteca * bibliotecaUPE; //puntero al objeto biblioteca que esta en inicio_form
public:		// User declarations
	__fastcall TBajaLibroForm(TComponent* Owner);
    void setBiblioteca(biblioteca* pBibliotecaUPE); // metodo para asignar el puntero
};
//---------------------------------------------------------------------------
extern PACKAGE TBajaLibroForm *BajaLibroForm;
//---------------------------------------------------------------------------
#endif
