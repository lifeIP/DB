#include "DB.hpp"


// Create a callback function  
int callback(void* NotUsed, int argc, char** argv, char** azColName) {


	// Return successful
	return 0;
}

DB::DB(const string& DBNAME) :
	exit(sqlite3_open(DBNAME.c_str(), &db))
{
}

int DB::add(const string& IMG, const string& PERSONAL_DATA)
{
	return 0;
}

string DB::get_IMG(int ID) const
{
	return string();
}

string DB::get_PERSONAL_DATA(int ID) const
{
	return string();
}

DB::~DB()
{
	sqlite3_close(db);
}
