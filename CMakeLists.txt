cmake_minimum_required(VERSION 3.29)

project(Examenes)

set(CMAKE_CXX_STANDARD 20)

add_executable(Examen1
        "Solucion 1 (Simplificada)/main.cpp"
        "Solucion 1 (Simplificada)/Tareas/Tareas.cpp")

add_executable(Examen2
        "Solucion 2 (Mas especifico)/main.cpp"
        "Solucion 2 (Mas especifico)/clases/Funciones.cpp"
        "Solucion 2 (Mas especifico)/clases/Tarea.h"
        "Solucion 2 (Mas especifico)/clases/Funciones.h")


# add_executable(ExameneRuben
#       "Solucion 3 (Clase Ruben)/main.cpp"
#       "Solucion 3 (Clase Ruben)/actor/Actor.cpp"
#       "Solucion 3 (Clase Ruben)/crud/crud.cpp"
#       "Solucion 3 (Clase Ruben)/Tarea/Tarea.cpp")