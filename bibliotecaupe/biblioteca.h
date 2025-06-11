#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include "socios.h"
#include "libros.h"


class biblioteca
{
private:
	std::vector<socios> listaSocios; //estructura dinamica para manejar archivos de socios
	std::vector<libros> listaLibros; //estructura dinamica para manejar archivos de libros
public:
	
	biblioteca(); //Constructor
	~biblioteca(); //Destructor

	//Manejo de archivos
	void cargarSociosCSV();
	void cargarLibrosCSV();
	void guardarSociosCSV();
	void guardarLibrosCSV();
	void guardarLibrosCSV(const std::vector<libros>&);

	//Metodos para libros
	void altaLibro();
	void bajaLibro();
	void modificarLibro();

	//Metodos para socios
	void altaSocio(); // Metodo para dar de alta un socio
	void bajaSocio(); // Metodo para dar de baja un socio
	void modificarSocio(); // Metodo para modificar un socio

	//Metodos para prestamos
	void prestarLibro();
	void devolucionLibro();

	//Metodos de busqueda y filtro para libros
	void buscoLibroPorNombre();
	void buscoLibroPorAutor();
	void buscoLibroPorAnio();

	//Metodos de busqueda y filtro para libros
	void buscoSocioporDni();
	void buscoSocioPorApellido();
	void buscoSocioPorTelefono();
	void menuBusquedaSocios();
};

#endif

