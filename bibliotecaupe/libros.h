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
    std::string estado; //bien, regular, malo, destruido
    std::string ubicacion;
    int aniodepubli;
    bool prestado;

public:

    //Prototipo de constructor y destructor

   libros(std::string _nombre, std::string _area, std::string _subarea,
          std::string _autores, std::string _editorial, int _anioDePublicacion,
          std::string _estado, std::string _ubicacion, bool _prestado); //constructor
   
    // Que significa el "_"?

   ~libros(); //destructor

   // Getters

   std::string getNombre() const;
   std::string getEstado() const;
   std::string getUbicacion() const;
   int getAnioDePublicacion() const;
   bool getPrestado() const;
    
   // Metodos
   void altaLibro();
   void bajaLibro();
   void modifLibro();
   void prestarLibro();
   void devolucionLibro();
   void ubicacionLibro();
   void estadoLibro();
   void buscoLibroPorNombre();
   void buscoLibroPorAutor();
   void buscoLibroPorAnio();

};

#endif
