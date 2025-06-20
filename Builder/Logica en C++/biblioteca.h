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
	const std::vector<libros>& getListaLibros() const; // Solo lectura
	std::vector<libros>& getListaLibrosModificable(); //Al no tener los const, se puede modificar
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
	void altaLibro(String nombre, String area, String subarea, String autores, String editorial, int anioPublicacion, String ubicacion, String estado);
	void bajaLibro(String );
	//void modificarLibro();

	//Metodos para socios
	void altaSocio(int dni, int edad, String apellido, String genero, String direccion, String telefono, String fechaNacimiento, String email); // Metodo para dar de alta un socio
	void bajaSocio(String); // Metodo para dar de baja un socio
	//void modificarSocio(); // Metodo para modificar un socio

	//Metodos para prestamos
	//void prestarLibro();
	void prestarLibro(std::string ubicacionLibro, int dniSocio, std::string fechaPrestamo, int diasPrestamo);
	void devolverLibro();

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

