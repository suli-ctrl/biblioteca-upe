//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Inicio_Form.cpp", Form1);
USEFORM("Libros_Form.cpp", Form2);
USEFORM("Socios_Form.cpp", Form3);
USEFORM("Prestamos_Form.cpp", Form4);
USEFORM("AltaLibro_Form.cpp", Form5);
USEFORM("AltaSocio_Form.cpp", Form6);
USEFORM("BajaLibro_Form.cpp", Form7);
USEFORM("BajaSocio_Form.cpp", Form8);
USEFORM("RegistrarDevolucion_Form.cpp", Form9);
USEFORM("RegistrarPrestamo_Form.cpp", Form10);
USEFORM("VerPrestamo_Form.cpp", Form11);
USEFORM("VerYBuscarLibro_Form.cpp", Form12);
USEFORM("VerYBuscarSocio_Form.cpp", Form13);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TForm4), &Form4);
		Application->CreateForm(__classid(TForm5), &Form5);
		Application->CreateForm(__classid(TForm6), &Form6);
		Application->CreateForm(__classid(TForm7), &Form7);
		Application->CreateForm(__classid(TForm8), &Form8);
		Application->CreateForm(__classid(TForm9), &Form9);
		Application->CreateForm(__classid(TForm10), &Form10);
		Application->CreateForm(__classid(TForm11), &Form11);
		Application->CreateForm(__classid(TForm12), &Form12);
		Application->CreateForm(__classid(TForm13), &Form13);
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
