//Joanna Nicole Uriostegui Magaña
//A01711853
#include <iostream>
#include <string>
using namespace std;
#include "Producto.h"

#ifndef FRUTA
#define FRUTA

class Fruta:public Producto{
	private:
		float precioXKilo;
		
	public:
		//constructores
		Fruta():Producto() {
			this-> precioXKilo = 0;
		}
		
		Fruta(string tipoDProducto, string nombre, int id, float precio, float xKilo)
		: Producto(tipoDProducto, nombre, id, precio), precioXKilo(xKilo){		
		}
		
		//getter y setter
		float getPrecioXKilo(){
			return precioXKilo;
		}
		
		void setPrecioXKilo(float precio){
			precioXKilo = precio;
		}
	
};
#endif
