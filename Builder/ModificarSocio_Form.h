//---------------------------------------------------------------------------

#ifndef ModificarSocio_FormH
#define ModificarSocio_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "biblioteca.h"
//---------------------------------------------------------------------------
class TModificarSocioForm : public TForm
{
__published:	// IDE-managed Components
	TButton *btnBuscarSocioModi;
	TLabel *lblIngreseInfoSocioAModi;
	TLabel *lblModificarSocio;
	TLabel *lblApellidoAModi;
	TLabel *lblDNIAModi;
	TLabel *lblNumTelAModi;
	TLabel *lblEdadAModi;
	TLabel *lblFechaNacimientoAModi;
	TLabel *lblDireccionCalleAModi;
	TLabel *lblGeneroAModi;
	TEdit *txtApellidoAModi;
	TEdit *txtDNIAModi;
	TEdit *txtNumTelAModi;
	TEdit *txtEdadAModi;
	TEdit *txtFechaNacimientoAModi;
	TEdit *txtDireccionCalleAModi;
	TButton *btnModificar;
	TEdit *txtEmailAModi;
	TLabel *lblEmailAModi;
	TComboBox *ComboBoxBusqueda;
	TComboBox *ComboBoxGenero;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnBuscarSocioModiClick(TObject *Sender);
	void __fastcall btnModificarClick(TObject *Sender);
private:	// User declarations
	biblioteca bibliotecaUPE;
public:		// User declarations
	__fastcall TModificarSocioForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TModificarSocioForm *ModificarSocioForm;
//---------------------------------------------------------------------------
#endif
