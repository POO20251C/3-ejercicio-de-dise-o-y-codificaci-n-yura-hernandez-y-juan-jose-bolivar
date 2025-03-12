//
// Created by Yura on 12/03/2025.
//

#include "Producto.h"


Producto::Producto(string nombre, string id,  int precio, int disponible) {
    this->nombre = nombre;
    this->id = id;
    this->precio = precio;
    this->disponible = disponible;
}

string Producto::getNombre() {
    return nombre;
}

string Producto::getId() {
    return id;
}

int Producto::getPrecio() {
    return precio;
}

int Producto::getDisponible() {
    return disponible;
}

void Producto::setNombre(string nombre) {
    this->nombre = nombre;
}

void Producto::setId(string id) {
    this->id = id;
}

void Producto::setPrecio(int precio) {
    this->precio = precio;
}

void Producto::setDisponible(int disponible) {
    this->disponible = disponible;
}