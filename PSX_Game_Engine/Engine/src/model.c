// model.c
#include <stdio.h>
#include <stdlib.h>
#include "model.h"

Modelo3D* cargarModelo(const char* filename) {
    // Implementación ficticia
    Modelo3D* modelo = (Modelo3D*)malloc(sizeof(Modelo3D));
    if (modelo == NULL) {
        return NULL;
    }
    modelo->vertices = (float*)malloc(100 * sizeof(float)); // Ejemplo
    if (modelo->vertices == NULL) {
        free(modelo);
        return NULL;
    }

    // Leer datos del archivo y llenar la estructura

    return modelo;
}
