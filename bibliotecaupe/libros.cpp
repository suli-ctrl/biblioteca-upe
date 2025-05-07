#include "libros.h"
#include <iostream>
#include <string>

libros::libros(std::string _nombre, std::string _area, std::string _subarea,
               std::string _autores, std::string _editorial, int _anioDePublicacion,
               std::string _estado, std::string _ubicacion, bool _prestado)
               : nombre(_nombre), area(_area), subarea(_subarea), autores(_autores),
                editorial(_editorial), aniodepubli(_anioDePublicacion),
                estado(_estado), ubicacion(_ubicacion), prestado(_prestado) {}


libros::~libros() {}

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
    return aniodepubli;
}
bool libros::getPrestado() const 
{ 
    return prestado; 
}


void libros::prestarLibro() {
    if (prestado) {
        std::cout << "El libro '" << nombre << "' ya esta prestado." << std::endl;
    }
    else {
        prestado = true;
        std::cout << "El libro '" << nombre << "' fue prestado." << std::endl;
    }
}


void libros::devolucionLibro() 
{
    if (!prestado) {
        std::cout << "El libro '" << nombre << "' no estaba prestado.";
    }
    else {
        prestado = false;
        std::cout << "El libro '" << nombre << "' fue devuelto." << '\n';
    }
}

void libros::ubicacionLibro() {
    std::cout << "El libro '" << nombre << "' esta ubicado en: " << ubicacion;
}

void libros::estadoLibro() {
    std::cout << "El libro '" << nombre << "' esta en estado: " << estado;
}