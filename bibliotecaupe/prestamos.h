#ifndef PRESTAMOS_h
#define PRESTAMOS_H

#include <string>
#include "socios.h"
#include "libros.h"

class prestamos
{
private:
	libros& refLibro; //referencia que apunta a libro
	socios& refSocio; //referencia que apunta a socio
	std::string fechaPrestamo;
	std::string fechaVencimiento;
	bool devuelto;
public:
	prestamos(libros& _libro, socios& _socio, std::string _fechaPrestamo, std::string _fechaVencimiento, bool _devuelto); //Constructor
	~prestamos(); //Destructor
	
	void getPrestamo(); //Muestra detalles del prestamo
	std::string getLibroPrestado(); //Muestra el libro que esta siendo prestado
	std::string getSocioPrestatario(); //Muestra el socio a quien se le prestó el libro
	bool estaVencido(); //Bool que nos indica si el prestamo esta vencido
	int diasHastaVencimiento(); //Dias que faltan para que venza el prestamo
	bool libroDevuelto(); //Bool que indica si el libro fue devuelto o no

};

#endif