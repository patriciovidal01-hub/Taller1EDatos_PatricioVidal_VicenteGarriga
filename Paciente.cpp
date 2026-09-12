//
// Created by patri on 06-09-2026.
//

#include "Paciente.h"
#include <iostream>
#include <string>

Paciente:: Paciente(int id, string nombre, int edad, string servicio):
id(id), nombre(nombre), edad(edad), servicio(servicio) {}

Paciente::~Paciente() {}

int Paciente::getId() const {
    return id;
}

string Paciente::getNombre() const{
    return nombre;
}

int Paciente::getEdad() const{
    return edad;
}
string Paciente::getServicio() const {
    return servicio;
}