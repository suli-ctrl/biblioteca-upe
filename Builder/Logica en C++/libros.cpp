#include "libros.h"
#include <iostream>
#include <string>

/*--------------------------------- Constructor ----------------------------------------*/

libros::libros(std::string _nombre, std::string _area, std::string _subarea,
               std::string _autores, std::string _editorial, int _anioDePublicacion,
               std::string _ubicacion, std::string _estado)
               : nombre(_nombre), area(_area), subarea(_subarea), autores(_autores),
                editorial(_editorial), anioDePublicacion(_anioDePublicacion),
                ubicacion(_ubicacion), estado(_estado)
{}

/*--------------------------------- Destructor ----------------------------------------*/

libros::~libros() 
{
    //Completar
}

/*---------------------------------- Metodos getters -----------------------------------------*/


std::string libros::getNombre() const
{ 
    return nombre; 
}

std::string libros::getArea() const
{
    return area;
}

std::string libros::getSubArea() const
{
    return subarea;
}

std::string libros::getAutores() const
{
    return autores;
}

std::string libros::getEditorial() const
{
    return editorial;
}

int libros::getAnioDePublicacion() const
{
    return anioDePublicacion;
}

std::string libros::getUbicacion() const
{
    return ubicacion;
}

std::string libros::getEstado() const 
{ 
    return estado; 
}

/*---------------------------------- Metodos Setters -----------------------------------------*/

void libros::setNombre(std::string& nuevoNombre)
{
	nombre = nuevoNombre;
}

void libros::setArea(std::string& nuevoArea)
{
	area = nuevoArea;
}

void libros::setSubArea(std::string& nuevoSubArea)
{
	subarea = nuevoSubArea;
}

void libros::setAutores(std::string& nuevosAutores)
{
	autores = nuevosAutores;
}

void libros::setEditorial(std::string& nuevaEditorial)
{
	editorial = nuevaEditorial;
}

void libros::setAnioDePublicacion(int nuevoAnio)
{
	anioDePublicacion = nuevoAnio;
}

void libros::setUbicacion(std::string& nuevaUbicacion)
{
	ubicacion = nuevaUbicacion;
}

void libros::setEstado(std::string& nuevoEstado)
{
	estado = nuevoEstado;
}





/*---------------------------------- Metodos privados para codigo de barras -----------------------------------------*/

std::string libros::obtenerEstadoID() const
{
    if (estado == "bien") {
        return "01";
    }
    else if (estado == "regular") {
        return "02";
    }
    else if (estado == "malo") {
        return "03";
    }
    else if (estado == "destruido") {
        return "04";
    }
    else {
        return "";
    }
}

std::string libros::obtenerDisponibilidadID() const
{
    if (prestado) {
        return "00"; //libro no disponible
    }
    else {
        return "01"; //Libro disponible
    }
}



std::string libros::convFormatoUbi() const //cambia el formato Est1-F1 a E1F1   
{
    std::string nuevoFormUbi;
    char c;

    for (size_t i = 0; i < ubicacion.length(); i++)
    {
        c = ubicacion[i];
        
        if (c != 's' && c != 't' && c != '-') {
            nuevoFormUbi = nuevoFormUbi + c;
        }

    }

    return(nuevoFormUbi);
}



std::string libros::codBarras() //metodo que genera al codigo de barras
{
    std::string codigo;

    codigo = codigo + convFormatoUbi(); //primera parte del codigo
    codigo = codigo + "-" + obtenerEstadoID(); //segunda parte del codigo
    codigo = codigo + "-" + obtenerDisponibilidadID(); //tercera parte del codigo

    return codigo;

}

void libros::mostrar() const
{
    std::cout << "Nombre: " << getNombre() << "\n";
    std::cout << "Autor/es: " << getAutores() << "\n";
    std::cout << "Area: " << getArea() << "\n";
    std::cout << "Editorial: " << getEditorial() << "\n";
    std::cout << "Ubicacion: " << getUbicacion() << "\n";
    std::cout << "Estado: " << getEstado() << "\n";
    std::cout << "--------------------------\n";
}
