#include <iostream>
#include "biblioteca.h"
#include "libros.h"
#include "socios.h"


int main() {

    //probando que onda
    
    libros libro1("Cien años de soledad", "Literatura", "Novela", "Gabriel García Márquez", "Editorial X", 1967, "Nuevo", "Estante A1", false);

    std::cout << "Nombre del libro: " << libro1.getNombre() << '\n';

    // libro1.prestarLibro();

    // libro1.prestarLibro();

    // libro1.devolucionLibro();

    // libro1.ubicacionLibro();
    // std::cout << '\n';
    // libro1.estadoLibro();

    //probando socios

    socios socio1(12345678, 20, "Dimaso", "Masculino", "Hola chau 123", "123456789", "11/11/2004", "tiago@mail.com");

    //mostrar los datos del socio
    std::cout << "=== Socio creado ===" << '\n';
    std::cout << "DNI: " << socio1.getDNI() << '\n';
    std::cout << "Nombre: " << socio1.getNombre() << '\n';
    std::cout << "Edad: " << socio1.getEdad() << '\n';
    std::cout << "Email: " << socio1.getEmail() << '\n';
    std::cout << "Resumen: " << socio1.getSocio() << '\n';

    //modificar algunos datos
    socio1.setEdad(31);
    socio1.setDireccion("chau Hola 321");
    socio1.setEmail("tiagodimaso@mail.com");

    //muestro lo que cambie
    std::cout << "\nDatos modificados" << '\n';
    std::cout << "Edad: " << socio1.getEdad() << '\n';
    std::cout << "Resumen: " << socio1.getSocio() << '\n';

    return 0;

}