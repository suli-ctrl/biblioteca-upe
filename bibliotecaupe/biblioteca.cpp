#include <iostream>
#include <string>
#include <fstream>
#include <sstream> //para usar stringstream
#include "biblioteca.h"
#include "funciones.h"



biblioteca::biblioteca()
{
    cargarLibrosCSV();
    cargarSociosCSV();
    cargarPrestamosCSV();
}

biblioteca::~biblioteca()
{

}

// ----------------------------------------- Manejo de Archivos ------------------------------------------------------

void biblioteca::cargarSociosCSV()
{
    std::ifstream archivo("lista de socios.csv");
    if (!archivo.is_open()) 
    {
        std::cout << "No se pudo abrir el archivo de socios. Verifique que exista.\n";
        return;
    }

    std::string registro; //variable donde queda guardada la linea
    std::string dni_str, edad_str, apellido, genero, direccion, numTelefono, fechaNacimiento, email;

    listaSocios.clear(); //Limpia la lista cada vez que entra a cargarSociosCSV para que no se duplique el contenido en el CSV

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

    std::cout << "Cantidad de socios cargados: " << listaSocios.size() << "\n";
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
    std::ofstream archivo("lista de socios.csv" ,std::ios::out); //cambio ios::app por out porque duplicaba el contenido en el csv

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

/*void biblioteca::guardarLibrosCSV(const std::vector<libros>& listaLibros) {
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
}*/



void biblioteca::cargarPrestamosCSV()
{
    listaPrestamos.clear();

    std::ifstream archivo("lista de prestamos.csv");
    if (!archivo) 
    {
        std::cout << "Archivo de prestamos no encontrado. Se creara al guardar.\n";
        return;
    }

    std::string registro;
    while (std::getline(archivo, registro))
    {
        if (registro.empty()) continue;

        std::stringstream token(registro);

        std::string ubicacionLibro, dniSocio, fechaPrestamo, diasPrestamo, devuelto;

        std::getline(token, ubicacionLibro, ',');
        std::getline(token, dniSocio, ',');
        std::getline(token, fechaPrestamo, ',');
        std::getline(token, diasPrestamo, ',');
        std::getline(token, devuelto);

        int dni_socio = std::stoi(dniSocio);
        int dias = std::stoi(diasPrestamo);

        //busco libro
        libros* buscoLibro = nullptr;
        for (auto& libro : listaLibros)
        {
            if (libro.getUbicacion() == ubicacionLibro)
            {
                buscoLibro = &libro;
                break;
            }
        }

        //busco socio
        socios* buscoSocio = nullptr;
        for (auto& socio : listaSocios)
        {
            if (socio.getDNI() == dni_socio)
            {
                buscoSocio = &socio;
                break;
            }
        }

        if (buscoLibro && buscoSocio)
        {
            prestamos nuevoPrestamo(*buscoLibro, *buscoSocio, fechaPrestamo, dias);
            nuevoPrestamo.setDevuelto(devuelto == "true");

            if (!nuevoPrestamo.libroDevuelto())
            {
                buscoLibro->setPrestado(true);
            }
                
            listaPrestamos.push_back(nuevoPrestamo);
        }
        else
        {
            std::cout << "Error: libro o socio no encontrado para registro: " << registro << "\n";
        }
    }

    archivo.close();
}

void biblioteca::guardarPrestamosCSV()
{
    std::ofstream archivo("lista de prestamos.csv");

    if (!archivo) {
        std::cout << "Error al abrir el archivo para guardar los prestamos." << std::endl;
        return;
    }

    // esto va a guardar la info asi: ubi del libro,DNI,fecha del prestamo,dias que van del prestamo,devuelto
    for (const auto& prestamo : listaPrestamos)
    {
        archivo << prestamo.getLibroPrestado().getUbicacion() << ","
                << prestamo.getSocioPrestatario().getDNI() << ","
                << prestamo.getFechaPrestamo() << ","
                << prestamo.getDiasPrestamo() << ","
                << (prestamo.libroDevuelto() ? "true" : "false") << "\n"; // operador ternario para convertir un bool true o flase en texto explicito
    }

    archivo.close();

}

// ---------------------------------------------- Metodos de socios -------------------------------------------------

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
        break; // Termina la b�squeda del for porque ya hicimos el cambio
        }
    }

    if (!existe)
    {
        std::cout << "El cliente con DNI: " << DNI_modificar << " no existe en el archivo." << std::endl;
    }

}

