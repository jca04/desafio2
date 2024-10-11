#ifndef DATABASE_H
#define DATABASE_H

#include <sqlite/sqlite3.h>

class Database
{
private:
    sqlite3 *db;
public:
    Database(const char *filename); // Constructor que toma el nombre del archivo de la base de datos

    ~Database(); // Destructor que cierra la base de datos

    bool openDatabase(const char *filename);

    void closeDatabase();
};

#endif // DATABASE_H
