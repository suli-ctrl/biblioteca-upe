#include <iostream>
#include <fstream>
#include <sstream>
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
        std::cout << "4. Salir" << std::endl;
        std::cout << "--------------------" << std::endl;

        std::cout << "Seleccione una opcion:";
        std::string entrada;
        std::getline(std::cin, entrada);
        std::stringstream ss(entrada);

        if (!(ss >> opcion)) 
        {
            std::cout << "Entrada invalida, por favor ingrese un numero.\n";
            continue;
        }

        #ifdef _WIN32
                system("cls");
        #else
                system("clear");
        #endif

        switch (opcion)
        {
        case 1: menuLibros(BibliotecaUPE);
            break;
        case 2: menuSocios(BibliotecaUPE);
            break;
        case 3: menuPrestamos(BibliotecaUPE);
            break;
        case 4:
            break;
        default: std::cout << "Opcion incorrecta" << std::endl << std::endl;
        }

    } while (opcion != 4);
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
        std::string entrada;
        std::getline(std::cin, entrada);
        std::stringstream ss(entrada);

        if (!(ss >> opcion))
        {
            std::cout << "Entrada invalida, por favor ingrese un numero.\n";
            continue;
        }

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
        case 4:
            BibliotecaUPE.menuBusquedaLibros();
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
        
        std::string entrada;
        std::getline(std::cin, entrada);

        entrada.erase(0, entrada.find_first_not_of(" \t\r\n"));
        entrada.erase(entrada.find_last_not_of(" \t\r\n") + 1);

        std::stringstream ss(entrada);

        if (!(ss >> opcion) || !(ss.eof())) 
        {
            std::cout << "Entrada invalida, por favor ingrese un numero valido.\n";
            continue;
        }

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
            break;

        default: std::cout << "Opcion incorrecta" << std::endl << std::endl;
            break;
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
        std::cout << "4. Salir" << std::endl;
        std::cout << "--------------------" << std::endl;

        std::string entrada;
        std::getline(std::cin, entrada);
        std::stringstream ss(entrada);

        if (!(ss >> opcion))
        {
            std::cout << "Entrada inválida, por favor ingrese un número.\n";
            continue;
        }

#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif

        switch (opcion)
        {
        case 1: BibliotecaUPE.prestarLibro();
            break;
        case 2: BibliotecaUPE.devolverLibro();
            break;
        case 3: BibliotecaUPE.mostrarPrestamosActivos();
            break;
        case 4:
            break;
        default: std::cout << "Opcion incorrecta" << std::endl << std::endl;
        }
    } while (opcion != 4);

}