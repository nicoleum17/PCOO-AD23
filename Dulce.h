//Joanna Nicole Uriostegui Maga�a
//A01711853
#include <iostream>
#include <string>
using namespace std;
#include "Producto.h"

#ifndef DULCE
#define DULCE

class Dulce:public Producto{
	private:
		//atributos generales
		int cantXBolsa;
		string marca;
		string tipoDSabor;
		
	public:
		//constructores
		Dulce() : Producto() {
			this-> cantXBolsa = 0;
			this-> marca = "NA";
			this-> tipoDSabor =  "NA";
		}
		Dulce(string tipoDProducto, string nombre, int id, float precio, int cantidad, string marca, string tipoSabor)
		: Producto(tipoDProducto, nombre, id, precio), cantXBolsa(cantidad), marca(marca), tipoDSabor(tipoSabor){		
		}
		
		//getter y setters
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
