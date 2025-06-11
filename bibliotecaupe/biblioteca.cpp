#include <iostream>
#include <string>
#include <fstream>
#include <sstream> //para usar stringstream
#include "biblioteca.h"
#include "funciones.h"



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

void biblioteca::guardarLibrosCSV(const std::vector<libros>& listaLibros) {
    // Sobrecarga, recibe un vector por referencia como parametro

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
    int dni{pedirDni()};
    int edad{pedirEdad()};
    std::string apellido{ pedirApellido() };
    std::string genero{ pedirGenero() };
    std::string email{ pedirEmail() };
    std::string fechaNacimiento{ pedirFechaDeNacimiento() };
    std::string telefono{ pedirNumTelefono() };
    std::string direccion{ pedirDireccion() };
  
    socios nuevoSocio(dni, edad, apellido, genero, direccion, telefono, fechaNacimiento, email);

    listaSocios.push_back(nuevoSocio);
    guardarSociosCSV();

    std::cout << "El socio fue dado de alta correctamente! \n";
    
}

void biblioteca::bajaSocio()
{
    cargarSociosCSV();
    std::string dniSocio;
    bool existe = false;
    std::vector<socios> nuevaLista;

    std::cout << "Ingrese el DNI del socio que desea eliminar: \n";
    std::cin >> dniSocio;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    bool esNumerico = true;
    for (char c : dniSocio)
    {
        if (!isdigit(c))
        {
            esNumerico = false;
            break;
        }
    }

    if (!esNumerico || dniSocio.length() != 8)
    {
        std::cout << "Error: El DNI debe contener solo 8 digitos numericos. \n";
        return; 
    }

    for (int i = 0; i < listaSocios.size(); i++)
    {
        std::string dniActual = std::to_string(listaSocios[i].getDNI());

        if (dniActual == dniSocio)
        {
            existe = true;
            continue; 
        }

        nuevaLista.push_back(listaSocios[i]);
    }

    if (existe)
    {
        listaSocios = nuevaLista; 
        guardarSociosCSV();      
        std::cout << "Socio eliminado correctamente. \n";
    }
    else
    {
        std::cout << "No se encontro ningun socio con el DNI: " << dniSocio << '\n';
    }
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
    std::string nombre, area, subarea, autores, editorial, ubicacion, estado;
    int anioPublicacion;

    std::cin.ignore(); // Limpia el buffer 

    std::cout << "Ingrese el nombre del libro: ";
    std::getline(std::cin, nombre);

    std::cout << "Ingrese el area: ";
    std::getline(std::cin, area);

    std::cout << "Ingrese la subarea: ";
    std::getline(std::cin, subarea);

    std::cout << "Ingrese los autores: ";
    std::getline(std::cin, autores);

    std::cout << "Ingrese la editorial: ";
    std::getline(std::cin, editorial);

    std::cout << "Ingrese el año de publicacion: ";
    std::cin >> anioPublicacion;
    std::cin.ignore(); 

    std::cout << "Ingrese la ubicacion: ";
    std::getline(std::cin, ubicacion);

    std::cout << "Ingrese el estado: ";
    std::getline(std::cin, estado);

    libros nuevoLibro(nombre, area, subarea, autores, editorial, anioPublicacion, ubicacion, estado);
    listaLibros.push_back(nuevoLibro);

    guardarLibrosCSV();

    std::cout << "Libro agregado exitosamente." << std::endl << std::endl;
}

void biblioteca::bajaLibro()
{
    cargarLibrosCSV(); //tengo los libros en listaLibros

    std::string ubicacion_eliminar;
    bool existe = false;

    std::cout << "Ingrese la ubicacion del libro a eliminar[Ej: Est1-F1]:";
    std::cin >> ubicacion_eliminar;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::vector<libros> nuevaLista;

    for (int i = 0; i < listaLibros.size(); i++)
    {
        if (listaLibros[i].getUbicacion().compare(ubicacion_eliminar) == 0)
        {
            existe = true;
            continue; //Lo salta, no lo copia al nuevo vector
        }
        nuevaLista.push_back(listaLibros[i]); //Agrega la linea a la nueva lista
    }

    if (existe)
    {
        guardarLibrosCSV(nuevaLista);
        std::cout << "Libro eliminado correctamente \n";
    }
    else {
        std::cout << "No se encontro ningun libro en la ubicacion: " << ubicacion_eliminar  << std::endl;
    }
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

// METODOS DE VISUALIZACION Y BUSQUEDA PARA SOCIOS

void biblioteca::menuBusquedaSocios()
{
    cargarSociosCSV();
    int opcion{ 0 };

    do {
        std::cout << "\n------ BUSQUEDA DE SOCIOS ------\n";
        std::cout << "1. Buscar por DNI\n";
        std::cout << "2. Buscar por Apellido\n";
        std::cout << "3. Buscar por Telefono\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1: buscoSocioporDni(); break;
        case 2: buscoSocioPorApellido(); break;
        case 3: buscoSocioPorTelefono(); break;
        case 4: std::cout << "Saliendo del menu de busqueda.\n"; break;
        default: std::cout << "Opcion no valida. Intente de nuevo.\n";
        }

    } while (opcion != 4);

}

void biblioteca::buscoSocioporDni()
{
    int dniBuscado { 0 };
    std::cout << "Ingrese el DNI buscado: \n";
    std::cin >> dniBuscado;

    bool encontrado = false;

    for (const socios& s : listaSocios)
    {
        if (s.getDNI() == dniBuscado)
        {
            std::cout << "\n Socio encontrado!: \n";
            s.mostrar();
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
    {
        std::cout << "No se encontro ningun socio con ese DNI\n";

    }
}

void biblioteca::buscoSocioPorApellido()
{
    std::string socioBuscado;
    std::cout << "Ingrese el apellido buscado: \n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, socioBuscado);

    bool encontrado = false;

    for (const socios& s : listaSocios)
    {
        if (s.getApellido() == socioBuscado)
        {
            std::cout << "\n Socio encontrado!: \n";
            s.mostrar();
            std::cout << "\n --------------------------\n";
            encontrado = true;
        }
    }

    if (!encontrado)
    {
        std::cout << "No se encontro ningun socio con ese apellido \n";

    }
}

void biblioteca::buscoSocioPorTelefono()
{
    std::string telBuscado;
    std::cout << "Ingrese el telefono buscado: \n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, telBuscado);

    bool encontrado = false;

    for (const socios& s : listaSocios)
    {
        if (s.getApellido() == telBuscado)
        {
            std::cout << "\n Socio encontrado!: \n";
            s.mostrar();
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
    {
        std::cout << "No se encontro ningun socio con ese numero de telefono \n";

    }
}




