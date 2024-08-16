#ifndef MODELEXPORTER_H
#define MODELEXPORTER_H

#include <string> // Incluye la clase string de la STL

// Clase para exportar modelos 3D
class ModelExporter {
public:
    bool exportModel(const std::string& path); // Exporta un modelo 3D a un archivo binario
};

#endif // MODELEXPORTER_H
