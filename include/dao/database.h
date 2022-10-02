/*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*/
#ifndef DATABASE_H
#define DATABASE_H

#include <dao/table.h>

#include <iostream>
#include <string>
#include <map>
#include <fstream>

class Database {
    private:
        std::map<std::string, Table> m_tables;
        
        std::string m_rootPath = "./db/";
        std::string m_usualExtension = "csv";
        bool m_connected = false;

    public:
        Database();

        void setRootPath(std::string path);
        std::string getRootPath();
        void setUsualExtension(std::string extension);
        std::string getUsualExtension();

        void connect();
        void connect(const std::string path);
        void connect(const std::string path, const std::string extension);
        void disconnect();
        bool isConnected();

        void loadTable(std::string nameOfTable);
};

#endif // DATABASE_H