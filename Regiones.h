#pragma once
#include "Pais.h"
#include <string>

class Regiones
{
private:

	long long id = 2000;
	string nombre;

public:
	Regiones() {
		this->id++;

	}
	~Regiones() {}

	void agregarRegion(string _nombre)
	{
		this->nombre = _nombre;

	}

	string tostring()
	{
		return "ID REG: " + to_string(this->id) + " | " +this->nombre;
	}
	
};

