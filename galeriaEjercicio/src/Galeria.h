//
// Created by ASUS on 6/03/2025.
//

#ifndef GALERIA_H
#define GALERIA_H
#include <string>
#include <vector>

#include "Artista.h"

using namespace std;
class Galeria {
private:
    string name;
    string address;
    vector<Artista> artistas;

public:
    Galeria();
    Galeria(string name, string address);

    // Getters
    string getName();
    string getAddress();
    vector<Artista> getArtistas();

    // Setters
    void setName(string name);
    void setAddress(string address);

    //Métodos
    string registrarArtista(Artista a);
    string mostrarArtistas();
    string toString();
};



#endif //GALERIA_H
