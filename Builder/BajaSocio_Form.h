//---------------------------------------------------------------------------

#ifndef BajaSocio_FormH
#define BajaSocio_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "biblioteca.h"
//---------------------------------------------------------------------------
class TBajaSocioForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblIngreseInfoSocioBaja;
	TLabel *lblBajaSocio;
	TLabel *lblDNIBaja;
	TButton *btnDarBaja;
	TComboBox *ComboBoxBaja;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnDarBajaClick(TObject *Sender);
private:	// User declarations
    biblioteca bibliotecaUPE;
public:		// User declarations
	__fastcall TBajaSocioForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBajaSocioForm *BajaSocioForm;
//---------------------------------------------------------------------------
#endif
