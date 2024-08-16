#include <stdio.h>
#include <stdlib.h>
#include "engine.h"

int main() {
    printf("Inicio del programa\n");

    inicializarMotor();  // Inicializa el motor

    printf("Motor inicializado\n");

    // Bucle principal
    while (1) {
        procesarEntradas();
        actualizarJuego();
        renderizar();
    }

    return 0;
}
