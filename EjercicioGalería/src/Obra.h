//
// Created by ASUS on 20/02/2025.
//

#ifndef OBRA_H
#define OBRA_H
#include <string>

using namespace std;

class Obra {
public:
    // Constructor de la clase, sirve para darle vida a un objeto y debe tener los datos
    // de inicialización del objeto
    Obra() = default;
    Obra(string titulo, string id, string fecha);

    // Getters
    string getTitulo();
    string getId();
    string getFecha();

    // Setters
    void setTitulo(string titulo);
    void setId(string id);
    void setFecha(string fecha);

private:
    string titulo;
    string id;
    string fecha;
};

#endif //OBRA_H
