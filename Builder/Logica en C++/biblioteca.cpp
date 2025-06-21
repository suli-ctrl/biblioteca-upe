#include <iostream>
#include <string>
#include <fstream>
#include <sstream> //para usar stringstream
#include "biblioteca.h"
#include "funciones.h"
#include "prestamos.h"
#include <SysUtils.hpp> // Necesario para FormatDateTime



biblioteca::biblioteca()
{

}

biblioteca::~biblioteca()
{

}

//------------------------------------------ Getters -------------------------------------------------
const std::vector<libros>& biblioteca::getListaLibros() const {
	return listaLibros;
}

const std::vector<socios>& biblioteca::getListaSocios() const {
	return listaSocios;
}

const std::vector<prestamos>& biblioteca::getListaPrestamos() const
{
	return listaPrestamos;
}

std::vector<libros>& biblioteca::getListaLibrosModificable()
{
    return listaLibros;
}

// ----------------------------------------- Manejo de Archivos ------------------------------------------------------

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

	std::cout << "Cantidad de socios cargados: " << listaSocios.size() << "\n";
}

void biblioteca::cargarLibrosCSV()
{
    listaLibros.clear();

	std::ifstream archivo("lista de libros.csv");
	std::string registro; //variable donde queda guardada la linea
	std::string nombre, area, subarea, autores, editorial, anio_str, ubicacion, estado, codigoDeBarras, prestadoStr;

    if (!archivo.is_open()) {
    ShowMessage("No se pudo abrir el archivo CSV.");
    return;
	}



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
		getline(token, estado, ',');
		getline(token, codigoDeBarras, ',');
		getline(token, prestadoStr);

		int anioPublicacion = std::stoi(anio_str); //convierte el string a int
		bool prestado = (prestadoStr == "true");

		libros l(nombre, area, subarea, autores, editorial, anioPublicacion, ubicacion, estado, codigoDeBarras);
        l.setPrestado(prestado);
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
				<< listaLibros[i].getEstado() << ","
				<< listaLibros[i].getCodigoBarras() << ","
				<< (listaLibros[i].getPrestado() ? "true" : "false") << "\n";
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

	std::ifstream archivo("lista de prestamos.csv");

	std::string tituloLibro, ubicacionLibro, nombreSocio, dniSocio, fechaPrestamo, diasPrestamo, fechaVencimiento, devuelto;

	std::string registro; //variable donde queda guardada la linea

	while (getline(archivo, registro))
	{
		if (registro.empty()) continue;

		std::stringstream token(registro);

		std::getline(token, tituloLibro, ',');
		std::getline(token, ubicacionLibro, ',');
		std::getline(token, nombreSocio, ',');
		std::getline(token, dniSocio, ',');
		std::getline(token, fechaPrestamo, ',');
		std::getline(token, diasPrestamo, ',');
		std::getline(token, fechaVencimiento, ',');
		std::getline(token, devuelto, ',');

		int dni_socio = std::stoi(dniSocio); //convierte el string a int
		int dias = std::stoi(diasPrestamo);

  
        //Busco el libro prestado en listaLibros
		libros* buscoLibro = nullptr; //puntero nulo llamado buscoLibro
		for (int i = 0;i < listaLibros.size(); i++) //recorro la lista buscando el libro a prestar
        {
			if (listaLibros[i].getNombre() == tituloLibro)
            {
				buscoLibro = &listaLibros[i];
				break; //termino el ciclo for
            }
        }

        //Busco el socio prestatario en listaSocios
        socios* buscoSocio = nullptr;
		for (int i = 0; i < listaSocios.size(); i++)
        {
			if (listaSocios[i].getDNI() == dni_socio)
			{
                buscoSocio = &listaSocios[i];
                break; //salgo del for
			}
		}

		if (buscoLibro && buscoSocio)
		{
			//int dias = std::stoi(diasPrestamo); //convierte string a int
			prestamos nuevoPrestamo(*buscoLibro, *buscoSocio, fechaPrestamo, dias);
            nuevoPrestamo.setFechaVencimiento(fechaVencimiento);
            nuevoPrestamo.setDevuelto(devuelto == "true"); //Lo marca como devuelto
			listaPrestamos.push_back(nuevoPrestamo);
		}
		else
		{
			//Libro o socio no encontrado
		}


	}
	archivo.close();


}

void biblioteca::guardarPrestamosCSV()
{
    cargarPrestamosCSV();

	std::ofstream archivo("lista de prestamos.csv");

	if (!archivo) {
		std::cout << "Error al abrir el archivo para guardar los prestamos." << std::endl;
		return;
	}

	for (int i = 0; i < listaPrestamos.size(); i++)
	{
		archivo << listaPrestamos[i].getLibroPrestado().getNombre() << ","
			<< listaPrestamos[i].getLibroPrestado().getUbicacion() << ","
			<< listaPrestamos[i].getSocioPrestatario().getApellido() << ","
			<< listaPrestamos[i].getSocioPrestatario().getDNI() << ","
			<< listaPrestamos[i].getFechaPrestamo() << ","
			<< listaPrestamos[i].getDiasPrestamo() << ","
			<< listaPrestamos[i].getFechaVencimiento() << ","
			<< (listaPrestamos[i].libroDevuelto() ? "true" : "false") << "\n"; // operador ternario para convertir un bool true o flase en texto explicito
	}
	archivo.close();
}

// ---------------------------------------------- Metodos de socios -------------------------------------------------

