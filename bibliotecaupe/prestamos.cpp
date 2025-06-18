#include <iostream>
#include <ctime> // me sirve para tener estructuras que representen fechas, se necesita para seguir el conteo de los dias que se presto un libro. Se usa std::tm. Tambien uso time_t que usa la fecha como un numero, me sirve para hacer la cuenta de cuanto dias lleva prestado el libro, para hacer esta cuenta uso difftime
#include <sstream>
#include <iomanip> // libreria que me permite controlar formato de entrada y salida, de el uso std::get_time que va a leer mi formato dd/mm/aaaa y lo va a pasar a tm de ctime
#include "prestamos.h"
#include "libros.h"
#include "socios.h"

prestamos::prestamos(libros& _libro, socios& _socio, std::string _fechaPrestamo, int _diasPrestamo)
    : refLibro(_libro), refSocio(_socio), fechaPrestamo(_fechaPrestamo), diasPrestamo(_diasPrestamo), devuelto(false)
{
    std::cout << "Prestamo creado" << std::endl;
}

prestamos::~prestamos()
{
    // Destructor
}

// ------------------------ GETTERS ------------------------

const libros& prestamos::getLibroPrestado() const
{
    return refLibro;
}

const socios& prestamos::getSocioPrestatario() const
{
    return refSocio;
}

std::string prestamos::getFechaPrestamo() const
{
    return fechaPrestamo;
}

int prestamos::getDiasPrestamo() const
{
    return diasPrestamo;
}

std::string prestamos::getFechaVencimiento() const
{
    return fechaVencimiento;
}

bool prestamos::libroDevuelto() const
{
    return devuelto;
}

libros& prestamos::getLibro() 
{
    return refLibro;
}

socios& prestamos::getSocio() 
{
    return refSocio;
}

// ------------------------ SETTERS ------------------------

void prestamos::setFechaVencimiento(const std::string fecha)
{
    fechaVencimiento = fecha;
}

void prestamos::setDevuelto(bool valor)
{
    devuelto = valor;
}

// ------------------------ FUNCIONALIDAD ------------------------

bool prestamos::estaVencido() const
{
    std::tm tmPrestamo = {}; //estructura para guardar la fecha como fecha real
    std::istringstream ss(fechaPrestamo); //uso stringstream para leer el texto
    ss >> std::get_time(&tmPrestamo, "%d/%m/%Y"); // "12/06/2025"

    if (ss.fail()) {
        std::cerr << "Fecha inválida: " << fechaPrestamo << "\n";
        return false;
    }

    std::time_t tiempoPrestamo = std::mktime(&tmPrestamo); //convierto time_t usando mktime(fecha de sistema)
    std::time_t ahora = std::time(nullptr); //tomo la fecha actual

    double segundosPasados = std::difftime(ahora, tiempoPrestamo); //diferencia entre ahora y la fecha del prestamo en segundos
    int diasPasados = static_cast<int>(segundosPasados / (60 * 60 * 24)); //de segundos lo convierto a dias

    return diasPasados > diasPrestamo; //si paso el limite va a devolver true si no lo hace false
}

int prestamos::diasHastaVencimiento() const
{
    std::tm tmPrestamo = {};
    std::istringstream ss(fechaPrestamo);
    ss >> std::get_time(&tmPrestamo, "%d/%m/%Y");

    if (ss.fail()) return -1;

    std::time_t tiempoPrestamo = std::mktime(&tmPrestamo);
    std::time_t ahora = std::time(nullptr);
    double segundosPasados = std::difftime(ahora, tiempoPrestamo);
    int diasPasados = static_cast<int>(segundosPasados / (60 * 60 * 24));

    return diasPrestamo - diasPasados; //calculo cuanto falta o si se paso del plazo
}

// ------------------------ MOSTRAR ------------------------

void prestamos::mostrar() const
{
    std::cout << "Libro: " << refLibro.getNombre();
    std::cout << " | Ubicacion: " << refLibro.getUbicacion();
    std::cout << " | Socio: " << refSocio.getApellido();
    std::cout << " | DNI: " << refSocio.getDNI();
    std::cout << " | Fecha: " << fechaPrestamo;
    std::cout << " | Dias: " << diasPrestamo;
    std::cout << " | Devuelto: " << (devuelto ? "Si" : "No");
    std::cout << "\n";
}
