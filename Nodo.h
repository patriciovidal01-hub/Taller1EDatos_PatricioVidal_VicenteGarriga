//
// Created by patri on 12-09-2026.
//

#ifndef TALLER1EDATOS_PATRICIOVIDAL_VICENTEGARRIGA_NODO_H
#define TALLER1EDATOS_PATRICIOVIDAL_VICENTEGARRIGA_NODO_H
#include <iostream>
#include "Paciente.h"

class Nodo {
private:
    Paciente paciente;
    Nodo* siguiente;
public:
    Nodo(Paciente paciente);
    ~Nodo();
    void setSiguiente(Nodo* nodo) const;
    Nodo* getSiguiente() const;
    Paciente getPaciente() const;
};

#endif //TALLER1EDATOS_PATRICIOVIDAL_VICENTEGARRIGA_NODO_H
