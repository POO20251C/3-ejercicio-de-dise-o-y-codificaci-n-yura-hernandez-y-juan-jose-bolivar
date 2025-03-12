#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <vector>

#include "Producto.h"

using namespace std;

class Cliente {

    private:
    string nombre;
    string id;
    vector<Producto> carrito;

    public:
    Cliente();
    Cliente(string nombre, string id);

    string getNombre();
    string getId();
    string verCarrito();

    void setNombre(string nombre);
    void setId(string id);

    string agregarProducto(Producto producto, int cantidad);

};



#endif //CLIENTE_H
