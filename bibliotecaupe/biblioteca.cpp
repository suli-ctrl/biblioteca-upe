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
            std::cout << "4. Direccion " << listaSocios[i].getDireccion() << std::endl;
            std::cout << "5. Fecha de nacimiento: " << listaSocios[i].getFechaNacimiento() << std::endl;
            std::cout << "6. Email " << listaSocios[i].getEmail() << std::endl;
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
            default: std::cout << "Opcion incorrecta" << std::endl << std::endl;
            }
        std::cout << "Dato modificado con exito." << std::endl;
        guardarSociosCSV(); // Guarda el cambio en el archivo
        break; // Termina la búsqueda del for porque ya hicimos el cambio
        }
    }

    if (!existe)
    {
        std::cout << "El cliente con DNI: " << DNI_modificar << " no existe en el archivo." << std::endl;
    }

}

/* 
void biblioteca::altaLibro()
{
}

void biblioteca::bajaLibro()
{
}

void biblioteca::modifLibro()
{
}





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