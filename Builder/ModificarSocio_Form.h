//---------------------------------------------------------------------------

#ifndef ModificarSocio_FormH
#define ModificarSocio_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TModificarSocioForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *txtDNIABuscar;
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
	TListBox *lstGeneroAModi;
	TButton *btnModificar;
	TEdit *txtEmailAModi;
	TLabel *lblEmailAModi;
private:	// User declarations
public:		// User declarations
	__fastcall TModificarSocioForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TModificarSocioForm *ModificarSocioForm;
//---------------------------------------------------------------------------
#endif
