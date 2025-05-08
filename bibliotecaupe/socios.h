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
	std::string direccion;
	std::string numTelefono;
	std::string fechaNacimiento;
	std::string email;

public:
	socios( int _dni, int _edad, std::string _apellido,
}			std::string _genero, std::string _direccion, std::string _numTelefono, 
			std::string _fechaNacimiento, std::string _email); // Constructor

	~socios(); // Destructor
	void altaSocio(); // M�todo para dar de alta un socio
	void bajaSocio(); // M�todo para dar de baja un socio
	void modificarSocio(); // M�todo para modificar un socio
};

#endif


