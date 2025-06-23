//---------------------------------------------------------------------------

#ifndef ModificarLibro_FormH
#define ModificarLibro_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "biblioteca.h"
//---------------------------------------------------------------------------
class TModificarLibroForm : public TForm
{
__published:	// IDE-managed Components
	TButton *BtnBuscarNomAModi;
	TLabel *lblIngreseInfoLibroAModi;
	TLabel *lblModificarLibro;
	TEdit *txtAutoresAModi;
	TButton *btnModificarLibro;
	TEdit *txtAnioPublicacionAModi;
	TEdit *txtUbicacionAModi;
	TEdit *txtEditorialAModi;
	TEdit *txtSubAreaAModi;
	TEdit *txtAreaAModi;
	TEdit *txtNombreAModi;
	TLabel *lblEstadoAModi;
	TLabel *lblAnioPublicacionLibroAModi;
	TLabel *lblUbicacionAModi;
	TLabel *lblAutoresAModi;
	TLabel *lblEditorialAModi;
	TLabel *lblSubAreaAModi;
	TLabel *lblAreaAModi;
	TLabel *lblNombreAModi;
	TLabel *lblNombreLibroBuscarModi;
	TComboBox *ComboBoxBusqueda;
	TComboBox *ComboBoxEstado;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall BtnBuscarNomAModiClick(TObject *Sender);
	void __fastcall btnModificarLibroClick(TObject *Sender);
private:	// User declarations
	biblioteca * bibliotecaUPE;
public:		// User declarations
	__fastcall TModificarLibroForm(TComponent* Owner);
    void setBiblioteca(biblioteca* pBibliotecaUPE); // metodo para asignar el puntero
};
//---------------------------------------------------------------------------
extern PACKAGE TModificarLibroForm *ModificarLibroForm;
//---------------------------------------------------------------------------
#endif


