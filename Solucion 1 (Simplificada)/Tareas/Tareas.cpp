#include "Tareas.h"
#include <iostream>

Tarea tareas[] = {
    {"A", 20, ""},
    {"B", 5, ""},
    {"C", 40, "B"},
    {"D", 10, "A"},
    {"E", 5, "D"},
    {"F", 10, "E"},
    {"G", 20, "C"},
    {"H", 25, "G"},
    {"I", 35, ""},
    {"J", 25, ""},
    {"K", 15, "I"},
    {"L", 5, "K"},
    {"M", 25, ""}
};

Tarea lista1[20], lista2[20], lista3[20];
std::string completadas[20];
int suma1 = 0, suma2 = 0, suma3 = 0;
int completadasSize = 0, count1 = 0, count2 = 0, count3 = 0;

bool puedeAgregar(const std::string& dependencia, const std::string completadas[], int completadasSize) {
    if (dependencia == "") return true;
    for (int i = 0; i < completadasSize; ++i) {
        if (completadas[i] == dependencia) return true;
    }
    return false;
}

void imprimirTareas(const Tarea lista[], int size, const std::string& nombre) {
    std::cout << nombre << ":\n";
    int suma = 0;
    for (int i = 0; i < size; ++i) {
        std::cout << "  Tarea " << lista[i].nombre << " (" << lista[i].duracion << " minutos)" << std::endl;
        suma += lista[i].duracion;
    }
    std::cout << "Duracion total: " << suma << " minutos\n\n";
}

int asignacionLista() {
    for (int i = 0; i < sizeof(tareas) / sizeof(tareas[0]); ++i) {
        const Tarea& tarea = tareas[i];

        if (puedeAgregar(tarea.dependencia, completadas, completadasSize)) {

            if (suma1 + tarea.duracion <= 100) {
                lista1[count1++] = tarea;
                suma1 += tarea.duracion;
                completadas[completadasSize++] = tarea.nombre;
            }

            else if (suma2 + tarea.duracion <= 100) {
                lista2[count2++] = tarea;
                suma2 += tarea.duracion;
                completadas[completadasSize++] = tarea.nombre;
            }

            else if (suma3 + tarea.duracion <= 100) {
                lista3[count3++] = tarea;
                suma3 += tarea.duracion;
                completadas[completadasSize++] = tarea.nombre;
            } else {
                std::cout << "No se puede asignar la tarea " << tarea.nombre
                          << " sin exceder el límite.\n";
            }
        } else {
            std::cout << "Dependencia no cumplida para la tarea " << tarea.nombre << ".\n";
        }
    }

    return 0;
}