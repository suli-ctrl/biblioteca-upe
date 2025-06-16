//---------------------------------------------------------------------------

#ifndef BajaSocio_FormH
#define BajaSocio_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TBajaSocioForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblIngreseInfoSocioBaja;
	TLabel *lblBajaSocio;
	TLabel *lblDNIBaja;
	TEdit *txtDNIBaja;
	TButton *btnDarBaja;
private:	// User declarations
public:		// User declarations
	__fastcall TBajaSocioForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBajaSocioForm *BajaSocioForm;
//---------------------------------------------------------------------------
#endif
