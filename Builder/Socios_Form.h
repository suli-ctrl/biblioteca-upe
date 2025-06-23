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
#include "biblioteca.h"
//---------------------------------------------------------------------------
class TSociosForm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TImage *imgLogoBiblioteca;
	TLabel *lblNomBiblioteca;
	TPanel *Panel2;
	TLabel *lblOpcionesGestion;
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
    biblioteca * bibliotecaUPE;
public:		// User declarations
	__fastcall TSociosForm(TComponent* Owner);
	void setBiblioteca(biblioteca* pBibliotecaUPE); // metodo para asignar el puntero
};
//---------------------------------------------------------------------------
extern PACKAGE TSociosForm *SociosForm;
//---------------------------------------------------------------------------
#endif
