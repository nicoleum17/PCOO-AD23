//Joanna Nicole Uriostegui Magaña
//A01711853
#include <iostream>
#include <string>
using namespace std;

#ifndef PRODUCTO
#define PRODUCTO

class Producto{
	private:
		//atributos
		string tipoDProducto;
		string nombre;
		int id;
		float precio;
		
	public:
		//constructores
		Producto(){
			tipoDProducto = "";
			nombre = "";
			id = 1;
			precio = 15;
		};
		
		Producto(string tipoDProd, string nom, int ID, float pre){
			tipoDProducto = tipoDProd;
			nombre = nom;
			id = ID;
			precio = pre;
		};
				
		//getters y setters
		string getTipoDProducto()const{
			return tipoDProducto;
		}
		
		void setTipoDProducto(string tipoDProd){
			tipoDProducto = tipoDProd;
		}
		
		string getNombre()const{
			return nombre;
		}
		
		void setNombre(string nom){
			nombre = nom;
		}
		
		int getID()const{
			return id;
		}
		
		void setID(int ID){
			id = ID;
		}
		
		float getPrecio()const{
			return precio;
		}
		
		void setPrecio(float pre){
			precio = pre;
		}
};

#endif 
