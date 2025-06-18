#ifndef PRESTAMOS_H
#define PRESTAMOS_H

#include <string>
#include "socios.h"
#include "libros.h"

class prestamos
{
private:
    libros& refLibro;   //referencia al libro prestado
    socios& refSocio;   //referencia al socio prestatario
    std::string fechaPrestamo;
    int diasPrestamo;
    std::string fechaVencimiento; //opcional pq se puede calcular
    bool devuelto = false;

public:
    //constructor y destructor
    prestamos(libros& _libro, socios& _socio, std::string _fechaPrestamo, int _diasPrestamo);
    ~prestamos();

    //getters para leer
    const libros& getLibroPrestado() const;
    const socios& getSocioPrestatario() const;
    std::string getFechaPrestamo() const;
    int getDiasPrestamo() const;
    std::string getFechaVencimiento() const;
    bool libroDevuelto() const;

    //getters para modificar directamente en devolverLibro, no son const porq quiero modificar datos
    libros& getLibro();
    socios& getSocio();

    //setters
    void setFechaVencimiento(const std::string);
    void setDevuelto(bool);

    //funcionalidad de vencimiento
    bool estaVencido();
    int diasHastaVencimiento();
    std::string calcularFechaVencimiento() const; //para no guardar fecha vencimiento fija

    //mostrar
    void mostrar() const;
};

#endif