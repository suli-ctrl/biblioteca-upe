#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include "socios.h"
#include "libros.h"
#include "prestamos.h"


class biblioteca
{
private:
	std::vector<socios> listaSocios; //estructura dinamica para manejar archivos de socios
	std::vector<libros> listaLibros; //estructura dinamica para manejar archivos de libros
	std::vector<prestamos> listaPrestamos; //estructura dinamica para manejar archivos de prestamos
public:
	
	biblioteca(); //Constructor
	~biblioteca(); //Destructor

	//Getters
	const std::vector<libros>& getListaLibros() const;
    const std::vector<socios>& getListaSocios() const;

	//Manejo de archivos
	void cargarSociosCSV();
	void guardarSociosCSV();

	void cargarLibrosCSV();
	void guardarLibrosCSV();
	//void guardarLibrosCSV(const std::vector<libros>&);

	void cargarPrestamosCSV();
	void guardarPrestamosCSV();

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
	void menuBusquedaLibros();

	//Metodos de busqueda y filtro para socios
	void buscoSocioporDni();
	void buscoSocioPorApellido();
	void buscoSocioPorTelefono();
	void menuBusquedaSocios();
};

#endif

