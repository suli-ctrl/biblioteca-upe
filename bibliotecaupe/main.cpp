#include <iostream>
#include "biblioteca.h"
#include "libros.h"
#include "socios.h"
#include "prestamos.h"


int main() {

    //probando que onda
    
    libros libro1("Cien años de soledad", "Literatura", "Novela", "Gabriel García Márquez", "Editorial X", 1967, "bien", "Est1-F1", false);

    std::cout << "Nombre del libro: " << libro1.getNombre() << std::endl;

    // libro1.prestarLibro();

    // libro1.prestarLibro();

    // libro1.devolucionLibro();

    // libro1.ubicacionLibro();
    // std::cout << '\n';
    // libro1.estadoLibro();

    //std::cout << "El codigo de barras del libro es:" << libro1.codBarras() << std::endl;

    socios socio1(40720288, 27, "Zarate", "M", "Ezeiza", "1123674154", "12/11/1997", "agusnzarate@gmail.com");

   
    //Pruebas de metodos de prestamos

    prestamos prestamo1(libro1, socio1, "12/05/2025", 7); // Libro, socio, fecha de prestamo y dias de prestamo
    prestamo1.getPrestamo();  // Muestra los detalles del prestamo
    prestamo1.getLibroPrestado();  // Muestra el nombre del libro
    prestamo1.getSocioPrestatario();  // Muestra el nombre del socio
    prestamo1.libroDevuelto(); 
    prestamo1.marcarDevuelto();
    prestamo1.libroDevuelto();



    return 0;

}