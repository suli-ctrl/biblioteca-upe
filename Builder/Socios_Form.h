//---------------------------------------------------------------------------

#ifndef Socios_FormH
#define Socios_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TSociosForm : public TForm
{
__published:	// IDE-managed Components
	TToolBar *ToolBar1;
	TStatusBar *StatusBar1;
	TPanel *Panel1;
	TSplitter *Splitter1;
	TPanel *Panel2;
	TPanel *Panel3;
	TButton *BtnVolverSocios;
	TButton *BtnVerSocios;
	TButton *BtnBajaSocio;
	TButton *BtnAltaSocio;
	TPanel *Panel4;
	void __fastcall BtnVolverSociosClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSociosForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSociosForm *SociosForm;
//---------------------------------------------------------------------------
#endif
