//
// Created by patri on 06-09-2026.
//

#include "Queue.h"
#include "Paciente.h"

Queue::Queue():cabeza(nullptr) {}
Queue::~Queue() {
    while (cabeza != nullptr) {
        eliminarCabeza();
    }
}

void Queue::eliminarCabeza() {
    if (cabeza != nullptr) {
        Nodo<Paciente>* aux = cabeza;
        cabeza = cabeza->getSiguiente();
        delete aux;
    }
}

void Queue::agregarNodo(Nodo<Paciente>* nodo) {
    if (cabeza == nullptr) {
        cabeza = nodo;
    } else {
        Nodo<Paciente>* aux = cabeza;
        while (aux->getSiguiente() != nullptr) {
            aux = aux->getSiguiente();
        }
        aux->setSiguiente(nodo);
    }
}




