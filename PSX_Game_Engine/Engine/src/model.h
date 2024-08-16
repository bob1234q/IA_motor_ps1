// model.h
#ifndef MODEL_H
#define MODEL_H

typedef struct {
    // Otros miembros...
    float *vertices; // Asegúrate de que este miembro esté definido si lo usas
    // Otros miembros...
} Modelo3D;

// Declaraciones de funciones
Modelo3D* cargarModelo(const char* filename);

#endif // MODEL_H
