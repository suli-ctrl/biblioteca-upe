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
#include <Vcl.Buttons.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TSociosForm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TImage *Image1;
	TLabel *Label1;
	TPanel *Panel2;
	TLabel *Label2;
	TPanel *Panel3;
	TBitBtn *BtnModificarSocio;
	TButton *BtnVolver;
	TBitBtn *BtnAltaSocio;
	TBitBtn *BtnBajaSocio;
	TBitBtn *BtnVerYBuscarSocio;
	TPanel *PanelContenedor;
	void __fastcall BtnVolverClick(TObject *Sender);
	void __fastcall BtnAltaSocioClick(TObject *Sender);
	void __fastcall BtnBajaSocioClick(TObject *Sender);
	void __fastcall BtnModificarSocioClick(TObject *Sender);
	void __fastcall BtnVerYBuscarSocioClick(TObject *Sender);
private:	// User declarations
    void MostrarFormEnPanel(TForm *form);
public:		// User declarations
	__fastcall TSociosForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSociosForm *SociosForm;
//---------------------------------------------------------------------------
#endif
