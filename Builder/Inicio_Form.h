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
#include <Vcl.Buttons.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TInicioForm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TImage *Image1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TButton *BtnSalir;
	TBitBtn *BtnLibros;
	TBitBtn *BtnPrestamos;
	TBitBtn *BtnSocios;
	void __fastcall BtnLibrosClick(TObject *Sender);
	void __fastcall BtnPrestamosClick(TObject *Sender);
	void __fastcall BtnSociosClick(TObject *Sender);
	void __fastcall BtnSalirClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TInicioForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TInicioForm *InicioForm;
//---------------------------------------------------------------------------
#endif
