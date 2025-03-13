#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <vector>

#include "Factura.h"
#include "Producto.h"

class TiendaDeportiva;

using namespace std;

struct aComprar {
    int cantidad;
    Producto* producto;

    aComprar(int cantidad, Producto* producto): cantidad(cantidad), producto(producto) {}
    aComprar(): cantidad(0), producto(nullptr) {}

    aComprar& operator+=(const aComprar& other) {
        if (this != &other) {
            cantidad += other.cantidad;
            producto = other.producto;
        }
        return *this;
    }


};


class Cliente {

    private:
    string nombre;
    string id;
    vector<aComprar> carrito;
    vector<Factura> facturas;
    TiendaDeportiva* tienda;

    public:
    Cliente();
    Cliente(string nombre, string id);

    string getNombre();
    string getId();
    string verCarrito();

    void setNombre(string nombre);
    void setId(string id);

    string agregarProducto(Producto* producto, int cantidad);

    string verFacturas();

    string irPagar();

    string registrarTienda(TiendaDeportiva* tienda);

};



#endif //CLIENTE_H
