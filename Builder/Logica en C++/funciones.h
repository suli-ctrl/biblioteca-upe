#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <string>

int pedirDni();
int pedirEdad();
std::string pedirDireccion();
std::string pedirApellido();
std::string pedirGenero();
std::string pedirNumTelefono();
std::string pedirEmail();
std::string pedirFechaDeNacimiento();        

bool formatoFecha(const std::string& fechanacimiento);
bool fechaValida(const std::string& fecha);   
bool emailValido(const std::string& email);
bool telefonoValido(const std::string& telefono);
bool direccionValida(const std::string& direccion);

std::string ConvertirStdString(const String& s);

#endif

