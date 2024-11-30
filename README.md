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

# 3. Desarrollo del Algoritmo en C++

# 4. Resultados Esperados
Orden de ejecución óptimo: Calculado en función de las dependencias.

Tiempo total: Sumando las duraciones en el orden determinado.

Evaluación del tiempo límite: El programa verifica si el tiempo total es menor o igual a 100 minutos.
# 5. Conclusión
Este enfoque optimiza la gestión del tiempo y garantiza que se respeten las dependencias. Si el tiempo total excede los 100 minutos, será necesario modificar las duraciones de las tareas o reestructurar el flujo de trabajo.
