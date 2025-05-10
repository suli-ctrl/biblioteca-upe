#ifndef PRESTAMOS_h
#define PRESTAMOS_H

class prestamos
{
private:
public:
	prestamos();
	~prestamos();

	std::string getPrestamo();
	std::string getLibroPrestado();
	std::string getSocioPrestatario();
	bool estaVencido();
	int diasHastaVencimiento();
	bool libroDevuelto();

};

#endif