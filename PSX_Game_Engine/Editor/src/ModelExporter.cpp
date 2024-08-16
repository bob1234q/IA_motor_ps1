#include "ModelExporter.h" // Incluye la cabecera del exportador de modelos
#include <assimp/Importer.hpp> // Incluye la clase Importer de Assimp
#include <assimp/scene.h> // Incluye la clase aiScene de Assimp
#include <assimp/postprocess.h> // Incluye opciones de postprocesamiento de Assimp
#include <fstream> // Incluye la clase fstream para manejo de archivos

bool ModelExporter::exportModel(const std::string& path) {
    Assimp::Importer importer; // Crea una instancia de Importer
    const aiScene* scene = importer.ReadFile(path, aiProcess_Triangulate | aiProcess_FlipUVs); // Lee el archivo de modelo 3D

    if (!scene || scene->mFlags & AI_SCENE_FLAGS_INCOMPLETE || !scene->mRootNode) { // Verifica si la carga fue exitosa
        std::cerr << "Error al cargar el modelo: " << importer.GetErrorString() << std::endl; // Muestra un mensaje de error si falla
        return false;
    }

    std::ofstream outFile(path, std::ios::binary); // Abre un archivo para escritura binaria

    for (unsigned int i = 0; i < scene->mNumMeshes; ++i) {
        aiMesh* mesh = scene->mMeshes[i]; // Obtiene la malla actual

        unsigned int numVertices = mesh->mNumVertices; // Obtiene el número de vértices
        outFile.write((char*)&numVertices, sizeof(unsigned int)); // Escribe el número de vértices en el archivo
        outFile.write((char*)mesh->mVertices, sizeof(aiVector3D) * numVertices); // Escribe los vértices en el archivo
    }

    outFile.close(); // Cierra el archivo
    return true; // Retorna true si la exportación fue exitosa
}
