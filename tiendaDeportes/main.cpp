#include <iostream>

#include "src/Cliente.h"
#include "src/Producto.h"
#include "src/TiendaDeportiva.h"

using namespace std;

int main(int argc, char *argv[]) {
    TiendaDeportiva td1("Barca");
    Producto p1("Banano", "ABCD", 1500, 50);
    Producto p2("Guayaba", "BCAD", 700, 20);
    cout << p1.getNombre() << endl;
    Cliente c1("Carlos", "BCAD");

    cout << td1.agregarProducto(&p1);
    cout << td1.agregarCliente(&c1);
    cout << td1.verProductos();

    cout << c1.registrarTienda(&td1);

    cout << c1.agregarProducto(&p1, 2);
    cout << c1.agregarProducto(&p2, 4);
    cout << c1.verCarrito();
    cout << c1.irPagar();
    cout << c1.verFacturas();
    cout << "Disponible de banano: " << to_string(p1.getDisponible()) << endl;
    cout << "Disponible de guayaba: " << to_string(p2.getDisponible()) << endl;
    cout << endl;

    cout << td1.verFacturas();

    return 0;
}
