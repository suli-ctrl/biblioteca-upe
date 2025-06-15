//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("RegistrarPrestamo_Form.cpp", Form10);
USEFORM("RegistrarDevolucion_Form.cpp", Form9);
USEFORM("Prestamos_Form.cpp", PrestamosForm);
USEFORM("Socios_Form.cpp", SociosForm);
USEFORM("VerYBuscarSocio_Form.cpp", Form13);
USEFORM("VerYBuscarLibro_Form.cpp", VerYBuscarLibroForm);
USEFORM("VerPrestamo_Form.cpp", Form11);
USEFORM("Libros_Form.cpp", LibrosForm);
USEFORM("BajaLibro_Form.cpp", BajaLibroForm);
USEFORM("AltaSocio_Form.cpp", Form6);
USEFORM("AltaLibro_Form.cpp", AltaLibroForm);
USEFORM("BajaSocio_Form.cpp", Form8);
USEFORM("Inicio_Form.cpp", InicioForm);
USEFORM("ModificarLibro_Form.cpp", ModificarLibroForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TInicioForm), &InicioForm);
		Application->CreateForm(__classid(TLibrosForm), &LibrosForm);
		Application->CreateForm(__classid(TSociosForm), &SociosForm);
		Application->CreateForm(__classid(TPrestamosForm), &PrestamosForm);
		Application->CreateForm(__classid(TAltaLibroForm), &AltaLibroForm);
		Application->CreateForm(__classid(TForm6), &Form6);
		Application->CreateForm(__classid(TBajaLibroForm), &BajaLibroForm);
		Application->CreateForm(__classid(TForm8), &Form8);
		Application->CreateForm(__classid(TForm9), &Form9);
		Application->CreateForm(__classid(TForm10), &Form10);
		Application->CreateForm(__classid(TForm11), &Form11);
		Application->CreateForm(__classid(TVerYBuscarLibroForm), &VerYBuscarLibroForm);
		Application->CreateForm(__classid(TForm13), &Form13);
		Application->CreateForm(__classid(TModificarLibroForm), &ModificarLibroForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
