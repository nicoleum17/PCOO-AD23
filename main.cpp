#include <iostream>
#include <string>

//incluir clases
#include "Inventario.h"
#include "Dulces.h"
#include "Frutas.h"

using namespace std;

void menu(){
	cout<<"		MENU:\n";
	cout<<"1.- Realizar una venta.\n";
	cout<<"2.- Anadir un nuevo producto.\n";
	cout<<"			3.-SALIR\n";
	
	cout<<"Que opcion deseas?: ";
}

int main() {
	
	//variables
	char respuesta = 'S';
	int ans = 1;
	char prod;
	
	///de productos
	string nom;
	int ID;
	float pre;
	
	//para cada clase hija 
	float xKilo;
	int cantidad;
	string marca;
	string tipoSabor;
	string tipoDProd;
	
	//Instanciar Objetos
	Dulces nuevo;
	Frutas nuevoo;
	Inventario inventario;
	
	//creamos una base del inventario.
	nuevo = Dulces( "Dulce", "Paletas", 235647, 12.00, 30, "Vero", "Picoso" );
	inventario.anyadirProductos( nuevo );
	nuevo = Dulces( "Dulce", "Chicles", 21456, 1.50, 10, "Bubaaloo", "Dulce" );
	inventario.anyadirProductos( nuevo );
	nuevoo = Frutas( "Fruta", "Manzana", 302115, 6.25, 25.50 );
	inventario.anyadirProductos( nuevoo );
	nuevoo = Frutas( "Fruta", "Platano", 396523, 9.50, 36.70 );
	inventario.anyadirProductos( nuevoo );
	nuevo = Dulces( "Dulce", "Bombones", 223154, 5, 25, "de la Rosa", "Dulce" );
	inventario.anyadirProductos( nuevo );

	//ciclo para visualizar el menu
	while( ans != 3){
		menu();
		cin >> ans;
		
		if( ans > 3 ){
			cout<<" \n La opcion no es valida. Elige otra opcion.\n";
		} else {
			switch(ans){
				case 1:
					//mostramos el inventario 
					inventario.mostrarInventario();
					inventario.calcularTotal();
					
					break;
				
				case 2:
					//while para agregar varios productos
					while( respuesta != 'N'){
						if( respuesta == 'S' ){
							cout<<"Que tipo de producto estas ingresando? Dulce o Fruta (D/F): ";
							cin>>prod;
							if( prod  == 'D' ){
								tipoDProd = 'D';
								cout << "\nIngresa el nombre del nuevo producto: "; cin >> nom;
								cout << "Ingresa el id: "; cin >> ID;
								cout << "Ingresa el precio: "; cin >> pre;
								cout << "Ingresa la cantidad por bolsa: "; cin >> cantidad;
						        cout << "Ingresa la marca: "; cin >> marca;
						        cout << "Ingresa el tipo de sabor: "; cin >> tipoSabor;
								nuevo = Dulces( tipoDProd, nom, ID, pre, cantidad, marca, tipoSabor );
								inventario.anyadirProductos(nuevo);
							} else if( prod == 'F' ){
								tipoDProd = 'F';
								cout << "\nIngresa el nombre del nuevo producto: "; cin >> nom;
								cout << "Ingresa el id: "; cin >> ID;
								cout << "Ingresa el precio: "; cin >> pre;
								cout << "Ingresa el precio por kilo: "; cin >> xKilo;
								nuevoo = Frutas( tipoDProd, nom, ID, xKilo, xKilo );
								inventario.anyadirProductos( nuevoo );
							}
							
						} 
						cout<<"Deseas agregar mas productos? (S/N): "; cin >> respuesta;
					}
					break;
			}
		}
	}
	
	return 0;
}
