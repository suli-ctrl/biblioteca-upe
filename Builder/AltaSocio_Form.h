//---------------------------------------------------------------------------

#ifndef AltaSocio_FormH
#define AltaSocio_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TAltaSocioForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblAltaSocio;
	TLabel *lblIngreseInfoSocioAlta;
	TLabel *lblApellidoAlta;
	TLabel *lblDniAlta;
	TLabel *lblNumTelAlta;
	TLabel *lblEdadAlta;
	TLabel *lblFechaNacimientoAlta;
	TLabel *lblDireccionCalleAlta;
	TLabel *lblGenero;
	TEdit *txtApellidoAlta;
	TEdit *txtDNIAlta;
	TEdit *txtNumTelAlta;
	TEdit *txtEdadAlta;
	TEdit *txtFechaNacimientoAlta;
	TEdit *txtDireccionCalleAlta;
	TListBox *lstGeneroAlta;
	TButton *btnDarAlta;
	TEdit *txtEmailAlta;
	TLabel *lblEmailAlta;
private:	// User declarations
public:		// User declarations
	__fastcall TAltaSocioForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAltaSocioForm *AltaSocioForm;
//---------------------------------------------------------------------------
#endif
