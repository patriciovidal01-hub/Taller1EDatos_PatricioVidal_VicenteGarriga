//
// Created by patri on 19-09-2026.
//

#include "Stack.h"

Stack::Stack() : atencionCabeza(nullptr){}
Stack::~Stack(){}

void Stack::push(Nodo<Paciente>* nodo) {
    nodo->setSiguiente(atencionCabeza);
    atencionCabeza = nodo;
}
