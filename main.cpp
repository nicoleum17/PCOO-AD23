#include <iostream>
#include <string>

//incluir clases
#include "Inventario.h"
#include "Venta.h"

using namespace std;

int main() {
	
	//variables
	string nom;
	char respuesta = 'S';
	int ID;
	float pre;
	Producto piezaNueva;
	Inventario inventario;
	
	
	//while para agregar varios productos
	while( respuesta != 'N'){
		cout << "\nIngresa el nombre del nuevo producto: "; cin >> nom;
		cout << "Ingresa el id: "; cin >> ID;
		cout << "Ingresa el precio: "; cin >> pre;
		
		piezaNueva.getNom();
		piezaNueva.setNom(nom);
		piezaNueva.getID();
		piezaNueva.setID(ID);
		piezaNueva.getPrecio();
		piezaNueva.setPrecio(pre);
		
    	inventario.anadirProducto(piezaNueva);
    	
    	cout<<"Deseas agregar más productos? (S/N): "; cin >> respuesta;
	}

    inventario.mostrarInventario();
    
    Venta venta1;
    const vector<Producto>& productos = inventario.getProductos();

    venta1.calcularTotal(productos);
	
	return 0;
}
