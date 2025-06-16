//---------------------------------------------------------------------------

#ifndef ModificarLibro_FormH
#define ModificarLibro_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TModificarLibroForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *txtNombreLibroBuscarAModi;
	TButton *BtnBuscarNomAModi;
	TLabel *lblIngreseInfoLibroAModi;
	TLabel *lblModificarLibro;
	TEdit *txtAutoresAModi;
	TButton *btnModificarLibro;
	TListBox *lstEstadoAModi;
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
private:	// User declarations
public:		// User declarations
	__fastcall TModificarLibroForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TModificarLibroForm *ModificarLibroForm;
//---------------------------------------------------------------------------
#endif
