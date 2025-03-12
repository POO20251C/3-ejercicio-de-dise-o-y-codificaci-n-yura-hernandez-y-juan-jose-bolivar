//
// Created by ASUS on 6/03/2025.
//

#include "Galeria.h"

Galeria::Galeria(string name, string address) {
    this->name = name;
    this->address = address;
}

string Galeria::getName() {
    return name;
}
string Galeria::getAddress() {
    return address;
}
vector<Artista> Galeria::getArtistas() {
    return artistas;
}

void Galeria::setName(string name) {
    this->name = name;
}
void Galeria::setAddress(string address) {
    this->address = address;
}

string Galeria::registrarArtista(Artista a) {
    string ans;
    if (a.getName() != "") {
        artistas.push_back(a);
        ans = "Nuevo artista registrado";
    }else {
        ans = "El artista debe tener un nombre para ser registrado";
    }
    return ans;
}

string Galeria::mostrarArtistas() {
    string ans;
    if (artistas.size() == 0) {
        ans = "Por ahora no hay artistas registrados";
    }else {
        for (int i = 0; i < artistas.size(); i++) {
            ans += to_string(i+1)+". " + artistas[i].getName() + "\n";
        }
    }
    return ans;
}
