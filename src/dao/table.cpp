#include "dao/table.h"

Table::Table() {}
Table::Table(std::string name, std::string filePath) {
    m_name = name;
    m_filePath = filePath;
}

void Table::addDataRow(std::string row) {
    std::vector<std::string> dataRow;

    std::stringstream rowStream(row);
    std::string cell;

    while (std::getline(rowStream, cell, ',')) {
        dataRow.push_back(cell);
    }

    m_data.push_back(dataRow);
}

unsigned int Table::rowSize() {
    return m_data.size();
}
unsigned int Table::columnSize() {
    if(this->rowSize() != 0) {
        return m_data[0].size();
    }
    return 0;
}

std::string Table::getName() {
    return m_name;
}
std::string Table::getFilePath() {
    return m_filePath;
}