#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address {
    private:
        std::string m_zipcode;
        std::string m_street;
        std::string m_number;
        std::string m_city;
        std::string m_state;

    public:
        Address();

};

#endif // ADDRESS_H