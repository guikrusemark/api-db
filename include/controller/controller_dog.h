#ifndef CONTROLLER_DOG_H
#define CONTROLLER_DOG_H

#include <string>

#include "dog.h"
#include "view_dog.h"

class ControllerDog {
    private:
        Dog m_dog;

    public:
        void showDogAtLine(Dog dog, uint line);
        
        
};

#endif // CONTROLLER_DOG_H