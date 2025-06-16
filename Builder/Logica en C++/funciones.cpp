#include <iostream>
#include "funciones.h"
#include <string>
#include <cctype>
#include <vcl.h> // para convertir strings

int pedirDni()
{
	int dni{ 0 };
	while(true)
 {

	std::cout << "Ingrese su DNI sin puntos ni guiones \n";
	std::cin >> dni;
	if (std::cin.fail())//si lo que se ingreso no son numeros..
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n'); //limpio todo el error y el buffer
		std::cout << "Entrada invalida. Intentelo de nuevo \n";
	}

	else if (dni < 10000000 || dni > 99999999)
	{
		std::cout << "El DNI ingresado es invalido, debe tener 8 cifras";
	}
	else
	{
		return dni;
	}

 }
}

int pedirEdad()
{
	int edad{ 0 };

	while (true)
	{
		std::cout << "Ingrese su edad: \n";
		std::cin >> edad;

		if (std::cin.fail())//si lo que se ingreso no son numeros..
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n'); //limpio todo el error y el buffer
			std::cout << "Entrada invalida. Intentelo de nuevo \n";
		}

		else if (edad < 18 || edad > 100)
		{
			std::cout << "La edad ingresada es invalida. \n";
		}
		else
		{
			return edad;
		}

	}
}

std::string pedirApellido()
{
	std::string apellido;
	bool valido;

	while (true)
	{
		valido = true;

		std::cout << "Ingrese su apellido \n";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::getline(std::cin, apellido);

		if (apellido.length() < 2 || apellido.length() > 20 || apellido.empty())// si el apellido se pasa de largo o esta vacio..
		{
			std::cout << "El apellido debe tener entre 2 o 20 caracteres \n";
			continue; // ya que es invalido vuelvo a pedir el apellido
		}

		for (char c : apellido)
		{
			if (!isalpha(c))
			{
				std::cout << "Apellido invalido, solo letras \n";
				valido = false;
				break;
			}
		
		}

		if (!valido)
		{
			std::cout << "El apellido solo debe contener letras \n";
			continue;
		}

		return apellido;

	}
}

std::string pedirGenero()
{
	int opcion{ 0 };

	do {

		std::cout << "\n Seleccione su genero \n";
		std::cout << "1. Masculino\n";
		std::cout << "1. Femenino\n";
		std::cout << "3. Prefiero no responder\n";
		std::cin >> opcion;

		if (std::cin.fail() || opcion < 1 || opcion > 3)
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cout << "Opcion invalida. Intentelo nuevamente\n";
			opcion = 0;
		}

	} while (opcion < 1 || opcion > 3);

	switch (opcion)
	{
		case 1: return "Masculino";
		case 2: return "Femenino";
		case 3: return "Prefiero no responder";
		default: std::cerr << "Error en la funcion pedirGenero()\n";
			return "";
	}
}

bool emailValido(const std::string& email) // email tiene que ser del tipo "hola123@gmail.com" no se aceptan caracteres que no sean numeros y letras
{
	int cuentoArroba{ 0 };
	int cuentoPunto{ 0 };
	size_t posArroba = std::string::npos; // uso size_t para no contar en negativo, uso std::string::npos para inicializarlo sin posicion ya que esta variable va a tomar el valor de su posicion en el email. npos viene de "no posicion" o sin posicion.
	size_t posPunto = std::string::npos;

	for (size_t i{ 0 }; i < email.length(); i++)
	{
		char c = email[i];
		
		if (c == '@')
		{
			cuentoArroba++;
			posArroba = i;
		}
		else if (c == '.')
		{
			cuentoPunto++;
			posPunto = i;
		}
		else if (!isalnum(c)) //funcion isalnum que se fija si el caracter ingresado es numero o letra
		{
			return false;
		}
	}

	if (cuentoArroba != 1 || cuentoPunto != 1) //chequeo si el arroba y el punto estan solo una vez en el email
	{
		return false;
	}

	if (posPunto < posArroba) //el arroba tiene que estar primero que el punto
	{
		return false;
	}

	if (posArroba == 0 || posArroba == email.length() - 1) //el arroba no puede estar ni al principio ni al final
	{
		return false;
	}
	if (posPunto == 0 || posPunto == email.length() - 1) //el punto no puede estar ni al principio ni al final
	{
		return false;
	}

	return true;


}

