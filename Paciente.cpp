//
// Created by patri on 06-09-2026.
//

#include "Paciente.h"
#include <iostream>
#include <string>
using std::string;

Paciente:: Paciente(int id, string nombre, int edad, Servicio servicio):
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
Servicio Paciente::getServicio() const {
    return servicio;
}