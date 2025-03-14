#include <iostream>
#include <cctype>
#include "src/Cliente.h"
#include "src/Producto.h"
#include "src/TiendaDeportiva.h"

static int generarId() {
    static int id = 0;
    return id++;
}

string toUpperCase(string l) {
    char c;
    string ans;
    for (int i = 0; i < l.length(); i++) {
        c = toupper(l[i]);
        ans += c;
    }
    return ans;
}

Cliente crearCliente(string nombre, string id, TiendaDeportiva *tienda) {
    Cliente temp(nombre, id);
    temp.registrarTienda(tienda);
    return  temp;
}

Producto crearProducto(string nombre, string id, int precio, int disponible) {
    Producto tempP(nombre, id, precio, disponible);
    return tempP;
}


using namespace std;

int main(int argc, char *argv[]) {
    TiendaDeportiva td1(" TIENDA DEPORTIVA SOLO REAL MADRID");

    Producto p1("Balon de Futbol", "B001", 50000, 10);
    Producto p2("Camiseta Real Madrid", "C002", 80000, 5);

    Cliente c1("Carlos", "BCAD");

    cout << td1.agregarProducto(p1);
    cout << td1.agregarProducto(p2);
    cout << td1.agregarCliente(c1);
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

    cout << "============================================" << endl;
    cout << "       MENU TIENDA DEPORTIVA         " << endl;
    cout << "============================================" << endl;


    while (running) {
        cout << "1.  Agregar nuevo cliente" << endl;
        cout << "2.  Mostrar clientes" << endl;
        cout << "3.  Agregar nuevo producto" << endl;
        cout << "4.  Mostrar productos disponibles" << endl;
        cout << "5.  Facturar" << endl;
        cout << "6.  Mostrar Facturas" << endl;
        cout << "7.  Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                string nombre, id;
                cout << "Ingrese el nombre del cliente: "<< endl;
                cin >> nombre;
                id = to_string(generarId());
                cout << td1.agregarCliente(crearCliente(nombre, id, &td1));
                break;
            }
            case 2: {
                cout << td1.verClientes();
                break;
            }

            case 3: {
                string nombre, id;
                int precio, disponible;
                cout << "Ingrese el nombre del producto: "<< endl;
                cin >> nombre;
                cout << "Ingrese el precio del producto: "<< endl;
                cin >> precio;
                cout << "Ingrese la cantidad disponible del producto: "<< endl;
                cin >> disponible;
                id = generarId();
                cout << td1.agregarProducto(crearProducto(nombre, id, precio, disponible));
                break;
            }

            case 4: {
                cout << td1.verProductos();
                break;
            }

            case 5: {
                string nombreCliente;
                cout << "Ingrese el nombre del cliente que va a comprar: "<< endl;
                cin >> nombreCliente;
                int siEsta = 0;
                for (int i = 0; i < td1.getClientes().size(); i++) {
                    if (toUpperCase(td1.getClientes()[i].getNombre()) == toUpperCase(nombreCliente)) {
                        siEsta = 1;
                    }
                }

                if (siEsta) {
                    for (int i = 0; i < td1.getClientes().size(); i++) {
                        if (toUpperCase(td1.getClientes()[i].getNombre()) == toUpperCase(nombreCliente)) {
                            int compraCliente = 1;
                            cout << "Que productos va a comprar el cliente?\nProductos disponibles: \n";
                            cout << td1.verProductos();
                            cout << "E. Facturar\n";
                            cout << endl;
                            string producto;
                            int cuanto;
                            while (compraCliente) {
                                cout << "Ingrese el producto que va a comprar el cliente: ";
                                cin >> producto;
                                cout << endl;
                                cout << "Ingrese la cantidad que va a comprar: ";
                                cin >> cuanto;
                                cout << endl;
                                if (producto == "E" || producto == "e") {
                                    compraCliente = 0;
                                }
                                else {
                                    try {
                                        int p = stoi(producto);
                                        td1.getClientes()[i].agregarProducto(&td1.getProductos()[p], cuanto);
                                    } catch (const exception &e) {
                                        cout << "Opcion no valida\n";
                                    }
                                }
                            }
                            td1.getClientes()[i].irPagar();
                        }
                    }
                }
                else {
                    cout << "Cliente no encontrado en la base de datos" << endl;
                }
                break;
            }

            case 6: {
                cout << td1.verFacturas();
                break;
            }

            case 7: {
                running = false;
                cout << "Saliendo del programa" << endl;
                break;
            }

            default: {
                cout << "Opcion no valida, intenta nuevamente seleccionando otra opcion." << endl;
                break;
            }
        }
    }

    return 0;
}

