#include <iostream>
#include "database.h"

using namespace std;

Database::Database(const char *filename) : db(nullptr) {
    if(openDatabase(filename)) {
        cout << "Conexion establecida" << endl;
    } else {
        cerr << "Error al abrir la base de datos" << endl;
    }
}

Database::~Database() {
    closeDatabase();
}

bool Database::openDatabase(const char *filename) {
    int exit = sqlite3_open(filename, &db);
    if (exit) {
        cerr << "Error al abrir la base de datos: " << sqlite3_errmsg(db) << endl;
        return false;
    }

    return true;
}

void Database::closeDatabase() {
    if (db) {
        sqlite3_close(db);
        db = nullptr;
        cout << "Conexion a la base de datos cerrada" << endl;
    }
}
