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
	const libros& getLibroPrestado() const;
	const socios& getSocioPrestatario() const;
	const std::string getFechaPrestamo() const;
	int getDiasPrestamo() const;
	const std::string getFechaVencimiento() const;
	bool libroDevuelto() const; //Muestra true o false dependiendo si el libro esta devuelto o no

     //getters para modificar directamente en devolverLibro, no son const porq quiero modificar datos
	libros& getLibro();
	socios& getSocio();

	//Setter
	void setFechaVencimiento(const std::string);
	void setDevuelto(bool); //Bool que indica si el libro fue devuelto o no

	//Metodos
	bool estaVencido() const;
	int diasHastaVencimiento() const;
	std::string calcularFechaVencimiento(std::string fechaInicio, int dias); //para no guardar fecha vencimiento fija


};

#endif