#include <iostream>
#include "src/Cliente.h"
#include "src/Producto.h"
#include "src/TiendaDeportiva.h"

using namespace std;

int main(int argc, char *argv[]) {
    TiendaDeportiva td1(" TIENDA DEPORTIVA SOLO REAL MADRID");

    Producto p1("Balon de Futbol Conmemorativo laliga 23-24 Version Campeones", "B001", 50000, 10);
    Producto p2("Camiseta Real Madrid Local Temporada 11-12", "C002", 80000, 5);

    Cliente c1("Carlos", "BCAD");

    cout << td1.agregarProducto(&p1);
    cout << td1.agregarProducto(&p2);
    cout << td1.agregarCliente(&c1);
    cout << c1.registrarTienda(&td1);
    cout << c1.agregarProducto(&p1, 2);
    cout << c1.agregarProducto(&p2, 4);
    cout << c1.verCarrito();
    cout << c1.irPagar();
    cout << "Disponible del producto 1: "<< to_string(p1.getDisponible()) << endl;
    cout << "Disponible del producto 2: " << to_string(p2.getDisponible()) << endl;
    cout << td1.verProductos();
    cout << endl;


    bool running = true;
    int opcion;

    while (running) {
        cout << "============================================" << endl;
        cout << "       MENU TIENDA DEPORTIVA         " << endl;
        cout << "============================================" << endl;
        cout << "1.  Agregar nuevo cliente" << endl;
        cout << "2.  Mostrar productos disponibles" << endl;
        cout << "3.  Facturar" << endl;
        cout << "4.  Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                string nombre, id;
                cout << "Ingrese el nombre del cliente: "<< endl;
                cin >> nombre;
                cout << "Ingrese el ID del cliente: ";
                cin >> id;
                Cliente nuevoCliente(nombre, id);
                cout << td1.agregarCliente(&nuevoCliente);
                break;
            }
            case 2:
                cout << td1.verProductos();
            break;
            case 3:
                cout << c1.verFacturas();
                cout << td1.verFacturas();
            break;
            case 4:
                running = false;
            cout << "Saliendo del programa" << endl;
            break;
            default:
                cout << " Opcion no valida, intenta nuevamente seleccionando otra opcion." << endl;
            break;
        }
    }

    return 0;
}

