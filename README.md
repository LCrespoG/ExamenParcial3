# Link repositorio
https://github.com/LCrespoG/ExamenParcial3.git

(Corregir preferiblemente Solucion 2)

# Enunciado del Problema
Ustedes son Project Managers en una empresa internacional. Reciben una llamada urgente de un alto ejecutivo, informándoles que el CEO de la compañía ha aterrizado en Barcelona desde Estados Unidos y tiene una reunión crucial para las 19:30 en la ciudad. Sin embargo, el ejecutivo cuenta con solo 100 minutos antes de que cierre la facturación para su vuelo desde Madrid a Barcelona.

Objetivo: Debido a la urgencia de la situación, necesitan optimizar las tareas para cumplir con el objetivo de que el ejecutivo llegue a la reunión a tiempo. A continuación se detalla la lista de tareas necesarias, sus descripciones y las duraciones de cada una. Su misión es identificar las dependencias entre las tareas, calcular el tiempo total para completar las tareas en el orden adecuado, y determinar si es posible cumplir con el plazo de 100 minutos.

Tareas, Descripciones y Duraciones:

A: Reserva de vuelo (20 min)

B: Informar a casa para empacar (5 min)

C: Empacar maletas (40 min)

D: Preparación del billete por la agencia (10 min)

E: Recoger el billete de la agencia (5 min)

F: Llevar el billete a la oficina (10 min)

G: Recoger las maletas de casa (20 min)

H: Llevar maletas a la oficina (25 min)

I: Conversación sobre documentos requeridos (35 min)

J: Dictar instrucciones para ausencia (25 min)

K: Reunir documentos (15 min)

L: Organizar documentos (5 min)

M: Viajar al aeropuerto y facturar (25 min)

## Dependencias entre tareas:

Algunas tareas deben ser realizadas antes que otras, por ejemplo, no se puede viajar al aeropuerto antes de haber recogido las maletas. Además, la reserva del vuelo debe completarse antes de recoger el billete, y la preparación del billete debe ocurrir antes de llevar el billete a la oficina.

## Objetivos del Reto:
Definir el Objetivo del Proyecto: Identificar el propósito principal del proyecto (optimizar la gestión del tiempo para cumplir con el plazo de 100 minutos) y no solo las tareas.

Diagrama de Flujo del Cronograma: Crear un diagrama de flujo para visualizar el cronograma del proyecto, teniendo en cuenta solo las dependencias entre tareas y no restricciones de recursos.

Desarrollo de Algoritmo en C++:

Crear un programa en C++ que:

Permita calcular el orden de ejecución de las tareas en función de sus dependencias.

Determine el tiempo total necesario para completar todas las tareas.

Evalúe si es posible completar las tareas en 100 minutos o menos.

Imprima el orden óptimo de ejecución de las tareas y su tiempo total.

## Restricciones:

El tiempo máximo permitido para completar las tareas es de 100 minutos.

El algoritmo debe gestionar de forma eficiente las dependencias entre las tareas, de tal manera que optimice el tiempo de ejecución.

## Entrega:

Código fuente en C++ que implemente la solución al problema.

Diagrama de flujo que represente el cronograma de ejecución de las tareas.

¡Buena suerte y que la optimización esté de su lado!

# 1. Definición del Objetivo
El objetivo es optimizar el tiempo de las tareas para que el ejecutivo complete su agenda en un plazo máximo de 100 minutos.

# 2. Diagrama de Dependencias
Las dependencias se interpretan como un grafo dirigido, donde las tareas son nodos y las dependencias son aristas:

Reserva de vuelo (A) → Preparación del billete (D) → Recoger billete (E) → Llevar billete a la oficina (F)

Informar a casa para empacar (B) → Empacar maletas (C) → Recoger maletas de casa (G) → Llevar maletas a la oficina (H)

Conversación sobre documentos requeridos (I) → Reunir documentos (K) → Organizar documentos (L)

Dictar instrucciones para ausencia (J) (independiente de otras tareas)

Viajar al aeropuerto y facturar (M) requiere que H (maletas en la oficina) y F (billetes en la oficina) estén completadas.

### Diagrama de flujo simplificado:


(A) → (D) → (E) → (F)

(B) → (C) → (G) → (H)

(I) → (K) → (L)

(J)

(H), (F) → (M)

![image](https://github.com/user-attachments/assets/1bfaa356-522d-440f-85c8-05b299efae2d)

En este caso no hay paralelismo por lo que en este grafico no se debe tomar en cuenta.

# 3. Resultados Esperados
Orden de ejecución óptimo: Calculado en función de las dependencias.

Tiempo total: Sumando las duraciones en el orden determinado.

Evaluación del tiempo límite: El programa verifica si el tiempo total es menor o igual a 100 minutos.
# 4. Conclusión
Este enfoque optimiza la gestión del tiempo y garantiza que se respeten las dependencias. Si el tiempo total excede los 100 minutos, será necesario modificar las duraciones de las tareas o reestructurar el flujo de trabajo.
