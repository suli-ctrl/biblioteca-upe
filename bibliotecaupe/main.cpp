#include <iostream>
#include "biblioteca.h"
#include "libros.h"
#include "socios.h"


int main() {

    //probando que onda
    
    libros libro1("Cien años de soledad", "Literatura", "Novela", "Gabriel García Márquez", "Editorial X", 1967, "Nuevo", "Estante A1", false);

    std::cout << "Nombre del libro: " << libro1.getNombre() << std::endl;

    // libro1.prestarLibro();

    // libro1.prestarLibro();

    // libro1.devolucionLibro();

    // libro1.ubicacionLibro();
    // std::cout << '\n';
    // libro1.estadoLibro();

    return 0;

}