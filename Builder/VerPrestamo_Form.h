//---------------------------------------------------------------------------

#ifndef VerPrestamo_FormH
#define VerPrestamo_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TVerPrestamoActivoForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *lblVerPrestamos;
private:	// User declarations
public:		// User declarations
	__fastcall TVerPrestamoActivoForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TVerPrestamoActivoForm *VerPrestamoActivoForm;
//---------------------------------------------------------------------------
#endif
