#include <iostream>
#include <string>
#include "socios.h"

socios::socios( int _dni, int _edad, std::string _apellido, 
				std::string _genero, std::string _direccion, std::string _numTelefono, 
				std::string _fechaNacimiento, std::string _email)
				: dni(_dni), edad(_edad), apellido(_apellido), genero(_genero), 
				direccion(_direccion), numTelefono(_numTelefono), fechaNacimiento(_fechaNacimiento), email(_email) // A esto se le llama "lista de inicializacion" (lo que esta despues de los : )
{
	dni = _dni;
	edad = _edad;
	apellido = _apellido;
	genero = _genero;
	direccion = _direccion;
	numTelefono = _numTelefono;
	fechaNacimiento = _fechaNacimiento;
	email = _email;
}

socios::~socios()
{
	// Destructor
}

std::string socios::getSocio()
{
	return std::string();
}

std::string socios::getNombre()
{
	return std::string();
}

std::string socios::getDNI()
{
	return std::string();
}

