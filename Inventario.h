#include <iostream>
#include <string>
#include <vector>
#include "Producto.h"
using namespace std;

class Inventario {
private:
    vector<Producto> productos;

public:
    void anadirProducto(const Producto& producto);
    void mostrarInventario() const;
    const vector<Producto>& getProductos() const;  //para acceder a productos desde fuera
};

void Inventario::anadirProducto(const Producto& producto) {
    productos.push_back(producto);
}

void Inventario::mostrarInventario() const {
    cout << "\nInventario:\n";
    for (vector<Producto>::const_iterator it = productos.begin(); it != productos.end(); ++it) {
        cout << "ID: " << it->getID() << " | Nombre: " << it->getNom() << " | Precio: " << it->getPrecio() << "\n";
    }
}

const vector<Producto>& Inventario::getProductos() const {
    return productos;
}
