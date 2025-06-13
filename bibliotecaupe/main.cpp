#include <iostream>
#include <fstream>
#include "biblioteca.h"
#include "libros.h"
#include "socios.h"
#include "prestamos.h"

void menuPrincipal(biblioteca&);
void menuLibros(biblioteca&);
void menuSocios(biblioteca&);
void menuPrestamos(biblioteca&);


int main() {
    biblioteca BibliotecaUPE;
    menuPrincipal(BibliotecaUPE);
    
    /*
    //Probando libros
    libros libro1("Cien años de soledad", "Literatura", "Novela", "Gabriel García Márquez", "Editorial X", 1967, "bien", "Est1-F1", false);

    std::cout << "=== Libro creado ===" << '\n';
    std::cout << "\n";
    std::cout << "Nombre del libro: " << libro1.getNombre() << '\n';
    std::cout << "Estado:" << libro1.getEstado() << "\n";
    std::cout << "Ubicacion:" << libro1.getUbicacion() << "\n";
    std::cout << "Año de publicacion:" << libro1.getAnioDePublicacion() << "\n";
    std::cout << "El codigo de barras del libro es:" << libro1.codBarras() << "\n";
    std::cout << "\n";

    socios socio1(12345678, 20, "Dimaso", "Masculino", "Hola chau 123", "123456789", "11/11/2004", "tiago@mail.com");

    //mostrar los datos del socio
    std::cout << "=== Socio creado ===" << '\n';
    std::cout << "\n";    std::cout << "DNI: " << socio1.getDNI() << '\n';
    std::cout << "Nombre: " << socio1.getNombre() << '\n';
    std::cout << "Edad: " << socio1.getEdad() << '\n';
    std::cout << "Email: " << socio1.getEmail() << '\n';
    std::cout << "Resumen: " << socio1.getSocio() << '\n';
    std::cout << "\n";

    //modificar algunos datos
    socio1.setEdad(31);
    socio1.setDireccion("chau Hola 321");
    socio1.setEmail("tiagodimaso@mail.com");

    //muestro lo que cambie
    std::cout << "\nDatos modificados" << '\n';
    std::cout << "Edad: " << socio1.getEdad() << '\n';
    std::cout << "Resumen: " << socio1.getSocio() << '\n';
    std::cout << "\n";

    //pruebas de metodos de prestamos

    std::cout << "=== Prestamo creado ===" << '\n';
    std::cout << "\n";
    prestamos prestamo1(libro1, socio1, "12/05/2025", 7); // libro, socio, fecha de prestamo y dias de prestamo
    prestamo1.getPrestamo();  // muestra los detalles del prestamo
    prestamo1.getLibroPrestado();  // muestra el nombre del libro
    prestamo1.getSocioPrestatario();  // muestra el nombre del socio
    prestamo1.libroDevuelto();
    prestamo1.marcarDevuelto();
    prestamo1.libroDevuelto();
    std::cout << "\n";
    */

    return 0;
    
}

//Este menu es temporal. Para armar la logica hasta que lo hagamos con GUI
void menuPrincipal(biblioteca& BibliotecaUPE)
{
    int opcion;
    do
    {
        std::cout << "MENU PRINCIPAL" << std::endl;
        std::cout << "--------------------" << std::endl;
        std::cout << "1. Gestion de libros" << std::endl;
        std::cout << "2. Gestion de socios " << std::endl;
        std::cout << "3. Prestamos " << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "--------------------" << std::endl;

        std::cout << "Seleccione una opcion:";
        std::cin >> opcion;

        #ifdef _WIN32
                system("cls");
        #else
                system("clear");
        #endif

        switch (opcion)
        {
        case 0:
            break;
        case 1: menuLibros(BibliotecaUPE);
            break;
        case 2: menuSocios(BibliotecaUPE);
            break;
        case 3: menuPrestamos(BibliotecaUPE);
            break;
        default: std::cout << "Opcion incorrecta" << std::endl << std::endl;
        }

    } while (opcion != 0);
}

void menuLibros(biblioteca& BibliotecaUPE)
{
    int opcion;

    do
    {
        std::cout << "MENU DE LIBROS" << std::endl;
        std::cout << "--------------------" << std::endl;
        std::cout << "1. Alta libro" << std::endl;
        std::cout << "2. Modificar libro " << std::endl;
        std::cout << "3. Eliminar libro " << std::endl;
        std::cout << "4. Visualizacion y busqueda" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "--------------------" << std::endl;

        std::cout << "Seleccione una opcion:";
        std::cin >> opcion;

        #ifdef _WIN32
                system("cls");
        #else
                system("clear");
        #endif

        switch (opcion)
        {
        case 0: break;
        case 1: 
            BibliotecaUPE.cargarLibrosCSV();
            BibliotecaUPE.altaLibro();
            break;
        case 2:
            BibliotecaUPE.cargarLibrosCSV();
            BibliotecaUPE.modificarLibro();
            break;
        case 3:
            BibliotecaUPE.bajaLibro();
            break;
        default: std::cout << "Opcion incorrecta" << std::endl << std::endl;
        }
    } while (opcion != 0);
}

void menuSocios(biblioteca& BibliotecaUPE)
{
    int opcion;

    do
    {
        std::cout << "MENU DE SOCIOS" << std::endl;
        std::cout << "--------------------" << std::endl;
        std::cout << "1. Alta socio" << std::endl;
        std::cout << "2. Modificar socio " << std::endl;
        std::cout << "3. Eliminar socio " << std::endl;
        std::cout << "4. Visualizacion y busqueda" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "--------------------" << std::endl;

        std::cout << "Seleccione una opcion:";
        std::cin >> opcion;

        #ifdef _WIN32
                system("cls");
        #else
                system("clear");
        #endif

        switch(opcion)
        {
        case 0: break;
        case 1: BibliotecaUPE.altaSocio();
            break;
        case 2: 
            BibliotecaUPE.cargarSociosCSV(); //No se si esto deberia ir dentro de modificarSocio
            BibliotecaUPE.modificarSocio();
            break;
        case 3:
            BibliotecaUPE.bajaSocio();
            break;
        case 4:
                BibliotecaUPE.menuBusquedaSocios();

        default: std::cout << "Opcion incorrecta" << std::endl << std::endl;
        }


    } while (opcion != 0);

}

void menuPrestamos(biblioteca & BibliotecaUPE)
{
    int opcion;

    do
    {
        std::cout << "MENU DE PRESTAMOS" << std::endl;
        std::cout << "--------------------" << std::endl;
        std::cout << "1. Registrar prestamo" << std::endl;
        std::cout << "2. Registrar devolucion " << std::endl;
        std::cout << "3. Ver prestamos activos " << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cout << "--------------------" << std::endl;

        std::cout << "Seleccione una opcion:";
        std::cin >> opcion;

#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif

        switch (opcion)
        {
        case 0: break;
        case 1: //BibliotecaUPE.prestarLibro();
            break;
        default: std::cout << "Opcion incorrecta" << std::endl << std::endl;
        }
    } while (opcion != 0);

}