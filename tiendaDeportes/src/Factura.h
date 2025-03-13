#ifndef FACTURA_H
#define FACTURA_H
#include <string>
#include <vector>
#include "Producto.h"

struct aComprar;


using namespace std;

class Factura {

    private:
    string nombre_cliente;
    string id_cliente;
    vector<aComprar> productos;
    int total;

    public:

    Factura(string nombre_cliente, string id_cliente, vector<aComprar> productos, int total);
    string getId();
    string toString();


};



#endif //FACTURA_H
