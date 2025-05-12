#include <iostream>
#include "prestamos.h"
#include "libros.h"
#include "socios.h"

prestamos::prestamos(libros& _libro, socios& _socio, std::string _fechaPrestamo, int _diasPrestamo)
    : refLibro(_libro), refSocio(_socio), fechaPrestamo(_fechaPrestamo), diasPrestamo(_diasPrestamo) //Lista de inicializacion
{
    std::cout << "Prestamo creado" << std::endl;
}

prestamos::~prestamos()
{
    //Destructor
}

void prestamos::getPrestamo()
{
    std::cout << "El libro " << refLibro.getNombre() << " fue prestado a " << refSocio.getNombre() << " el " << fechaPrestamo << " hasta el " << fechaVencimiento << "\n";
}

std::string prestamos::getLibroPrestado()
{
    std::cout << "El libro prestado es: " << refLibro.getNombre() << "\n";
    return refLibro.getNombre();
}

std::string prestamos::getSocioPrestatario()
{
    std::cout << "El socio prestatario es: " << refSocio.getNombre() << "\n";
    return refSocio.getNombre();
}

void prestamos::marcarDevuelto() {
    devuelto = true;
}

bool prestamos::libroDevuelto()
{
    if (devuelto == true) {
        std::cout << "El libro ha sido devuelto." << std::endl;
        return true;
    }
    else {
        std::cout << "El libro no ha sido devuelto" << std::endl;
    }
    
    return false;
}


bool prestamos::estaVencido()
{

    return false;
}

int prestamos::diasHastaVencimiento()
{
    return 0;
}

