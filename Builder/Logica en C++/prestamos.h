#ifndef PRESTAMOS_H
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
	int diasPrestamo;
	std::string fechaVencimiento; //Opcional, se puede calcular
	bool devuelto;

public:
	prestamos(libros& _libro, socios& _socio, std::string _fechaPrestamo, int _diasPrestamo); //Constructor
	~prestamos(); //Destructor

	//Getters
	libros& getLibroPrestado();
	socios& getSocioPrestatario();
	std::string getFechaPrestamo();
	int getDiasPrestamo();
	std::string getFechaVencimiento();
	bool libroDevuelto(); //Muestra true o false dependiendo si el libro esta devuelto o no. No recuerdo por que se pone const

     //getters para modificar directamente en devolverLibro, no son const porq quiero modificar datos
	libros& getLibro();
	socios& getSocio();

	//Setter
	void setFechaVencimiento(const std::string);
	void setDevuelto(bool); //Bool que indica si el libro fue devuelto o no

	//Funcionalidad
	bool estaVencido() const;
	int diasHastaVencimiento() const;
	std::string calcularFechaVencimiento() const; //para no guardar fecha vencimiento fija


};

#endif