void biblioteca::altaSocio(int dni, int edad, String apellido, String genero, String direccion, String telefono, String fechaNacimiento, String email)
{
	/*int dni{pedirDni()};
	int edad{pedirEdad()};
	std::string apellido{ pedirApellido() };
	std::string genero{ pedirGenero() };
	std::string email{ pedirEmail() };
	std::string fechaNacimiento{ pedirFechaDeNacimiento() };
    std::string telefono{ pedirNumTelefono() };
	std::string direccion{ pedirDireccion() };   */
	String fecha = FormatDateTime("dd/mm/yyyy", fechaNacimiento);
	std::string fechaNacimientoStr = ConvertirStdString(fecha);

	cargarSociosCSV();

	socios nuevoSocio(dni, edad, ConvertirStdString(apellido), ConvertirStdString(genero), ConvertirStdString(direccion), ConvertirStdString(telefono), fechaNacimientoStr, ConvertirStdString(email));
	listaSocios.push_back(nuevoSocio);

    guardarSociosCSV();

    
}

void biblioteca::bajaSocio(String socioBaja)
{
	cargarSociosCSV();

	std::string socio_eliminar = ConvertirStdString(socioBaja);
	bool existe = false;

	std::vector<socios> nuevaLista;



	//Validaciones (Comentadas, ver mas tarde)
	/*bool esNumerico = true;
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
	*/

	for (int i = 0; i < listaSocios.size(); i++)
	{
		if (std::to_string(listaSocios[i].getDNI()) == socio_eliminar) //Compara el DNI ingresado con cada DNI de la lista hasta encontrarlo
		{
            existe = true;
			continue; //No lo copia al nuevo vector
		}

		nuevaLista.push_back(listaSocios[i]);  //Agrega a la nueva lista
	}

    if (existe)
    {
		listaSocios = nuevaLista;
		guardarSociosCSV();
		ShowMessage( "Socio eliminado correctamente");
	}
    else
    {
		ShowMessage("El socio no se ha encontrado");
    }
}

/*void biblioteca::modificarSocio()
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

}  */

// --------------------------------------------- Metodos de libros ---------------------------------------------------

void biblioteca::altaLibro(String nombre, String area, String subarea, String autores, String editorial, int anioPublicacion, String ubicacion, String estado)
{
	cargarLibrosCSV();

	libros nuevoLibro(ConvertirStdString(nombre), ConvertirStdString(area), ConvertirStdString(subarea), ConvertirStdString(autores), ConvertirStdString(editorial), anioPublicacion, ConvertirStdString(ubicacion), ConvertirStdString(estado));
	listaLibros.push_back(nuevoLibro);

	guardarLibrosCSV();

}


void biblioteca::bajaLibro(String libroBaja)
{
	cargarLibrosCSV(); //tengo los libros en listaLibros

	std::string libro_eliminar = ConvertirStdString(libroBaja);
	bool existe = false;

	std::vector<libros> nuevaLista;

	for (int i = 0; i < listaLibros.size(); i++)
	{
		if (listaLibros[i].getNombre().compare(libro_eliminar) == 0)
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
		ShowMessage("Libro eliminado exitosamente");
	}
	else {
		ShowMessage("El libro no se ha encontrado");
	}
}

/*
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
} */


// --------------------------------------------- Metodos de prestamos -----------------------------------------------

void biblioteca::prestarLibro(std::string nombreLibro, int dniSocio, std::string fechaPrestamo, int diasPrestamo)
{
	cargarLibrosCSV();
	cargarSociosCSV();

	libros* libroPrestado = nullptr;


	for (int i = 0; i < listaLibros.size(); i++)
    {
		if (listaLibros[i].getNombre() == nombreLibro
			&& listaLibros[i].estaDisponible())
		{
			libroPrestado = &listaLibros[i];
            break;
        }
	}

	if (!libroPrestado) {
		//ShowMessage("Libro no encontrado o no disponible!");
		ShowMessage(("Libro '" + nombreLibro + "' no disponible o no encontrado").c_str());
		return;
	}

	socios* socioPrestatario = nullptr;

	for (int i = 0; i < listaSocios.size(); i++)
	{
		if (listaSocios[i].getDNI() == dniSocio)
		{
			socioPrestatario = &listaSocios[i];
			break;
		}
	}

	if (!socioPrestatario) {
		ShowMessage("Libro no encontrado o no disponible!");
		return;
	}


	prestamos nuevoPrestamo(*libroPrestado, *socioPrestatario, fechaPrestamo, diasPrestamo);

	std::string fechaVencimiento = nuevoPrestamo.calcularFechaVencimiento(fechaPrestamo, diasPrestamo);
	nuevoPrestamo.setFechaVencimiento(fechaVencimiento);

	listaPrestamos.push_back(nuevoPrestamo);

	libroPrestado->setPrestado(true);

	guardarPrestamosCSV();
	guardarLibrosCSV(); //Guarda el valor de prestado a true

    ShowMessage("Prestamo agregado exitosamente");
}

/*void biblioteca::prestarLibro()
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
}  */

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


// ---------------------------- METODOS DE VISUALIZACION Y BUSQUEDA PARA SOCIOS -------------------------------------
 /*
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

        if (!(ss >> opcion)) {
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
        std::cout << "Entrada inválida para DNI.\n";
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
        std::cout << "3. Buscar por Año\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opcion: ";

        std::string entrada;
        std::getline(std::cin, entrada);
        std::stringstream ss(entrada);

        if (!(ss >> opcion)) 
        {
            std::cout << "Entrada inválida, por favor ingrese un número.\n";
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
        std::cout << "No se encontró ningún libro con ese nombre.\n";
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
    std::cout << "Ingrese el año buscado: \n";
    std::getline(std::cin, entrada);
    std::stringstream ss(entrada);
    if (!(ss >> anioBuscado))
    {
        std::cout << "Entrada inválida para año.\n";
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
        std::cout << "No se encontro ningun Libro con ese año\n";

    }
}

	   */
