//
// Created by ASUS on 5/03/2025.
//

#include "Artista.h"

Artista::Artista(string id, string name, string fecha) {
    this->id = id;
    this->name = name;
    this->fecha = fecha;
}

// Getters
string Artista::getId() {
    return id;
}
string Artista::getName() {
    return name;
}
string Artista::getFecha() {
    return fecha;
}
vector<Obra> Artista::getObras() {
    return obras;
}

// Setters
void Artista::setId(string id) {
    this->id = id;
}
void Artista::setName(string name) {
    this->name = name;
}
void Artista::setFecha(string fecha) {
    this->fecha = fecha;
}

// Funcionalidades
string Artista::registrarObra(Obra o) {
    string ans;
    if (o.getTitulo() != "") {
        obras.push_back(o);
        ans = "Nueva obra registrada";
    }else {
        ans = "Al no tener titulo, no se resitro la obra";
    }
    return ans;
}

string Artista::mostrarObras() {
    string ans;
    if (obras.empty()) {
        ans = "NO HAY OBRAS REGISTRADAS";
    }else {
       for (vector<Obra>::iterator it = obras.begin(); it != obras.end(); it++) {
           ans += it->getTitulo() + "\n";
       }
    }
    return ans;
}

string Artista::toString() {
    string ans;
    ans = "El codigo es: "+id + " El nombre es: " + name + " y la fecha de creación es: " + fecha + "\n";

    return ans;
}
