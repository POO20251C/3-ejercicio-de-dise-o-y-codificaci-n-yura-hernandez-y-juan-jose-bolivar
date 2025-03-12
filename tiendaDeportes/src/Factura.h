#ifndef FACTURA_H
#define FACTURA_H
#include <string>

#include "Cliente.h"

using namespace std;

class Factura {

    private:
    string nombre_cliente;
    string id_cliente;
    vector<aComprar> productos;
    int total;

    public:

    Factura(string nombre_cliente, string id_cliente, vector<aComprar> productos, int total);
    string toString();


};



#endif //FACTURA_H
