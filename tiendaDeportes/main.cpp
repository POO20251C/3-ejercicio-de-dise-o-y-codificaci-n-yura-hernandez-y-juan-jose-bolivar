#include <iostream>
#include "src/Producto.h"

using namespace std;

int main(int argc, char *argv[]) {
    Producto p1("Banano", "ABCD", 1500, 50);
    cout << p1.getNombre() << endl;
}