// --------------------------------------------- Metodos de libros ---------------------------------------------------

void biblioteca::altaLibro()
{
    std::string nombre, area, subarea, autores, editorial, ubicacion, estado;
    int anioPublicacion;

    //std::cin.ignore(); // Limpia el buffer 
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

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

    std::cout << "Ingrese el a�o de publicacion: ";
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
        listaLibros = nuevaLista;
        guardarLibrosCSV();
        //guardarLibrosCSV(nuevaLista);
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
            std::cout << "6. A�o de publicacion: " << listaLibros[i].getAnioDePublicacion() << std::endl;
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
                std::cout << " Ingrese nuevo a�o de publicacion: "; //Deberia ser posible modificar esto? Supongo que si
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
            break; // Termina la b�squeda del for porque ya hicimos el cambio
        }
    }
    if (!existe)
    {
        std::cout << "El libro con ubicacion: " << Ubicacion_modificar << " no existe en el archivo." << std::endl;
    }
}


// --------------------------------------------- Metodos de prestamos -----------------------------------------------
void biblioteca::prestarLibro() 
{
    cargarLibrosCSV();
    cargarSociosCSV();

    std::string ubicacionLibro;
    int dniSocio;
    std::string fechaPrestamo;
    int diasPrestamo;

    std::cout << "Ubicacion del libro a prestar: ";
    std::getline(std::cin >> std::ws, ubicacionLibro);

    libros* libroPrestado = nullptr;
    for (libros& l : listaLibros)
    {
        if (l.getUbicacion() == ubicacionLibro && l.estaDisponible()) {
            libroPrestado = &l;
            break;
        }
    }

    if (!libroPrestado)
    {
        std::cout << "Libro no disponible o no encontrado.\n";
        return;
    }

    std::cout << "DNI del socio: ";
    std::cin >> dniSocio;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    socios* socioPrestador = nullptr;
    for (socios& s : listaSocios)
    {
        if (s.getDNI() == dniSocio) {
            socioPrestador = &s;
            break;
        }
    }

    if (!socioPrestador)
    {
        std::cout << "Socio no encontrado.\n";
        return;
    }

    std::cout << "Fecha del prestamo (dd/mm/aaaa): ";
    std::getline(std::cin, fechaPrestamo);

    std::cout << "Cantidad de dias de prestamo: ";
    std::cin >> diasPrestamo;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    prestamos nuevoPrestamo(*libroPrestado, *socioPrestador, fechaPrestamo, diasPrestamo);
    listaPrestamos.push_back(nuevoPrestamo);

    //marco el libro como no disponible
    libroPrestado->setPrestado(true);

    //guardo cambios en archivos CSV
    guardarPrestamosCSV();
    guardarLibrosCSV();

    std::cout << "Prestamo registrado correctamente.\n";
} 

void biblioteca::devolverLibro()
{
    std::string ubicacionLibro;
    std::cout << "Ubicacion del libro a devolver: ";
    std::getline(std::cin >> std::ws, ubicacionLibro);  //lee texto completo con espacios y limpia buffer

    for (prestamos& prestamo : listaPrestamos)
    {
        if (prestamo.getLibro().getUbicacion() == ubicacionLibro && !prestamo.libroDevuelto())
        {
            prestamo.setDevuelto(true);//lo marco como devuelto

       
            for (libros& libro : listaLibros) //busco el libro en la lista y lo marco disponible
            {
                if (libro.getUbicacion() == ubicacionLibro)
                {
                    libro.setPrestado(false);
                    break;
                }
            }

            std::cout << "Libro devuelto correctamente.\n";

            guardarPrestamosCSV();
            guardarLibrosCSV();
            return;
        }
    }

    std::cout << "No se encontro un prestamo activo para ese libro.\n";
}

