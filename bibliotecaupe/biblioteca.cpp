#include <iostream>
#include <fstream>
#include <sstream> //para usar stringstream
#include "biblioteca.h"



biblioteca::biblioteca()
{

}

biblioteca::~biblioteca()
{

}

// Manejo de Archivos

void biblioteca::cargarSociosCSV()
{
    listaSocios.clear(); //Limpia la lista cada vez que entra a cargarSociosCSV para que no se duplique el contenido en el CSV

    std::ifstream archivo("lista de socios.csv");
    std::string registro; //variable donde queda guardada la linea
    std::string dni_str, edad_str, apellido, genero, direccion, numTelefono, fechaNacimiento, email;

    while (getline(archivo, registro))
    {
        if (registro.empty()) continue;

        std::stringstream token(registro);

        getline(token, apellido, ',');
        getline(token, dni_str, ',');
        getline(token, genero, ',');
        getline(token, direccion, ',');
        getline(token, numTelefono, ',');
        getline(token, edad_str, ',');
        getline(token, fechaNacimiento, ',');
        getline(token, email, ',');

        int dni = std::stoi(dni_str); //convierte el string a int
        int edad = std::stoi(edad_str);

        socios s(dni, edad, apellido, genero, direccion, numTelefono, fechaNacimiento, email);
        listaSocios.push_back(s);
    }
}

void biblioteca::cargarLibrosCSV()
{
    listaLibros.clear();

    std::ifstream archivo("lista de libros.csv");
    std::string registro; //variable donde queda guardada la linea
    std::string nombre, area, subarea, autores, editorial, anio_str, ubicacion, estado;

    while (getline(archivo, registro))
    {
        if (registro.empty()) continue; //esto que era

        std::stringstream token(registro);

        getline(token, nombre, ',');
        getline(token, area, ',');
        getline(token, subarea, ',');
        getline(token, autores, ',');
        getline(token, editorial, ',');
        getline(token, anio_str, ',');
        getline(token, ubicacion, ',');
        getline(token, estado);

        int anioPublicacion = std::stoi(anio_str); //convierte el string a int

        libros l(nombre, area, subarea, autores, editorial, anioPublicacion, ubicacion, estado);
        listaLibros.push_back(l);
    }
}


void biblioteca::guardarSociosCSV()
{
    std::ofstream archivo("lista de socios.csv"); 

    if (!archivo) {
        std::cout << "Error al abrir el archivo para guardar los socios." << std::endl;
        return;
    }
    
    for (int i = 0; i < listaSocios.size(); i++)
    {
        archivo << listaSocios[i].getApellido() << ","
                << listaSocios[i].getDNI() << "," 
                << listaSocios[i].getGenero() << ","
                << listaSocios[i].getDireccion() << ","
                << listaSocios[i].getTelefono() << ","
                << listaSocios[i].getEdad() << ","
                << listaSocios[i].getFechaNacimiento() << ","
                << listaSocios[i].getEmail() << "\n";
    }
    archivo.close();
}

void biblioteca::guardarLibrosCSV()
{
    std::ofstream archivo("lista de libros.csv");

    if (!archivo) {
        std::cout << "Error al abrir el archivo para guardar los libros." << std::endl;
        return;
    }

    for (int i = 0; i < listaLibros.size(); i++)
    {
        archivo << listaLibros[i].getNombre() << ","
                << listaLibros[i].getArea() << ","
                << listaLibros[i].getSubArea() << ","
                << listaLibros[i].getAutores() << ","
                << listaLibros[i].getEditorial() << ","
                << listaLibros[i].getAnioDePublicacion() << ","
                << listaLibros[i].getUbicacion() << ","
                << listaLibros[i].getEstado() << "\n";
    }
    archivo.close();
}


void biblioteca::altaSocio()
{

    
}

void biblioteca::bajaSocio()
{

}


void biblioteca::modificarSocio()
{
    std::string DNI_modificar;
    std::cout << "Ingrese el DNI del socio a modificar:";
    std::cin >> DNI_modificar;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //fflush de c++

    bool existe = false; //encontrado

    int opcion = 0;
    std::string nuevoValor;
    int nuevaEdad = 0;


    for (int i = 0; i < listaSocios.size(); i++)
    {
        std::string dni_socio = std::to_string(listaSocios[i].getDNI());

        if (dni_socio.compare(DNI_modificar) == 0) //similar a strcmp
        {
            existe = true;

            std::cout << "Datos actuales del cliente:" << std::endl;
            std::cout << "DNI: " << listaSocios[i].getDNI() << std::endl;
            std::cout << "1. Apellido: " << listaSocios[i].getApellido() << std::endl;
            std::cout << "2. Edad: " << listaSocios[i].getEdad() << std::endl;
            std::cout << "3. Genero: " << listaSocios[i].getGenero() << std::endl;
            std::cout << "4. Direccion: " << listaSocios[i].getDireccion() << std::endl;
            std::cout << "5. Fecha de nacimiento: " << listaSocios[i].getFechaNacimiento() << std::endl;
            std::cout << "6. Email: " << listaSocios[i].getEmail() << std::endl;
            std::cout << "0. Ninguno" << std::endl << std::endl;
            
            do
            {
                std::cout << "Seleccione el campo a modificar: ";
                std::cin >> opcion;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //fflush

            } while (opcion < 0 || opcion > 6);

            switch (opcion)
            {
            case 1: 
                std::cout << " Ingrese el nuevo apellido: ";
                getline(std::cin, nuevoValor);
                listaSocios[i].setApellido(nuevoValor);
                break;
            case 2: 
                std::cout << " Ingrese nueva edad: ";
                std::cin >> nuevaEdad;
                listaSocios[i].setEdad(nuevaEdad);
                break;
            case 3: 
                std::cout << " Ingrese nuevo genero: ";
                getline(std::cin, nuevoValor);
                listaSocios[i].setGenero(nuevoValor);
                break;
            case 4: 
                std::cout << " Ingrese la nueva direccion: ";
                getline(std::cin, nuevoValor);
                listaSocios[i].setDireccion(nuevoValor);
                break;
            case 5: 
                std::cout << " Ingrese nueva fecha de nacimieto: ";
                getline(std::cin, nuevoValor);
                listaSocios[i].setFechaNacimiento(nuevoValor);
                break;
            case 6: 
                std::cout << " Ingrese el nuevo email: ";
                getline(std::cin, nuevoValor);
                listaSocios[i].setEmail(nuevoValor);
                break;
            case 0:
                break;
            }
            if (opcion != 0) std::cout << "Dato modificado con exito." << std::endl;
        guardarSociosCSV(); // Guarda el cambio en el archivo
        break; // Termina la búsqueda del for porque ya hicimos el cambio
        }
    }

    if (!existe)
    {
        std::cout << "El cliente con DNI: " << DNI_modificar << " no existe en el archivo." << std::endl;
    }

}


