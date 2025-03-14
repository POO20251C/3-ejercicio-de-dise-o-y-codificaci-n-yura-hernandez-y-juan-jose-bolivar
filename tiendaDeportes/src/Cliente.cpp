#include "Cliente.h"
#include "TiendaDeportiva.h"

Cliente::Cliente(string nombre, string id) {
    this->nombre = nombre;
    this->id = id;
    this->tienda = nullptr;
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
    string ans = "====================================================\nCarrito:\n";
    for (int i = 0; i < this->carrito.size(); i++) {
        ans += to_string(i+1) + ". " + carrito[i].producto->getNombre() + " " + to_string(carrito[i].producto->getPrecio()) + " " + to_string(carrito[i].cantidad) + "\n";
    }
    ans += "====================================================\n\n";
    return ans;
}

string Cliente::agregarProducto(Producto* producto, int cantidad) {
    string ans;
    aComprar productoCompra(cantidad, producto);
    if (producto->getNombre() != "") {
        if (producto->getDisponible() - cantidad >= 0) {
            this->carrito.push_back(productoCompra);
            ans += "Producto agregado exitosamente al carrito\n";
        }
        else {
            ans += "No hay " + producto->getNombre() + " disponible\n";
        }
    }
    else {
        ans += "Producto" + producto->getNombre() + " no existe\n";
    }
    return ans;
}

string Cliente::verFacturas() {
    string ans;
    for (int i = 0; i < this->facturas.size(); i++) {
        ans += facturas[i].toString() + "\n";
    }
    return ans;
}

string Cliente::irPagar() {
    string ans = "====================================================\n";

    if (carrito.size() == 0) {
        ans += "Carrito vacio\n";
    }
    else if (tienda == nullptr) {
        ans += "No hay tienda registrada\n";
    }
    else {
        int total = 0;
        for (int i = 0; i < this->carrito.size(); i++) {
            ans += to_string(i+1) + ". " + carrito[i].producto->getNombre() + " " + to_string(carrito[i].producto->getPrecio()) + " " + to_string(carrito[i].cantidad)  + "\n";
            total += carrito[i].producto->getPrecio() * carrito[i].cantidad;
            carrito[i].producto->setDisponible(carrito[i].producto->getDisponible() - carrito[i].cantidad);
        }

        ans += "Total: " + to_string(total) + "\n";
        Factura temp_fac(this->getNombre(), this->getId(), carrito, total);
        facturas.push_back(temp_fac);
        tienda->agregarFactura(temp_fac);
        carrito.clear();

    }

    ans += "====================================================\n";
    ans += "Compra realizada con exito\n\n";

    return ans;
}

string Cliente::registrarTienda(TiendaDeportiva* tienda) {
    string ans;
    this->tienda = tienda;
    ans += "Registro exitoso\n";
    return ans;
}

