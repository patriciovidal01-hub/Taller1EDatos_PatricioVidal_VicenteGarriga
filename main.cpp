#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Queue.h"
#include "Paciente.h"
#include "Nodo.h"
using namespace std;

void leerArchivo(Queue* colaPacientes ) {
    ifstream archivo("pacientes.txt");
    string linea;

    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            stringstream ss(linea);
            string id_str, nombre, edad_str, servicio;

            getline(ss, id_str, ';');
            getline(ss, nombre, ';');
            getline(ss, edad_str, ';');
            getline(ss, servicio, ';');

            int id = stoi(id_str);
            int edad = stoi(edad_str);


            Paciente p(id, nombre, edad, servicio);
            colaPacientes->agregarNodo(new Nodo<Paciente>(p));
        }
        archivo.close();
        cout << "Archivo cargado correctamente en la Cola." << endl;

    } else {
        cout << "Error: No se encontro pacientes.txt" << endl;
    }
}

int main() {
    Queue* colaPacientes = new Queue();
    leerArchivo(colaPacientes);
    string opcion;

    do {
        cout << " -------- Hospital Marmaja -------- " << endl;
        cout << "1. Atender pacientes " << endl;
        cout << "2. Ver departamento " << endl;
        cout << "3. Revisar historial de atención " << endl;
        cout << "4. Salir " << endl;

        cin >> opcion;

        if (opcion == "1") {


        } else if (opcion == "2") {


        } else if (opcion == "3") {


        } else if (opcion == "4") {
            break;

        } else {
            cout << "Opcion Invalida" << endl;
        }

    } while (opcion != "4");
    delete colaPacientes;
    return 0;
}



