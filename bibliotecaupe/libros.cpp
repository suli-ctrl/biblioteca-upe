#include "libros.h"
#include <iostream>
#include <string>

/*--------------------------------- Constructor ----------------------------------------*/

libros::libros(std::string _nombre, std::string _area, std::string _subarea,
               std::string _autores, std::string _editorial, int _anioDePublicacion,
               std::string _estado, std::string _ubicacion, bool _prestado)
               : nombre(_nombre), area(_area), subarea(_subarea), autores(_autores),
                editorial(_editorial), anioDePublicacion(_anioDePublicacion),
                estado(_estado), ubicacion(_ubicacion), prestado(_prestado)
{
    nombre = _nombre;
    area = _area;
    subarea = _subarea;
    autores = _autores;
    editorial = _editorial;
    estado = _estado;
    ubicacion = _ubicacion;
    anioDePublicacion = _anioDePublicacion;
    prestado = _prestado;
}

/*--------------------------------- Destructor ----------------------------------------*/

libros::~libros() 
{
    //Completar
}

/*---------------------------------- Metodos -----------------------------------------*/

std::string libros::getLibro()
{
    return std::string();
}

std::string libros::getNombre() const
{ 
    return nombre; 
}
std::string libros::getEstado() const 
{ 
    return estado; 
}
std::string libros::getUbicacion() const 
{ 
    return ubicacion; 
}
int libros::getAnioDePublicacion() const 
{ 
    return anioDePublicacion;
}
std::string libros::codBarras()
{
    return std::string();
}


bool libros::getPrestado() const
{
    return prestado;
}


void libros::ubicacionLibro() 
{
    std::cout << "El libro '" << nombre << "' esta ubicado en: " << ubicacion;
}

void libros::estadoLibro() 
{
    std::cout << "El libro '" << nombre << "' esta en estado: " << estado;
}