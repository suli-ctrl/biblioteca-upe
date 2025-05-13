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
{}

/*--------------------------------- Destructor ----------------------------------------*/

libros::~libros() 
{
    //Completar
}

/*---------------------------------- Metodos getters -----------------------------------------*/

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
