//Joanna Nicole Uriostegui Magaña
//A01711853
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
    	//atributo, componente de productos
        vector<Producto> vectorProductos;
    public:
    	//constructores
        Inventario(){};
        Inventario(vector<Producto> productos){
            this-> vectorProductos = productos;
        }
        
        //metodos
        void anyadirProductos(Producto productos){
        	//añade al final del vector el producto nuevo
            vectorProductos.push_back(productos);
        }
        
        void mostrarInventario(){
        	//recorriendo el arreglo, imprime el inventario
        	cout << "Inventario: \n";
            for(unsigned int i = 0;i < vectorProductos.size();i++){
		    	cout << "\nID: " << vectorProductos[i].getID();
				cout << " | Nombre: " << vectorProductos[i].getNombre();
				cout << " | Precio: " << vectorProductos[i].getPrecio() << endl;
			}
        }
        
        //getter
        Producto getProd(){
            return vectorProductos[0];
        }
        
        float calcularTotal(){
			//recorriendo el arreglo, busca el id seleccionado
			//y suma al total el precio del producto.

			float total = 0, cantDProd = 0;
			char respuesta = 'S';
			
			while( respuesta != 'N'){
				if( respuesta == 'S' ){
					//variable
					int idSeleccionado;
					
					//predir id
				    cout << "\nIngresa el ID del producto: ";
				    cin >> idSeleccionado;
				    
					for (int i = 0; i < vectorProductos.size(); ++i) {
				        if (vectorProductos[i].getID() == idSeleccionado) {
				        	cantDProd ++;
				            total += vectorProductos[i].getPrecio();
				            break; // Salir al encontrar el producto
				        }
				    }
				}
				cout<<"\nDeseas algun otro producto? (S/N): "; 
				cin >> respuesta;
			}
			//mensaje final
			cout << "\nHas seleccionado " << cantDProd << " productos.";
		    cout << "\nTotal a pagar: $" << total << "\n\n";
		
		    return 0;
		}
};

#endif
