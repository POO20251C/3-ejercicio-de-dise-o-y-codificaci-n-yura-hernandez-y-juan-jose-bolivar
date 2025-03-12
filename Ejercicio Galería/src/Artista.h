//
// Created by ASUS on 5/03/2025.
//

#ifndef ARTISTA_H
#define ARTISTA_H
#include <string>
#include <vector>

#include "Obra.h"

using namespace std;
class Artista {
private:
    string id;
    string name;
    string fecha;
    vector<Obra> obras;

public:
    Artista();
    Artista(string id, string name, string fecha);

    // Getters
    string getId();
    string getName();
    string getFecha();
    vector<Obra> getObras();

    // Setters
    void setId(string id);
    void setName(string name);
    void setFecha(string fecha);

    // Métodos
    string registrarObra(Obra o);
    string mostrarObras();
    string toString();
};



#endif //ARTISTA_H
