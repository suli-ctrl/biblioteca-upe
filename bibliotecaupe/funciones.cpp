#include <iostream>
#include "funciones.h"
#include <string>
#include <cctype>

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
	bool valido = true;

	while (true)
	{
		std::cout << "Ingrese su apellido \n";
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