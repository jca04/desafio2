#include <iostream>
#include "database/database.h"

using namespace std;


int main()
{

    try {
        // Crear una tabla si no existe
        //db << "CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT, age INTEGER);";

        // Insertar un usuario
        db << "INSERT INTO tbl_cliente (nombre, apellido, cedula) VALUES (?, ?, ?);" << "Carlos" << "Sanchez" << 12626485;

        // Seleccionar y mostrar los usuarios
        db << "SELECT nombre, apellido, cedula FROM tbl_cliente;" >> [](string nombre, string apellido, int cedula) {
            std::cout << "nombre: " << nombre << " apellido: " << apellido << " cedula: " << cedula << std::endl;
        };

    } catch (sqlite::sqlite_exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
