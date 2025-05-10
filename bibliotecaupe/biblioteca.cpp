#include <iostream>
#include "biblioteca.h"
#include "libros.h"

biblioteca::biblioteca()
{

}

void biblioteca::altaLibro()
{
}

void biblioteca::bajaLibro()
{
}

void biblioteca::modifLibro()
{
}


biblioteca::~biblioteca()
{

}

void biblioteca::altaSocio()
{
	// Completar
}

void biblioteca::prestarLibro()
{
    if (libros::prestado) { //creo que esto hay que hacerlo con punteros pq asi no compila ya que es un miembro privado
        std::cout << "El libro '" << nombre << "' ya esta prestado." << std::endl;
    }
    else {
        prestado = true;
        std::cout << "El libro '" << nombre << "' fue prestado." << std::endl;
    }
}


void biblioteca::devolucionLibro()
{
    if (!prestado) {
        std::cout << "El libro '" << nombre << "' no estaba prestado.";
    }
    else {
        prestado = false;
        std::cout << "El libro '" << nombre << "' fue devuelto." << '\n';
    }
}