void biblioteca::altaLibro()
{
}

void biblioteca::bajaLibro()
{
}

void biblioteca::modificarLibro()
{
    std::string Ubicacion_modificar;
    std::cout << "Ingrese la ubicacion del libro a modificar[Ej: Est1-F1]:";
    std::cin >> Ubicacion_modificar;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //fflush de c++

    bool existe = false; //encontrado

    int opcion = 0;
    std::string nuevoValor;
    int nuevoAnio = 0;


    for (int i = 0; i < listaLibros.size(); i++)
    {
        if (listaLibros[i].getUbicacion().compare(Ubicacion_modificar) == 0) //similar a strcmp
        {
            existe = true;

            std::cout << "Datos actuales del libro:" << std::endl;
            std::cout << "Ubicacion: " << listaLibros[i].getUbicacion() << std::endl;
            std::cout << "1. Nombre: " << listaLibros[i].getNombre() << std::endl;
            std::cout << "2. Area: " << listaLibros[i].getArea() << std::endl;
            std::cout << "3. Subarea: " << listaLibros[i].getSubArea() << std::endl;
            std::cout << "4. Autores: " << listaLibros[i].getAutores() << std::endl;
            std::cout << "5. Editorial: " << listaLibros[i].getEditorial() << std::endl;
            std::cout << "6. Año de publicacion: " << listaLibros[i].getAnioDePublicacion() << std::endl;
            std::cout << "7. Estado: " << listaLibros[i].getEstado() << std::endl;
            std::cout << "0. Ninguno" << std::endl << std::endl;

            do
            {
                std::cout << "Seleccione el campo a modificar: ";
                std::cin >> opcion;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //fflush

            } while (opcion < 0 || opcion > 7);

            switch (opcion)
            {
            case 1:
                std::cout << " Ingrese el nuevo nombre: ";
                getline(std::cin, nuevoValor);
                listaLibros[i].setNombre(nuevoValor);
                break;
            case 2:
                std::cout << " Ingrese nueva area: ";
                getline(std::cin, nuevoValor);
                listaLibros[i].setArea(nuevoValor);
                break;
            case 3:
                std::cout << " Ingrese nueva subarea: ";
                getline(std::cin, nuevoValor);
                listaLibros[i].setSubArea(nuevoValor);
                break;
            case 4:
                std::cout << " Ingrese nuevos autores: ";
                getline(std::cin, nuevoValor);
                listaLibros[i].setAutores(nuevoValor); //No se si funciona con varios autores
                break;
            case 5:
                std::cout << " Ingrese nueva editorial: ";
                getline(std::cin, nuevoValor);
                listaLibros[i].setEditorial(nuevoValor);
                break;
            case 6:
                std::cout << " Ingrese nuevo año de publicacion: "; //Deberia ser posible modificar esto? Supongo que si
                std::cin >> nuevoAnio;
                listaLibros[i].setAnioDePublicacion(nuevoAnio);
                break;
            case 7:
                std::cout << " Ingrese nuevo estado: ";
                getline(std::cin, nuevoValor);
                listaLibros[i].setEstado(nuevoValor);
                break;
            case 0: break;
            }
            if (opcion != 0) std::cout << "Dato modificado con exito." << std::endl;
            guardarLibrosCSV(); // Guarda el cambio en el archivo
            break; // Termina la búsqueda del for porque ya hicimos el cambio
        }
    }
    if (!existe)
    {
        std::cout << "El libro con ubicacion: " << Ubicacion_modificar << " no existe en el archivo." << std::endl;
    }
}

/*



void biblioteca::prestarLibro()
{
    if (libros::prestado) { //creo que esto hay que hacerlo con punteros pq asi no compila ya que es un miembro privado
        std::cout << "El libro '" << nombre << "' ya esta prestado." << std::endl;
    }
    else {
        prestado = true;
        std::cout << "El libro '" << nombre << "' fue prestado." << std::endl;
    }
}


void biblioteca::devolucionLibro()
{
    if (!prestado) {
        std::cout << "El libro '" << nombre << "' no estaba prestado.";
    }
    else {
        prestado = false;
        std::cout << "El libro '" << nombre << "' fue devuelto." << '\n';
    }
}
*/ 