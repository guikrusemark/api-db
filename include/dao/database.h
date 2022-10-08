/**
* @author @guikrusemark
* @brief Database class creates and manages .CSV tables.
*/
// TODO -> resolve loadTable() BUG when file is not loaded in gdb but it is in make run

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
        
        std::string m_rootPath {"./db/"};
        std::string m_usualExtension {"csv"};
        bool m_connected {false};

    public:
        Database();

        void setRootPath(const std::string path);
        std::string getRootPath();
        void setUsualExtension(const std::string extension);
        std::string getUsualExtension();

        void connect();
        void connect(const std::string path);
        void connect(const std::string path, const std::string extension);
        void disconnect();
        bool isConnected();

        void loadTable(const std::string nameOfTable);
};

#endif // DATABASE_H