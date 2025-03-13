#include "Factura.h"
#include "Cliente.h"

Factura::Factura(string nombre_cliente, string id_cliente, vector<aComprar> productos, int total) {
    this->nombre_cliente = nombre_cliente;
    this->id_cliente = id_cliente;
    this->total = total;
    this->productos = productos;
}

string Factura::toString() {
    string ans = "====================================================\n";
    ans += "Factura de: " + nombre_cliente + + " id: " + id_cliente + " \n";
    ans += "#    Nombre del producto    Precio      Cantidad\n";
    for (int i = 0; i < productos.size(); i++) {
        ans += to_string(i+1) + ". " + productos[i].producto->getNombre() + " " + to_string(productos[i].producto->getPrecio())  + " " + to_string(productos[i].cantidad) + "\n";
    }
    ans += "Total: " + to_string(total) + "\n";
    ans += "====================================================\n";

    return ans;
}

string Factura::getId() {
    return id_cliente;
}



