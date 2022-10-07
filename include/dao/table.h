
// * TO DO -> adjusts tables with header
// * TO DO -> atRow() : vector<string>
// * TO DO -> atColumn() : vector<string>
// * TO DO -> atCell() : string
// * TO DO -> syncFile()

/**
* @author @guikrusemark
* @date 2022/10/05
* @brief This file contains the Table class.
* @version 1.0
* @license Open Source
* 
*/
#ifndef TABLE_H
#define TABLE_H

#include <string>
#include <vector>
#include <sstream>

class Table {
    private:
        std::vector<std::vector<std::string>> m_dataMatrix;
        std::string m_name;
        std::string m_filePath;
        std::vector<std::string> m_header;

        bool m_hasHeader {false};

    public:
        Table();
        Table(std::string name, std::string filePath);
        Table(std::string name, std::string filePath, bool hasHeader);

        /**
        * @brief Adds a row to the table.
        * @param row The row to be added. 
        */
        void addDataRow(std::string row);

        unsigned int rowCount();
        unsigned int columnCount();

        std::string getName();
        std::string getFilePath();
        bool hasHeader();
        std::vector<std::string> getHeader();
};

#endif // TABLE_H
