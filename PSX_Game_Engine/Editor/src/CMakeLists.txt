cmake_minimum_required(VERSION 3.10) // Versión mínima requerida de CMake
project(PSX_Game_Editor) // Nombre del proyecto

set(CMAKE_CXX_STANDARD 17) // Establece el estándar de C++ a utilizar

find_package(Qt5 COMPONENTS Widgets REQUIRED) // Busca las librerías de Qt5 necesarias
find_package(assimp REQUIRED) // Busca la librería Assimp

add_executable(Editor
    src/main.cpp
    src/Editor.cpp
    src/ModelExporter.cpp
)

target_link_libraries(Editor Qt5::Widgets assimp) // Enlaza las librerías necesarias
