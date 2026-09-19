//
// Created by patri on 19-09-2026.
//

#ifndef TALLER1EDATOS_PATRICIOVIDAL_VICENTEGARRIGA_LISTA_SERVICIOS_H
#define TALLER1EDATOS_PATRICIOVIDAL_VICENTEGARRIGA_LISTA_SERVICIOS_H
#include "Lista.h"
#include "Paciente.h"
#include "Servicio.h"


class Lista_Servicios : public Lista<Servicio> {
    public:
        Lista_Servicios();
        virtual ~Lista_Servicios();
};


#endif //TALLER1EDATOS_PATRICIOVIDAL_VICENTEGARRIGA_LISTA_SERVICIOS_H