std::string pedirEmail()
{
	std::string email;
	do {
		std::cout << "Ingrese su email (solo letras, numeros, un '@' y un '.'): ";
		std::cin >> email;

		if (emailValido(email)) {
			return email;
		}
		else {
			std::cout << "Email inválido. Intente de nuevo.\n";
		}

	} while (true);
}

//funcion para que la fecha de nacimiento sea valida del tipo: DD-MM-AAAA
bool formatoFecha(const std::string& fechanacimiento)
{
	if (fechanacimiento.length() != 10)
	{
		return false;
	}
	if (fechanacimiento[2] != '-' || fechanacimiento[5] != '-')
	{
		return false;
	}

	for (int i{ 0 }; i < fechanacimiento.length(); i++)
	{
		if (i == 2 || i == 5)
		{
			continue;
		}
		if (!isdigit(fechanacimiento[i]))
		{
			return false;
		}
	}

	return true;
}

// funcion que aprueba que la fecha sea real. USO LA FUNCION STOI (string to int) AYUDA A LA CONVERSION!!!!
//TAMBIEN uso funcion substr que marcando las posicion y la cantidad de caracteres extrae una parte del string asi analizo la fecha!!!
bool fechaValida(const std::string& fecha)
{
	int dia{ 0 };
	int mes{ 0 };
	int anio{ 0 };

	if (!formatoFecha(fecha))
	{
		return false;
	}

	dia = std::stoi(fecha.substr(0, 2));
	mes = std::stoi(fecha.substr(3, 2));
	anio = std::stoi(fecha.substr(6, 4));

	if (mes < 1 || mes > 12)
	{
		return false;
	}

	int diasEnMes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	bool bisiesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
	if (bisiesto && mes == 2) diasEnMes[1] = 29;

	if (dia < 1 || dia > diasEnMes[mes - 1]) return false;

	return true;
}

std::string pedirFechaDeNacimiento()
{
	std::string fecha;
	while (true) 
	{
		std::cout << "Ingrese su fecha de nacimiento (dd-mm-aaaa)\n";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::getline(std::cin, fecha);

		if (fechaValida(fecha))
		{
			return fecha;
		}
		else
		{
			std::cout << "Fecha invalida. Intentelo nuevamente \n";
		}
	} 
}

//funcion para solo validar numeros en numdetelefono. uso funcion is digit que me ayuda a determinar que los caracteres sean numeros.
bool telefonoValido(const std::string& telefono)
{
	if (telefono.length() != 10)
	{
		return false;
	}

	for (char c : telefono) {
		if (!isdigit(c)) {
			return false; // encontramos un caracter que NO es numero
		}
	}

	return true;
}

std::string pedirNumTelefono()
{
	std::string telefono;

	while (true)
	{
		std::cout << "Ingrese su numero de telefono sin puntos ni guiones. Ejemplo: 1127569021\n";
		std::getline(std::cin, telefono);

		if (telefonoValido(telefono))
		{
			return telefono;
		}
		else
		{
			std::cout << "Ingrese un numero de telefono valido\n";
		}
	}
}

bool direccionValida(const std::string& direccion)
{
	if (direccion.empty() || direccion.find_first_not_of(" ") == std::string::npos)// uso find first not of que busca en el string un caracter distinto al que le paso, esto me sirve para ver si el usuario ingresa todo espacios, como le mando espacios si solo encuantra eso devuelve npos
	{
		return false;
	}

	for (char c : direccion)
	{
		if (!(std::isalnum(c) || c == ' '))
		{
			return false;
		}
	}

	return true;

}

std::string pedirDireccion() 
{
	std::string direccion;
	while (true)
	{
		std::cout << "Ingrese su direccion (calle y numero): \n";
		std::getline(std::cin, direccion);

		if (direccionValida(direccion))
		{
			return direccion;
		}
		else
		{
			std::cout << "Direccion invalida, solo letras numeros y espacios\n";
		}

	}
}

//Convierte strings de builder a standard
std::string ConvertirStdString(const String& s)
{
	return std::string(AnsiString(s).c_str());  // UnicodeString -> AnsiString -> std::string
}