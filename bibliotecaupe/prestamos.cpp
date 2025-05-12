#include <iostream>
#include "prestamos.h"
#include "libros.h"
#include "socios.h"

prestamos::prestamos(libros& _libro, socios& _socio, std::string _fechaPrestamo, std::string _fechaVencimiento, bool _devuelto)
    : refLibro(_libro), refSocio(_socio), fechaPrestamo(_fechaPrestamo), fechaVencimiento(_fechaVencimiento), devuelto(_devuelto)
{

}

prestamos::~prestamos()
{

}

void prestamos::getPrestamo()
{
    std::cout << "Libro: " << refLibro.getNombre() << "prestado a " << refSocio.getNombre() << " el " << fechaPrestamo << " hasta el " << fechaVencimiento;
}

std::string prestamos::getLibroPrestado()
{
    return std::string();
}

std::string prestamos::getSocioPrestatario()
{
    return std::string();
}

bool prestamos::estaVencido()
{
    return false;
}

int prestamos::diasHastaVencimiento()
{
    return 0;
}

bool prestamos::libroDevuelto()
{
    return false;
}
