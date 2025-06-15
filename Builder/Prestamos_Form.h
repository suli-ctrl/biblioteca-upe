//---------------------------------------------------------------------------

#ifndef Prestamos_FormH
#define Prestamos_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TPrestamosForm : public TForm
{
__published:	// IDE-managed Components
	TToolBar *ToolBar1;
	TStatusBar *StatusBar1;
	TPanel *Panel1;
	TSplitter *Splitter1;
	TPanel *Panel2;
	TPanel *Panel3;
	TButton *BtnVolverPrestamos;
	TButton *BtnVerPrestamos;
	TButton *BtnDevolucion;
	TButton *BtnPrestamo;
	TPanel *Panel4;
	void __fastcall BtnVolverPrestamosClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TPrestamosForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPrestamosForm *PrestamosForm;
//---------------------------------------------------------------------------
#endif
