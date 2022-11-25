#include "DB.hpp"


#include <iostream>
#include <string>
#include "sqlite-amalgamation-3400000/sqlite3.h"

using namespace std;

// Create a callback function  
int callback(void* NotUsed, int argc, char** argv, char** azColName) {


    // Return successful
    return 0;
}

int main() {

    // Pointer to SQLite connection
    sqlite3* db;

    // Save any error messages
    char* zErrMsg = 0;

    // Save the result of opening the file
    int rc;

    // Save any SQL
    string sql;

    // Save the result of opening the file
    rc = sqlite3_open("example.db", &db);

    if (rc) {
        // Show an error message
        cout << "DB Error: " << sqlite3_errmsg(db) << endl;
        // Close the connection
        sqlite3_close(db);
        // Return an error
        return(1);
    }

    

    // Run the SQL (convert the string to a C-String with c_str() )
    rc = sqlite3_exec(db, sql.c_str(), callback, 0, &zErrMsg);

    // Close the SQL connection
    sqlite3_close(db);

    return 0;
}