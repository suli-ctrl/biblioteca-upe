#include <iostream>
#include <string>
#include <cctype>
#include <ctime>
#include "socios.h"
#include "funciones.h"

int socios::getDNI() const {
	return dni;
}

int socios::getEdad() const {
	return edad;
}

std::string socios::getApellido() const {
	return apellido;
}

std::string socios::getGenero() const {
	return genero;
}

std::string socios::getDireccion() const {
std::string socios::getDireccion() const
{
	return direccion;
}

std::string socios::getTelefono() const {
	return numTelefono;
}

std::string socios::getFechaNacimiento() const {
	return fechaNacimiento;
}

std::string socios::getEmail() const {
	return email;
}

//

void socios::setEdad(int nuevaEdad) {
	edad = nuevaEdad;
}

void socios::setApellido(const std::string& nuevoApellido) {
	apellido = nuevoApellido;
}

void socios::setGenero(const std::string& nuevoGenero) {
	genero = nuevoGenero;
}

void socios::setDireccion(const std::string& nuevaDireccion) {
	direccion = nuevaDireccion;
}

void socios::setTelefono(const std::string& nuevoTelefono) {
	numTelefono = nuevoTelefono;
}

void socios::setFechaNacimiento(const std::string& nuevaFecha) {
	fechaNacimiento = nuevaFecha;
}
void socios::setFechaNacimiento(const std::string& nuevaFecha)
{
	if (fechaReal(nuevaFecha))
	{
		fechaNacimiento = nuevaFecha;
	}
	else
	{
		std::cerr << "Error. La fecha ingresada no es valida o real\n";
	}
} 

void socios::setEmail(const std::string& nuevoEmail) {
	email = nuevoEmail;
}

//funcion para que la fecha de nacimiento sea valida del tipo: DD-MM-AAAA
bool fechaValida(const std::string& fechanacimiento)
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
}

// funcion que aprueba que la fecha sea real. USO LA FUNCION STOI (string to int) AYUDA A LA CONVERSION!!!!
//TAMBIEN uso funcion substr que marcando las posicion y la cantidad de caracteres extrae una parte del string asi analizo la fecha!!!
bool fechaReal(const std::string& fecha)
{
	int dia{ 0 };
	int mes{ 0 };
	int anio{ 0 };

	if (!fechaValida(fecha))
	{
		return false;
	}

	dia = std::stoi(fecha.substr(0, 2));
	mes = std::stoi(fecha.substr(3, 2));
	anio = std::stoi(fecha.substr(6, 4));

	if (mes < 1 || mes > 12)
	{
		return false;
//funcion para solo validar numeros en numdetelefono. uso funcion is digit que me ayuda a determinar que los caracteres sean numeros.
bool socios::telefonoValido(const std::string& telefono) {
	for (char c : telefono) {
		if (!isdigit(c)) {
			return false; // encontramos un caracter que NO es numero
		}
	}
	return !telefono.empty(); // tambien valido que no este vacio
}

//funcion para que la fecha de nacimiento sea valida del tipo: DD-MM-AAAA
bool socios::fechaValida(const std::string& fechanacimiento)
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
bool socios::fechaReal(const std::string& fecha)
{
	int dia{ 0 };
	int mes{ 0 };
	int anio{ 0 };

	if (!fechaValida(fecha))
	{
		return false;
	}

	int diasEnMes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	bool bisiesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
	if (bisiesto && mes == 2) diasEnMes[1] = 29;

	if (dia < 1 || dia > diasEnMes[mes - 1]) return false;

	return true;

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



