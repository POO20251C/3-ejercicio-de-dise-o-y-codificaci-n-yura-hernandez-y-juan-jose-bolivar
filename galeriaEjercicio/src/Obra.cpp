//
// Created by ASUS on 20/02/2025.
//

#include "Obra.h"
/*
 *ATRIBUTOS
string titulo;
string id;
string fecha;
*/

// Constructor
Obra::Obra(string titulo, string id, string fecha) {
    this->titulo = titulo;
    this->id = id;
    this->fecha = fecha;
}

// Getters
string Obra::getTitulo() {
    return titulo;
}
string Obra::getId() {
    return id;
}
string Obra::getFecha() {
    return fecha;
}

// Setters
void Obra::setTitulo(string titulo) {
    this->titulo = titulo;
}
void Obra::setId(string id) {
    this->id = id;
}
void Obra::setFecha(string fecha) {
    this->fecha = fecha;
}