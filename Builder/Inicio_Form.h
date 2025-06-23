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
#include "biblioteca.h"
//---------------------------------------------------------------------------
class TInicioForm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TImage *imgLogoBiblioteca;
	TLabel *lblNomBiblioteca;
	TLabel *lblOpcionesGestion;
	TLabel *lblBienvenida;
	TButton *BtnSalir;
	TBitBtn *BtnLibros;
	TBitBtn *BtnPrestamos;
	TBitBtn *BtnSocios;
	void __fastcall BtnLibrosClick(TObject *Sender);
	void __fastcall BtnPrestamosClick(TObject *Sender);
	void __fastcall BtnSociosClick(TObject *Sender);
	void __fastcall BtnSalirClick(TObject *Sender);
private:	// User declarations
	biblioteca bibliotecaUPE;
public:		// User declarations
	__fastcall TInicioForm(TComponent* Owner);
    biblioteca * getBiblioteca(); //metodo para pasar el puntero
};
//---------------------------------------------------------------------------
extern PACKAGE TInicioForm *InicioForm;
//---------------------------------------------------------------------------
#endif
