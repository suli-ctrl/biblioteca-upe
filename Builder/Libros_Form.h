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
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TToolBar *ToolBar1;
	TStatusBar *StatusBar1;
	TPanel *Panel1;
	TSplitter *Splitter1;
	TPanel *Panel2;
	TPanel *Panel3;
	TButton *Button1;
	TButton *Button4;
	TButton *Button3;
	TButton *Button2;
	TPanel *Panel4;
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
