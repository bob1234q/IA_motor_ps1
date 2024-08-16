#ifndef EDITOR_H
#define EDITOR_H

#include <QMainWindow> // Incluye la clase QMainWindow de Qt
#include <QFileDialog> // Incluye la clase QFileDialog para abrir diálogos de archivos
#include "ModelExporter.h" // Incluye la cabecera del exportador de modelos

// Clase Editor que hereda de QMainWindow
class Editor : public QMainWindow {
    Q_OBJECT

public:
    Editor(); // Constructor del editor

private slots:
    void openFile(); // Abre un archivo de modelo 3D
    void exportModel(); // Exporta el modelo 3D a un archivo binario

private:
    void setupUI(); // Configura la interfaz de usuario del editor
};

#endif // EDITOR_H
