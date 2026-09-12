//
// Created by patri on 06-09-2026.



#ifndef TALLER1EDATOS_PATRICIOVIDAL_VICENTEGARRIGA_PACIENTE_H
#define TALLER1EDATOS_PATRICIOVIDAL_VICENTEGARRIGA_PACIENTE_H

#include <iostream>
#include <string>
using std::string;

class Paciente {

    private:
        int id;
        string nombre;
        int edad;
        string servicio;
    public:
        Paciente(int id, string nombre, int edad, string servicio);
        ~Paciente();

        int getId() const;
        string getNombre() const;
        int getEdad() const;
        string getServicio() const;

};
#endif //TALLER1EDATOS_PATRICIOVIDAL_VICENTEGARRIGA_PACIENTE_H
