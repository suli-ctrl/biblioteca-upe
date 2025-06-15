//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("RegistrarPrestamo_Form.cpp", RegistrarPrestamoForm);
USEFORM("RegistrarDevolucion_Form.cpp", RegistarDevoluciónForm);
USEFORM("Prestamos_Form.cpp", PrestamosForm);
USEFORM("ModificarLibro_Form.cpp", ModificarLibroForm);
USEFORM("VerYBuscarSocio_Form.cpp", VerYBuscarSocioForm);
USEFORM("VerYBuscarLibro_Form.cpp", VerYBuscarLibroForm);
USEFORM("VerPrestamo_Form.cpp", VerPrestamoActivoForm);
USEFORM("Socios_Form.cpp", SociosForm);
USEFORM("BajaSocio_Form.cpp", BajaSocioForm);
USEFORM("BajaLibro_Form.cpp", BajaLibroForm);
USEFORM("AltaSocio_Form.cpp", AltaSocioForm);
USEFORM("AltaLibro_Form.cpp", AltaLibroForm);
USEFORM("Libros_Form.cpp", LibrosForm);
USEFORM("Inicio_Form.cpp", InicioForm);
USEFORM("ModificarSocio_Form.cpp", ModificarSocioForm);
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
		Application->CreateForm(__classid(TAltaSocioForm), &AltaSocioForm);
		Application->CreateForm(__classid(TBajaLibroForm), &BajaLibroForm);
		Application->CreateForm(__classid(TBajaSocioForm), &BajaSocioForm);
		Application->CreateForm(__classid(TRegistarDevoluciónForm), &RegistarDevoluciónForm);
		Application->CreateForm(__classid(TRegistrarPrestamoForm), &RegistrarPrestamoForm);
		Application->CreateForm(__classid(TVerPrestamoActivoForm), &VerPrestamoActivoForm);
		Application->CreateForm(__classid(TVerYBuscarLibroForm), &VerYBuscarLibroForm);
		Application->CreateForm(__classid(TVerYBuscarSocioForm), &VerYBuscarSocioForm);
		Application->CreateForm(__classid(TModificarLibroForm), &ModificarLibroForm);
		Application->CreateForm(__classid(TModificarSocioForm), &ModificarSocioForm);
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
