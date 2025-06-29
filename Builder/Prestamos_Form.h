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
#include <Vcl.Buttons.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include "biblioteca.h"
//---------------------------------------------------------------------------
class TPrestamosForm : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TImage *imgLogoBiblioteca;
	TLabel *lblNomBiblioteca;
	TPanel *Panel2;
	TLabel *lblOpcionesGestion;
	TPanel *Panel3;
	TBitBtn *BtnVerPrestamos;
	TButton *BtnVolver;
	TBitBtn *BtnRegistrarPrestamo;
	TBitBtn *BtnRegistrarDevolucion;
	TPanel *PanelContenedor;
	void __fastcall BtnRegistrarPrestamoClick(TObject *Sender);
	void __fastcall BtnRegistrarDevolucionClick(TObject *Sender);
	void __fastcall BtnVerPrestamosClick(TObject *Sender);
	void __fastcall BtnVolverClick(TObject *Sender);
private:	// User declarations
	void MostrarFormEnPanel(TForm *form);
	biblioteca * bibliotecaUPE;
public:		// User declarations
	__fastcall TPrestamosForm(TComponent* Owner);
    void setBiblioteca(biblioteca* pBibliotecaUPE); // metodo para asignar el puntero
};
//---------------------------------------------------------------------------
extern PACKAGE TPrestamosForm *PrestamosForm;
//---------------------------------------------------------------------------
#endif
