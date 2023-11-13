#include <iostream>
#include <string>
#include <vector>
#include "Producto.h"
using namespace std;

class Venta{
	public:
		float calcularTotal(const vector<Producto>& productos);
};

float Venta::calcularTotal(const vector<Producto>& productos){
	
	float total = 0;
	char respuesta = 'S';
	
	while( respuesta != 'N'){
		int idSeleccionado;
	    cout << "Ingresa el ID del producto que deseas sumar al total: ";
	    cin >> idSeleccionado;
	    
		for (size_t i = 0; i < productos.size(); ++i) {
	        if (productos[i].getID() == idSeleccionado) {
	            total += productos[i].getPrecio();
	            break; // Salir al encontrar el producto
	        }
	    }
    	
    	cout<<"Deseas agregar más productos? (S/N): "; cin >> respuesta;
	}
	

    cout << "\nTotal del producto seleccionado: " << total << "\n";

    return 0;
}
