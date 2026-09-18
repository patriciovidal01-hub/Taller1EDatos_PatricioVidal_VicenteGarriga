//
// Created by patri on 18-09-2026.
//

#ifndef TALLER1EDATOS_PATRICIOVIDAL_VICENTEGARRIGA_LISTA_H
#define TALLER1EDATOS_PATRICIOVIDAL_VICENTEGARRIGA_LISTA_H
#include <iostream>
#include "Nodo.h"

class Lista {
    protected:
        Nodo<T>* cabeza;
    public:
        Lista(Nodo<T>* cabeza) : cabeza(cabeza) {}
        virtual ~Lista(){}
    
        Nodo<T>* getCabeza() {
            return cabeza;
        }

        Nodo<T>* getUltimo() {
            if (cabeza != nullptr){
                while (cabeza->getSiguiente() != nullptr) {
                    cabeza = cabeza->getSiguiente();
                }
                return cabeza;
            }
            return cabeza;
        }
};


#endif //TALLER1EDATOS_PATRICIOVIDAL_VICENTEGARRIGA_LISTA_H
