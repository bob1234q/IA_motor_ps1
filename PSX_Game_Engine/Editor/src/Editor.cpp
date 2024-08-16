#include "Editor.h" // Incluye la cabecera del Editor
#include <QMenuBar> // Incluye la clase QMenuBar para crear menús
#include <QToolBar> // Incluye la clase QToolBar para crear barras de herramientas
#include <QMessageBox> // Incluye la clase QMessageBox para mostrar mensajes

Editor::Editor() {
    setupUI(); // Configura la interfaz de usuario
}

void Editor::setupUI() {
    QMenu* fileMenu = menuBar()->addMenu("Archivo"); // Crea un menú "Archivo" en la barra de menú
    QAction* openAction = new QAction("Abrir", this); // Crea una acción para abrir archivos
    connect(openAction, &QAction::triggered, this, &Editor::openFile); // Conecta la acción "Abrir" con el slot openFile
    fileMenu->addAction(openAction); // Añade la acción al menú "Archivo"

    QAction* exportAction = new QAction("Exportar", this); // Crea una acción para exportar archivos
    connect(exportAction, &QAction::triggered, this, &Editor::exportModel); // Conecta la acción "Exportar" con el slot exportModel
    fileMenu->addAction(exportAction); // Añade la acción al menú "Archivo"

    QToolBar* toolBar = addToolBar("Herramientas"); // Crea una barra de herramientas
    toolBar->addAction(openAction); // Añade la acción "Abrir" a la barra de herramientas
    toolBar->addAction(exportAction); // Añade la acción "Exportar" a la barra de herramientas
}

void Editor::openFile() {
    QString fileName = QFileDialog::getOpenFileName(this, "Abrir Modelo 3D", "", "Modelos 3D (*.obj *.fbx)"); // Abre un diálogo para seleccionar un archivo
    if (!fileName.isEmpty()) {
        // Implementar la carga del modelo usando Assimp si es necesario
    }
}

void Editor::exportModel() {
    QString fileName = QFileDialog::getSaveFileName(this, "Exportar Modelo 3D", "", "Archivos Binarios (*.bin)"); // Abre un diálogo para seleccionar el destino del archivo
    if (!fileName.isEmpty()) {
        ModelExporter exporter; // Crea una instancia de ModelExporter
        if (!exporter.exportModel(fileName.toStdString())) { // Exporta el modelo a un archivo binario
            QMessageBox::warning(this, "Error", "Error al exportar el modelo"); // Muestra un mensaje de error si la exportación falla
        }
    }
}
