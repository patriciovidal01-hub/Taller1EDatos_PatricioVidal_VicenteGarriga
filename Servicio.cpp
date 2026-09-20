//
// Created by patri on 19-09-2026.
//

#include "Servicio.h"
using namespace std;

Servicio::Servicio(string servicio, Lista_Pacientes* lista) : servicio(servicio), pacientes(lista) {}
Servicio::~ Servicio() {}

string Servicio ::getServicio() {
    return servicio;
}

Lista_Pacientes* Servicio::getPacientes() {
    return pacientes;
}
