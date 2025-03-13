#include "TiendaDeportiva.h"
#include "Cliente.h"

TiendaDeportiva::TiendaDeportiva(string nombreTienda) {
    this->nombreTienda = nombreTienda;
}

string TiendaDeportiva::getNombreTienda() {
    return nombreTienda;
}

string TiendaDeportiva::agregarCliente(Cliente* cliente) {
    string ans;
    if (cliente->getId() != "") {
        clientes.push_back(cliente);
        ans += "Cliente agregado exitosamente\n";
    }
    else {
        ans += "El cliente no existe\n";
    }
    return ans;
}

string TiendaDeportiva::agregarFactura(Factura factura) {
    string ans;
    if (factura.getId() != "") {
        facturas.push_back(factura);
        ans += "Factura agregada exitosamente\n";
    }
    else {
        ans += "La factura no existe\n";
    }
    return ans;
}

string TiendaDeportiva::agregarProducto(Producto *producto) {
    string ans;
    if (producto->getId() != "") {
        productos.push_back(producto);
        ans += "Producto agregado exitosamente\n";
    }
    else {
        ans += "El producto no existe\n";
    }
    return ans;
}

string TiendaDeportiva::verProductos() {
    string ans;
    if (productos.size() > 0) {
        for (int i = 0; i < productos.size(); i++) {
            ans += productos[i]->getNombre() + " Cantidad: " + to_string(productos[i]->getDisponible()) + "\n";
        }
    }
    else {
        ans += "No hay productos\n";
    }
    return ans;
}


string TiendaDeportiva::verClientes() {
    string ans;
    for (int i = 0; i < clientes.size(); i++) {
        ans += to_string(i+1) + ". " + clientes[i]->getNombre() + "\n";
    }
    return ans;
}

string TiendaDeportiva::verFacturas() {
    string ans;
    for (int i = 0; i < facturas.size(); i++) {
        ans += facturas[i].toString() + "\n";
    }
    return ans;
}

string TiendaDeportiva::verFacturasDe(string id_cliente) {
    string ans;
    int cantidad;
    for (int i = 0; i < facturas.size(); i++) {
        if (facturas[i].getId() == id_cliente) {
            cantidad += 1;
        }
    }

    if (cantidad != 0) {
        for (int i = 0; i < facturas.size(); i++) {
            if (facturas[i].getId() == id_cliente) {
                ans += facturas[i].toString() + "\n";
            }
        }
    }
    else {
        ans += "El cleinte con ID: " + id_cliente + "no tiene facturas generadas\n";
    }
    return ans;
}





