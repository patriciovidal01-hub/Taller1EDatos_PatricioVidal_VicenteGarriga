//
// Created by patri on 06-09-2026.
//

#include "Queue.h"
#include "Paciente.h"
using std::string;

Queue::Queue():cabeza(nullptr) {}
Queue::~Queue() {
    while (cabeza != nullptr) {
        eliminarCabeza();
    }
}

void Queue::eliminarCabeza() {
    if (cabeza != nullptr) {
        Nodo* aux = cabeza;
        cabeza = cabeza->getSiguiente();
        delete aux;
    }
}

void Queue::agregarNodo(Nodo* nodo) {
    if (cabeza == nullptr) {
        cabeza = nodo;
    } else {
        Nodo* aux = cabeza;
        while (aux->getSiguiente() != nullptr) {
            aux = aux->getSiguiente();
        }
        aux->setSiguiente(nodo);
    }
}




