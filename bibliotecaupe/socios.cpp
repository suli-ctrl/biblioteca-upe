#include <iostream>
#include <string>
#include <cctype>
#include "socios.h"

socios::socios( int _dni, int _edad, std::string _apellido, 
				std::string _genero, std::string _direccion, std::string _numTelefono, 
				std::string _fechaNacimiento, std::string _email)
				: dni(_dni), edad(_edad), apellido(_apellido), genero(_genero), 
				direccion(_direccion), numTelefono(_numTelefono), fechaNacimiento(_fechaNacimiento), email(_email) // A esto se le llama "lista de inicializacion" (lo que esta despues de los : )
{ }

socios::~socios()
{
	// Destructor
}

int socios::getDNI() const
{
	return dni;
}

int socios::getEdad() const
{
	return edad;
}

std::string socios::getApellido() const
{
	return apellido;
}

std::string socios::getGenero() const
{
	return genero;
}

std::string socios::getDireccion() const
{
	//return dni;
	return direccion;
}

std::string socios::getTelefono() const
{
	return numTelefono;
}

std::string socios::getFechaNacimiento() const
{
	return fechaNacimiento;
}

std::string socios::getEmail() const
{
	return email;
}



void socios::setEdad(int nuevaEdad)
{
	if (nuevaEdad > 0)
	{
	  edad = nuevaEdad;
	}
	else
	{
		std::cout << "Edad invalida. \n";
	}
}

void socios::setApellido(const std::string& nuevoApellido)
{
	apellido = nuevoApellido;
}


void socios::setGenero(const std::string& nuevoGenero)
{
	genero = nuevoGenero;
}

void socios::setDireccion(const std::string& nuevaDireccion)
{
	direccion = nuevaDireccion;
}

void socios::setTelefono(const std::string& nuevoTelefono)
{
	numTelefono = nuevoTelefono;
}

void socios::setFechaNacimiento(const std::string& nuevaFecha)
{
	fechaNacimiento = nuevaFecha;
}


void socios::setEmail(const std::string& nuevoEmail)
{
	email = nuevoEmail;
}


// una funcion para mostrar todos los datos

void socios::mostrar() const {
	std::cout << "DNI: " << dni << "\n";
	std::cout << "Apellido: " << apellido << "\n";
	std::cout << "Edad: " << edad << "\n";
	std::cout << "Genero: " << genero << "\n";
	std::cout << "Direccion: " << direccion << "\n";
	std::cout << "Telefono: " << numTelefono << "\n";
	std::cout << "Fecha de nacimiento: " << fechaNacimiento << "\n";
	std::cout << "Email: " << email << "\n";
}

//funcion para solo validar numeros en numdetelefono
bool telefonoValido(const std::string& telefono) {
	for (char c : telefono) {
		if (!isdigit(c)) {
			return false; // encontramos un caracter que NO es número
		}
	}
	return !telefono.empty(); // tambien valido que no este vacío
}




