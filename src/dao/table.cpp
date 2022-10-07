#include "dao/table.h"

Table::Table() {}
Table::Table(std::string name, std::string filePath) {
    m_name = name;
    m_filePath = filePath;
}
Table::Table(std::string name, std::string filePath, bool hasHeader) {
    m_name = name;
    m_filePath = filePath;
    m_hasHeader = hasHeader;
}

void Table::addDataRow(std::string row) {
    std::vector<std::string> dataRow;

    std::stringstream rowStream(row);
    std::string cell;

    while (std::getline(rowStream, cell, ',')) {
        dataRow.push_back(cell);
    }

    m_dataMatrix.push_back(dataRow);
}

unsigned int Table::rowCount() {
    if(this->hasHeader()) {
        return m_dataMatrix.size() - 1;
    } else {
        return m_dataMatrix.size();
    }
}
unsigned int Table::columnCount() {
    if(this->rowCount() != 0) {
        return m_dataMatrix[0].size();
    }
    return 0;
}

std::string Table::getName() {
    return m_name;
}
std::string Table::getFilePath() {
    return m_filePath;
}
bool Table::hasHeader() {
    return m_hasHeader;
}