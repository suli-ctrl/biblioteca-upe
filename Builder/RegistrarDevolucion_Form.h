//---------------------------------------------------------------------------

#ifndef RegistrarDevolucion_FormH
#define RegistrarDevolucion_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include "biblioteca.h"
//---------------------------------------------------------------------------
class TRegistarDevoluciónForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblRegistrarDevolucion;
	TLabel *LabelSeleccionado;
	TButton *Button1;
	TComboBox *ComboBox1;
	TListBox *ListBox1;
	TLabel *Label2;
	TLabel *Label1;
	TStringGrid *StringGridPrestamos;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall StringGridPrestamosClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
	biblioteca * bibliotecaUPE;
public:		// User declarations
	__fastcall TRegistarDevoluciónForm(TComponent* Owner);
    void setBiblioteca(biblioteca* pBibliotecaUPE); // metodo para asignar el puntero
};
//---------------------------------------------------------------------------
extern PACKAGE TRegistarDevoluciónForm *RegistarDevoluciónForm;
//---------------------------------------------------------------------------
#endif
