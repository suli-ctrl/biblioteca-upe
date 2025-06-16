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

//----------------------------------------------------------------------------GETTERS------------------------------------------------------------------------------------------

void prestamos::getPrestamo()
{
    std::cout << "El libro " << refLibro.getNombre() << " fue prestado a " << refSocio.getApellido() << " el " << fechaPrestamo << " hasta el " << fechaVencimiento << "\n";
}

std::string prestamos::getLibroPrestado()
{
    std::cout << "El libro prestado es: " << refLibro.getNombre() << "\n";
    return refLibro.getNombre();
}

int prestamos::getSocioPrestatario()
{
    std::cout << "El socio prestatario es: " << refSocio.getDNI() << "\n";
    return refSocio.getDNI();
}

std::string prestamos::getFechaPrestamo()
{
    return fechaPrestamo;
}

int prestamos::getDiasPrestamo()
{
    return diasPrestamo;
}

std::string prestamos::getFechaVencimiento()
{
    return fechaVencimiento;
}


bool prestamos::libroDevuelto() const
{
    return devuelto;
}

//--------------------------------------------------------------------------SETTERS-------------------------------------------------------------------------------------------//


void prestamos::setFechaVencimiento(const std::string fecha)
{
    fechaVencimiento = fecha;
}

void prestamos::setDevuelto(bool valor)
{
    devuelto = valor;
}

//-------------------------------------------------------------------------FUNCIONALIDAD PRESTAMOS---------------------------------------------------------------------------//
bool prestamos::estaVencido()
{

    return true ; //provisional
}

int prestamos::diasHastaVencimiento()
{
    return 0;
}
