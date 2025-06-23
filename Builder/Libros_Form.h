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
#include <Vcl.Buttons.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include "biblioteca.h"


//---------------------------------------------------------------------------
class TLibrosForm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TImage *imgLogoBiblioteca;
	TLabel *lblNomBiblioteca;
	TPanel *Panel2;
	TLabel *lblOpcionesGestion;
	TPanel *Panel3;
	TBitBtn *BtnModificarLibro;
	TButton *BtnVolver;
	TBitBtn *BtnAltaLibro;
	TBitBtn *BtnBajaLibro;
	TPanel *PanelContenedor;
	TBitBtn *BtnVerYBuscarLibro;
	void __fastcall BtnAltaLibroClick(TObject *Sender);
	void __fastcall BtnBajaLibroClick(TObject *Sender);
	void __fastcall BtnModificarLibroClick(TObject *Sender);
	void __fastcall BtnVerYBuscarLibroClick(TObject *Sender);
	void __fastcall BtnVolverClick(TObject *Sender);

private:        // User declarations
	biblioteca * bibliotecaUPE;
  void MostrarFormEnPanel(TForm *form);

public:		// User declarations
	__fastcall TLibrosForm(TComponent* Owner);
	void setBiblioteca(biblioteca* pBibliotecaUPE); // metodo para asignar el puntero
};
//---------------------------------------------------------------------------
extern PACKAGE TLibrosForm *LibrosForm;
//---------------------------------------------------------------------------
#endif
