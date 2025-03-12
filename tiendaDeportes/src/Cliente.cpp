#include "Cliente.h"

Cliente::Cliente(string nombre, string id) {
    this->nombre = nombre;
    this->id = id;
}

string Cliente::getNombre() {
    return nombre;
}

string Cliente::getId() {
    return id;
}

void Cliente::setNombre(string nombre) {
    this->nombre = nombre;
}

void Cliente::setId(string id) {
    this->id = id;
}

string Cliente::verCarrito() {
    string ans;
    for (int i = 0; i < this->carrito.size(); i++) {
        ans += to_string(i+1) + ". " + carrito[i].getNombre() + "\n";
    }
    return ans;
}

string Cliente::agregarProducto(Producto producto, int cantidad) {
    string ans;
    if (producto.getNombre() != "") {
        if (producto.getDisponible() - cantidad >= 0) {
            this->carrito.push_back(producto);
            ans += "Producto agregado exitosamente al carrito\n";
        }
        else {
            ans += "No hay " + producto.getNombre() + " disponible\n";
        }
    }
    else {
        ans += "Producto" + producto.getNombre() + " no existe\n";
    }
    return ans;
}