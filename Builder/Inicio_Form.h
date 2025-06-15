//---------------------------------------------------------------------------

#ifndef Inicio_FormH
#define Inicio_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TInicioForm : public TForm
{
__published:	// IDE-managed Components
	TToolBar *ToolBar1;
	TStatusBar *StatusBar1;
	TPanel *Panel1;
	TSplitter *Splitter1;
	TPanel *Panel2;
	TPanel *Panel3;
	TButton *BtnSalir;
	TButton *BtnSocios;
	TButton *BtnPrestamos;
	TButton *BtnLibros;
	TPanel *Panel4;
	void __fastcall BtnLibrosClick(TObject *Sender);
	void __fastcall BtnSalirClick(TObject *Sender);
	void __fastcall BtnPrestamosClick(TObject *Sender);
	void __fastcall BtnSociosClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TInicioForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TInicioForm *InicioForm;
//---------------------------------------------------------------------------
#endif
