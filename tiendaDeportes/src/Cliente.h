#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <vector>

#include "Factura.h"
#include "Producto.h"

using namespace std;

struct aComprar {
    int cantidad;
    Producto producto;
};


class Cliente {

    private:
    string nombre;
    string id;
    vector<aComprar> carrito;
    vector<Factura> facturas;

    public:
    Cliente();
    Cliente(string nombre, string id);

    string getNombre();
    string getId();
    string verCarrito();

    void setNombre(string nombre);
    void setId(string id);

    string agregarProducto(Producto producto, int cantidad);

    string verFactura();

    string irPagar();

};



#endif //CLIENTE_H
