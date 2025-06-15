//---------------------------------------------------------------------------

#ifndef Libros_FormH
#define Libros_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TLibrosForm : public TForm
{
__published:	// IDE-managed Components
	TToolBar *ToolBar1;
	TStatusBar *StatusBar1;
	TPanel *Panel1;
	TSplitter *Splitter1;
	TPanel *PanelMostrador;
	TPanel *Panel3;
	TButton *BtnLibroVolver;
	TButton *BtnLibroBusqueda;
	TButton *BtnBajaLibro;
	TButton *BtnAltaLibro;
	TPanel *Panel4;
	void __fastcall BtnLibroVolverClick(TObject *Sender);
	void __fastcall BtnAltaLibroClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLibrosForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLibrosForm *LibrosForm;
//---------------------------------------------------------------------------
#endif
