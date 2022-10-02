#include <iostream>

#include "dao/database.h"

int main() {

	Database db = Database();
	db.connect("./db/", "csv");
	db.loadTable("caes");
	db.loadTable("inseminacoes");
	db.loadTable("inseminacoe");

	return 0;
}