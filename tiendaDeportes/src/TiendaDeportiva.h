#ifndef TIENDADEPORTIVA_H
#define TIENDADEPORTIVA_H

#include <vector>
#include <string>

#include "Factura.h"

class Cliente;

using namespace std;

class TiendaDeportiva {

    private:
    string nombreTienda;
    vector<Cliente*> clientes;
    vector<Factura> facturas;
    vector<Producto*> productos;

    public:

    TiendaDeportiva(string nombreTienda);

    string getNombreTienda();

    string verFacturas();
    string verClientes();

    string verFacturasDe(string id_cliente);

    string agregarCliente(Cliente* cliente);
    string agregarFactura(Factura factura);
    string agregarProducto(Producto* producto);

    string verProductos();



};



#endif //TIENDADEPORTIVA_H
