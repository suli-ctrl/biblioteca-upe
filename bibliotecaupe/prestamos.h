#ifndef PRESTAMOS_h
#define PRESTAMOS_H

#include <string>
#include <ctime>
#include "socios.h"
#include "libros.h"

class prestamos
{
private:
	libros& refLibro; //referencia que apunta a libro
	socios& refSocio; //referencia que apunta a socio
	std::string fechaPrestamo; // Preguntar si se puede usar <ctime>
	int diasPrestamo;
	std::string fechaVencimiento; // Preguntar si se puede usar <ctime> o <chrono>
	bool devuelto;

public:
	prestamos(libros& _libro, socios& _socio, std::string _fechaPrestamo, int _diasPrestamo); //Constructor
	~prestamos(); //Destructor
	
	//Getters
	void getPrestamo(); //Muestra detalles del prestamo

	std::string getLibroPrestado(); //Muestra el titulo del libro que esta siendo prestado
	int getSocioPrestatario(); //Muestra el DNI del socio a quien se le prestó el libro

	std::string getFechaPrestamo();
	int getDiasPrestamo();
	std::string getFechaVencimiento();

	bool libroDevuelto(); //Bool que indica si el libro fue devuelto o no

};

#endif