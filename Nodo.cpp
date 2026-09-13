//
// Created by patri on 12-09-2026.
//
#include <iostream>
#include "Paciente.h"
#include "Nodo.h"

Nodo::Nodo(Paciente paciente): paciente(paciente), siguiente(nullptr) {}
Nodo::~Nodo() {}

void Nodo::setSiguiente(Nodo* nodo) const {
    siguiente = nodo;
}
Nodo* Nodo::getSiguiente() const {
    return siguiente;
}
Paciente Nodo::getPaciente() const {
    return paciente;
}