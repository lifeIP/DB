#pragma once
#include "sqlite-amalgamation-3400000/sqlite3.h"
#include <string>

using namespace std;

class DB
{
	sqlite3* db;
	int exit = 0;

public:
	/// <summary>
	/// Open the database with the name from the parameter.
	/// </summary>
	/// <param name="DBNAME">Database name</param>
	DB(const string& DBNAME);
	
	/// <summary>
	/// Add a new character.
	/// </summary>
	/// <param name="IMG">The path to the photo of the character's face.</param>
	/// <param name="PERSONAL_DATA">The path to the file that contains information about the character.</param>
	/// <returns>Character identification number.</returns>
	int add(const string& IMG, const string& PERSONAL_DATA);

	/// <param name="ID">Character identification number.</param>
	/// <returns>The path to the file containing the character's face.</returns>
	string get_IMG(int ID)const;

	/// <param name="ID">Character identification number.</param>
	/// <returns>The path to the file containing the character's personal information.</returns>
	string get_PERSONAL_DATA(int ID)const;

	~DB();
};