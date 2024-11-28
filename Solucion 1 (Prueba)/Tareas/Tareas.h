#ifndef TAREAS_H
#define TAREAS_H

#include <string>

struct Tarea {
    std::string nombre;
    int duracion;
    std::string dependencia;
};

bool puedeAgregar(const std::string& dependencia, const std::string completadas[], int completadasSize);
void imprimirTareas(const Tarea lista[], int size, const std::string& nombre);
int asignacionLista();

extern Tarea tareas[];
extern Tarea lista1[20], lista2[20], lista3[20];
extern std::string completadas[20];
extern int suma1, suma2, suma3;
extern int completadasSize, count1, count2, count3;

#endif