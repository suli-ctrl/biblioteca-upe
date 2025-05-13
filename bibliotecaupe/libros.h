#ifndef LIBRO_H
#define LIBRO_H

#include <string>

class libros {
private:

    std::string nombre;
    std::string area;
    std::string subarea;
    std::string autores;
    std::string editorial;
    std::string ubicacion;
    int anioDePublicacion;
    std::string estado; //bien, regular, malo, destruido
    bool prestado;

    //metodos privados para el codigo de barras
    std::string obtenerEstadoID() const;
    std::string obtenerDisponibilidadID() const;

public:

    //Prototipo de constructor y destructor

   libros(std::string _nombre, std::string _area, std::string _subarea,
          std::string _autores, std::string _editorial, int _anioDePublicacion,
          std::string _estado, std::string _ubicacion, bool _prestado); //constructor
  
   ~libros(); //destructor


   // Getters
   std::string getLibro();
   std::string getNombre() const;
   std::string getEstado() const;
   std::string getUbicacion() const;
   int getAnioDePublicacion() const;
   bool getPrestado() const; //Considero que es un metodo de la clase "prestamos"

   //setters
   void setEstado();
   
    
   // Metodos
   std::string convFormatoUbi() const; //cambia el formato de la ubicacion
   std::string codBarras(); //genera el codigo
   void ubicacionLibro(); //Este metodo y getUbicacion() no cumplen la misma funcion?
   void estadoLibro(); //Este metodo y getEstado() no cumplen la misma funcoin?

};

#endif
