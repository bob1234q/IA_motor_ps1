#include <QApplication> // Incluye la clase QApplication de Qt
#include "Editor.h" // Incluye la cabecera del Editor

int main(int argc, char* argv[]) {
    QApplication app(argc, argv); // Crea una aplicación Qt
    Editor editor; // Instancia la clase Editor
    editor.show(); // Muestra la ventana principal del editor
    return app.exec(); // Ejecuta el bucle principal de la aplicación
}
