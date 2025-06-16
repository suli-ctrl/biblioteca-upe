//---------------------------------------------------------------------------

#ifndef RegistrarPrestamo_FormH
#define RegistrarPrestamo_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TRegistrarPrestamoForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblRegistrarPrestamo;
private:	// User declarations
public:		// User declarations
	__fastcall TRegistrarPrestamoForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegistrarPrestamoForm *RegistrarPrestamoForm;
//---------------------------------------------------------------------------
#endif
