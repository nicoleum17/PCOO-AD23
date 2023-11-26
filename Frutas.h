#include <iostream>
#include <string>
using namespace std;
#include "Producto.h"

#ifndef FRUTAS
#define FRUTAS

class Frutas:public Producto{
	private:
		float precioXKilo;
		
	public:
		Frutas() : Producto() {
			this-> precioXKilo = 0;
		}
		Frutas(string tipoDProducto, string nombre, int id, float precio, float xKilo)
		: Producto(tipoDProducto, nombre, id, precio), precioXKilo(xKilo){		
		}
		
		float getPrecioXKilo(){
			return precioXKilo;
		}
		
		void setPrecioXKilo(float precio){
			precioXKilo = precio;
		}
	
};
#endif
