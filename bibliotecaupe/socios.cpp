#include <iostream>
#include <string>
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
	return direccion;
}

std::string socios::getTelefono() const
{
	return numTelefono;
}

int socios::getDNI() const
{
	return dni;
}

int socios::getEdad() const
{
	return edad;
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
	edad = nuevaEdad;
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



