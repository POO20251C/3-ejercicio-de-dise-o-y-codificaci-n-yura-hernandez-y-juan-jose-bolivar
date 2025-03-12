
#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>

using namespace std;

class Producto {

    private:

    string nombre;
    string id;
    int precio;
    int disponible;

    public:
    Producto();
    Producto(string nombre, string id,  int precio, int disponible);

    string getNombre();
    string getId();
    int getPrecio();
    int getDisponible();

    void setNombre(string nombre);
    void setId(string id);
    void setPrecio(int precio);
    void setDisponible(int disponible);


};



#endif //PRODUCTO_H
