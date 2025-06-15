//---------------------------------------------------------------------------

#ifndef BajaLibro_FormH
#define BajaLibro_FormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TBajaLibroForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label2;
	TLabel *Label1;
	TLabel *Label3;
	TEdit *Edit1;
	TButton *Button1;
private:	// User declarations
public:		// User declarations
	__fastcall TBajaLibroForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBajaLibroForm *BajaLibroForm;
//---------------------------------------------------------------------------
#endif
