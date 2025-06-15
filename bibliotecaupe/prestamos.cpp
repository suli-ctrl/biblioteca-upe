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
    return std::string();
}

//-----------------COMPLETAR---------------------//
int prestamos::getDiasPrestamo()
{
    return 0;
}

std::string prestamos::getFechaVencimiento()
{
    return std::string();
}

void prestamos::setFechaVencimiento(const std::string fecha)
{
    fechaVencimiento = fecha;
}

void prestamos::setDevuelto(bool valor)
{
    devuelto = valor;
}

//-----------------COMPLETAR---------------------//

bool prestamos::libroDevuelto() const {
    return devuelto;
}
