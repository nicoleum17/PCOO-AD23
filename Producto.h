#include <iostream>
#include <string>
using namespace std;

#pragma once

class Producto{
	private:
		//atributos
		string nombre;
		int id;
		float precio;
		
	public:
		//constructores
		Producto(){
			nombre = "";
			id = 1;
			precio = 15;
		}
		Producto(string nom, int ID, float pre){
			nombre = nom;
			id = ID;
			precio = pre;
		}
		
		//getters y setters
		string getNom()const;
		void setNom(string nom);
		int getID()const;
		void setID(int ID);
		float getPrecio()const;
		void setPrecio(float pre);
		
		//métodos
};

string Producto::getNom()const{
	return nombre;
}

void Producto::setNom(string nom){
	nombre = nom;
}

int Producto::getID()const{
	return id;
}

void Producto::setID(int ID){
	id = ID;
}

float Producto::getPrecio()const{
	return precio;
}

void Producto::setPrecio(float pre){
	precio = pre;
}
