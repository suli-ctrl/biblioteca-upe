#ifndef SOCIOS_H
#define SOCIOS_H

#include <string>

class socios
{
private:
	int dni;
	int edad;
	std::string apellido;
	std::string genero;
	std::string calle;
	std::string numTelefono;
	std::string fechaNacimiento;
	std::string email;

public:
	socios(); // Constructor
	~socios(); // Destructor
	void altaSocio(); // Método para dar de alta un socio
	void bajaSocio(); // Método para dar de baja un socio
	void modificarSocio(); // Método para modificar un socio
};

#endif


