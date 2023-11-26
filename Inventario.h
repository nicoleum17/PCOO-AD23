#include <iostream>
#include <string>
#include <vector>
#include "Producto.h"
#include "Dulces.h"
#include "Frutas.h"

using namespace std;

#ifndef INVENTARIO
#define INVENTARIO

class Inventario {
    private:
        vector<Producto> vectorProductos;
    public:
    	//constructores
        Inventario(){};
        Inventario(vector<Producto> productos){
            this-> vectorProductos = productos;
        }
        
        //metodos
        void anyadirProductos(Producto &productos){
            vectorProductos.push_back(productos);
        }
        
        void mostrarInventario(){
        	cout << "Inventario: \n";
            for(unsigned int i = 0;i < vectorProductos.size();i++){
		    	cout << "\nID: " << vectorProductos[i].getID() << " | Nombre: " << vectorProductos[i].getNombre() << " | Precio: " << vectorProductos[i].getPrecio() << endl;
			}
        }
        
        Producto getProd(){
            return vectorProductos[0];
        }
        
        float calcularTotal(){
	
			float total = 0, cantDProd = 0;
			char respuesta = 'S';
			
			while( respuesta != 'N'){
				if( respuesta == 'S' ){
					//variable
					int idSeleccionado;
					
					//predir id
				    cout << "\nIngresa el ID del producto: ";
				    cin >> idSeleccionado;
				    
				    //buscar el id y sumar al total el precio
					for (int i = 0; i < vectorProductos.size(); ++i) {
				        if (vectorProductos[i].getID() == idSeleccionado) {
				        	cantDProd ++;
				            total += vectorProductos[i].getPrecio();
				            break; // Salir al encontrar el producto
				        }
				    }
				}
				cout<<"\nDeseas agregar más productos? (S/N): "; cin >> respuesta;
			}
			cout << "\nHas seleccionado " << cantDProd;
		    cout << "\nTotal a pagar: $" << total << "\n";
		
		    return 0;
		}
};

#endif
