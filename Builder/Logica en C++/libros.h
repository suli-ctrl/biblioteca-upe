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
    int anioDePublicacion;
	std::string ubicacion;
	std::string estado; //bien, regular, malo, destruido
	bool prestado;
    std::string codigoDeBarras;

    //metodos privados para el codigo de barras
    std::string obtenerEstadoID() const;
    std::string obtenerDisponibilidadID() const;

public:

    //prototipo de constructor y destructor

   libros(std::string _nombre, std::string _area, std::string _subarea,
		  std::string _autores, std::string _editorial, int _anioDePublicacion,
		  std::string _ubicacion, std::string _estado); //constructor principal
   libros(std::string _nombre, std::string _area, std::string _subarea,
		  std::string _autores, std::string _editorial, int _anioDePublicacion,
		  std::string _ubicacion, std::string _estado, std::string _codigoBarras);//Constructor especifico para cargarDatosCSV
  
   ~libros(); //destructor


   // Getters
   std::string getNombre() const;
   std::string getArea() const;
   std::string getSubArea() const;
   std::string getAutores() const;
   std::string getEditorial() const;
   int getAnioDePublicacion() const;
   std::string getUbicacion() const;
   std::string getEstado() const;
   std::string getCodigoBarras() const;
   
   

   //setters
   void setNombre(std::string& nuevoNombre);
   void setArea(std::string& nuevoArea);
   void setSubArea(std::string& nuevoSubArea);
   void setAutores(std::string& nuevosAutores);
   void setEditorial(std::string& nuevaEditorial);
   void setAnioDePublicacion(int nuevoAnio);
   void setUbicacion(std::string& nuevaUbicacion);
   void setEstado(std::string& nuevoEstado);
   void setCodigoBarras(const std::string& codigo);
   void setPrestado(bool valor);

   
    
   // metodos
   std::string convFormatoUbi() const; //cambia el formato de la ubicacion
   std::string codBarras(); //genera el codigo

   void mostrar() const;
   bool estaDisponible() const;




};

#endif
