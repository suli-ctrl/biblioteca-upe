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
	
	void getPrestamo(); //Muestra detalles del prestamo
	std::string getLibroPrestado(); //Muestra el libro que esta siendo prestado
	std::string getSocioPrestatario(); //Muestra el socio a quien se le prestó el libro
	void marcarDevuelto(); //Cambia el valor de devuelto 
	bool estaVencido(); //Bool que nos indica si el prestamo esta vencido
	int diasHastaVencimiento(); //Dias que faltan para que venza el prestamo
	bool libroDevuelto(); //Bool que indica si el libro fue devuelto o no

};

#endif