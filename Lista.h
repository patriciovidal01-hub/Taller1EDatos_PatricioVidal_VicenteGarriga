//
// Created by patri on 18-09-2026.
//

#ifndef TALLER1EDATOS_PATRICIOVIDAL_VICENTEGARRIGA_LISTA_H
#define TALLER1EDATOS_PATRICIOVIDAL_VICENTEGARRIGA_LISTA_H
#include <iostream>
#include "Nodo.h"

template <typename T>
class Lista {
    protected:
        Nodo<T>* cabeza;
    public:
        Lista(Nodo<T>* cabeza) : cabeza(cabeza);
        virtual ~Lista();
    
        Nodo<T>* getCabeza() {
            return cabeza;
        }

        Nodo<T>* getUltimo() {
            if (cabeza != nullptr){
                Nodo<T>* ultimo = cabeza;
                while (ultimo->getSiguiente() != nullptr) {
                    ultimo = ultimo->getSiguiente();
                }
                return ultimo;
            }
            return cabeza;
        }
};


#endif //TALLER1EDATOS_PATRICIOVIDAL_VICENTEGARRIGA_LISTA_H