void biblioteca::mostrarPrestamosActivos()
{
    bool hayActivos = false; //uso una flag

    for (const prestamos& p : listaPrestamos) 
    {
        if (!p.libroDevuelto()) //si el libro esta prestado
        {
            p.mostrar(); //muestro los datos

            if (p.estaVencido()) 
            {
                int atraso = -p.diasHastaVencimiento();
                std::cout << "AVISO: Vencido hace " << atraso << " dias.\n";
            }
            else {
                std::cout << "Faltan " << p.diasHastaVencimiento() << " dias para el vencimiento.\n";
            }

            std::cout << "-----------------------------\n";
            hayActivos = true;
        }
    }

    if (!hayActivos) {
        std::cout << "No hay prestamos activos.\n";
    }
}


// ---------------------------- METODOS DE VISUALIZACION Y BUSQUEDA PARA SOCIOS -------------------------------------

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

        std::string entrada;
        std::getline(std::cin, entrada);
        std::stringstream ss(entrada);

        if (!(ss >> opcion)) 
        {
            std::cout << "Entrada invalida, por favor ingrese un numero.\n";
            continue;
        }

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
    std::string entrada;
    int dniBuscado { 0 };
    std::cout << "Ingrese el DNI buscado: \n";
    std::getline(std::cin, entrada);
    std::stringstream ss(entrada);
    if (!(ss >> dniBuscado)) 
    {
        std::cout << "Entrada inv�lida para DNI.\n";
        return;
    }

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

// --------------------------------- METODOS DE VISUALIZACION Y BUSQUEDA PARA LIBROS --------------------------------

void biblioteca::menuBusquedaLibros()
{
    cargarLibrosCSV();
    int opcion = 0;

    do {
        std::cout << "\n------ BUSQUEDA DE LIBROS ------\n";
        std::cout << "1. Buscar por Nombre\n";
        std::cout << "2. Buscar por Autor\n";
        std::cout << "3. Buscar por A�o\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opcion: ";

        std::string entrada;
        std::getline(std::cin, entrada);
        std::stringstream ss(entrada);

        if (!(ss >> opcion)) 
        {
            std::cout << "Entrada inv�lida, por favor ingrese un n�mero.\n";
            continue;
        }

        switch (opcion) {
        case 1: buscoLibroPorNombre(); break;
        case 2: buscoLibroPorAutor(); break;
        case 3: buscoLibroPorAnio(); break;
        case 4: std::cout << "Saliendo del menu de busqueda.\n"; break;
        default: std::cout << "Opcion no valida, intente de nuevo.\n";
        }

    } while (opcion != 4);
}

void biblioteca::buscoLibroPorNombre() 
{
    std::string nombreBuscado;
    std::cout << "Ingrese el nombre del libro: ";
    std::getline(std::cin, nombreBuscado);

    bool encontrado = false;

    for (const libros& l : listaLibros) {
        if (l.getNombre() == nombreBuscado) {
            std::cout << "\n Libro encontrado:\n";
            l.mostrar();
            encontrado = true;
        }
    }

    if (!encontrado) {
        std::cout << "No se encontr� ning�n libro con ese nombre.\n";
    }
}

void biblioteca::buscoLibroPorAutor() 
{
    std::string autorBuscado;
    std::cout << "Ingrese el nombre del autor: ";
    std::getline(std::cin, autorBuscado);

    bool encontrado = false;

    for (const libros& l : listaLibros) {
        if (l.getAutores().find(autorBuscado) != std::string::npos) {
            std::cout << "\n Libro encontrado:\n";
            l.mostrar();
            std::cout << "\n--------------------------\n";
            encontrado = true;
        }
    }

    if (!encontrado) {
        std::cout << "No se encontro ningun libro con ese autor.\n";
    }
}

void biblioteca::buscoLibroPorAnio()
{
    std::string entrada;
    int anioBuscado{ 0 };
    std::cout << "Ingrese el a�o buscado: \n";
    std::getline(std::cin, entrada);
    std::stringstream ss(entrada);
    if (!(ss >> anioBuscado))
    {
        std::cout << "Entrada inv�lida para a�o.\n";
        return;
    }

    bool encontrado = false;

    for (const libros& l : listaLibros)
    {
        if (l.getAnioDePublicacion() == anioBuscado)
        {
            std::cout << "\n Libro encontrado!: \n";
            l.mostrar();
            encontrado = true;
        }
    }

    if (!encontrado)
    {
        std::cout << "No se encontro ningun Libro con ese a�o\n";

    }
}


