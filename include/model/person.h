#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>

#include "address.h"

class Person {
    private:
        std::string m_name;
        char m_uf[2];

    public:
        Person(std::string name, char uf[2]);

};

#endif // PERSON_H