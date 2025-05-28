#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include "socios.h"


class biblioteca
{
private:
	std::vector<socios> listaSocios; //estructura dinamica para manejar archivos de socios
public:
	biblioteca(); //Constructor
	~biblioteca(); //Destructor

	//Metodos para libros
	void altaLibro();
	void bajaLibro();
	void modifLibro();

	//Metodos para socios
	void altaSocio(); // Método para dar de alta un socio
	void bajaSocio(); // Método para dar de baja un socio
	void modificarSocio(); // Método para modificar un socio

	//Metodos para prestamos
	void prestarLibro();
	void devolucionLibro();

	//Metodos de busqueda y filtro
	void buscoLibroPorNombre();
	void buscoLibroPorAutor();
	void buscoLibroPorAnio();
};

#endif

