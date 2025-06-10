#include "Inicio_Form.h"
#include "biblioteca.h"
#include "libros.h"
#include "socios.h"
#include "prestamos.h"


using namespace System;
using namespace System::Windows::Forms;

void main(cli::array<System::String^>^ args)   //main a ejecutar para mostrar todo el programa visual
{
	//biblioteca BibliotecaUPE; //Instancia el objeto BibliotecaUPE 

	Application::EnableVisualStyles(); //Activa los estilos visuales modernos de Windos
	Application::SetCompatibleTextRenderingDefault(false); //Indica como se debe renderizar el texto en los controles
	InterfazGrafica::Inicio_Form form; //Crea una instancia del form principal denominado Inicio_Form, quien pertenece al namespace InterfazGrafica
	Application::Run(% form); //Ejecuta la aplicación con ese formulario como ventana principal
}

