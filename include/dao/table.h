/*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*/
#ifndef TABLE_H
#define TABLE_H

#include <string>
#include <vector>
#include <sstream>

class Table {
    private:
        std::vector<std::vector<std::string>> m_data;
        std::string m_name;
        std::string m_filePath;

    public:
        Table();
        Table(std::string name, std::string filePath);

        void addDataRow(std::string row);

        unsigned int rowSize();
        unsigned int columnSize();

        std::string getName();
        std::string getFilePath();
};

#endif // TABLE_H