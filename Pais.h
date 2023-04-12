#pragma once
#include "pch.h"
#include "iostream"
#include "conio.h"
#include "vector"
#include "Regiones.h"

using namespace std;
using namespace System;

class Pais 
{
private:
	long long id;
	string nombre;
	string continente;
	vector <Regiones> listaRegiones;
public:
	Pais() {
		this->id = 1000;
		this->id++;
	}
	~Pais() {}
	
	void setNombrePais(string _nombre)
	{
		this->nombre = _nombre;
	}
	void agregarRegion(Regiones _objreg)
	{
		this->listaRegiones.push_back(_objreg);
		
	}

	void listarPaises()
	{
		cout << "ID: " << this->id << endl;
		cout << "Nombre: " << this->nombre << endl;

		for (int i = 0; i < listaRegiones.size(); i++)
		{
			cout << this->listaRegiones[i].tostring() << endl;
		}
	}
	
};

