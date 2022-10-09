#ifndef DOG_H
#define DOG_H

#include <string>

#include "person.h"

class Dog {
    private:
        uint id;
        std::string m_name;
        std::string m_color;
        std::string m_age;
        Person m_breeder;
        bool m_alive;
        char m_sex;

    public:
        Dog(uint id, std::string name);

        void setName(std::string name);
        void setColor(std::string color);
        void setAge(std::string age);
        void setBreeder(Person breeder);
        void setAlive(bool alive);
        void setSex(char sex);

        std::string getName();
        std::string getColor();
        std::string getAge();
        Person getBreeder();
        bool isAlive();
        char getSex();
};

#endif // DOG_H