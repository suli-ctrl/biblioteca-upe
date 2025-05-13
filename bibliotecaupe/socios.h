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
			std::string _genero, std::string _direccion, std::string _numTelefono, 
			std::string _fechaNacimiento, std::string _email); // constructor

	~socios(); // destructor

	// getters
	std::string getSocio() const;
	std::string getNombre() const;
	std::string getDNI() const;
	int getEdad() const;
	std::string getEmail() const;

	//setters
	void setEdad(int nuevaEdad);
	void setDireccion(const std::string& nuevaDireccion);
	void setEmail(const std::string& nuevoEmail);
	void setTelefono(const std::string& nuevoTelefono);
	void setGenero(const std::string& nuevoGenero);
};

#endif


