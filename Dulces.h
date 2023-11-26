#include <iostream>
#include <string>
using namespace std;
#include "Producto.h"

#ifndef DULCES
#define DULCES

class Dulces:public Producto{
	private:
		int cantXBolsa;
		string marca;
		string tipoDSabor;
		
	public:
		Dulces() : Producto() {
			this-> cantXBolsa = 0;
			this-> marca = "NA";
			this-> tipoDSabor =  "NA";
		}
		Dulces(string tipoDProducto, string nombre, int id, float precio, int cantidad, string marca, string tipoSabor)
		: Producto(tipoDProducto, nombre, id, precio), cantXBolsa(cantidad), marca(marca), tipoDSabor(tipoSabor){		
		}
		
		int getCantXBolsa(){
			return cantXBolsa;
		}
		
		void setCantXBolsa(int cantidad){
			cantXBolsa = cantidad;
		}
		
		string getMarca(){
			return marca;
		}
		
		void setMarca(string marc){
			marca = marc;
		}
		
		string getTipoDSabor(){
			return tipoDSabor;
		}
		
		void setTipoDSabor(string tipoSabor){
			tipoDSabor = tipoSabor;
		}
	
};
#endif
