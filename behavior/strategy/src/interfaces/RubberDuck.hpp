#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H
#include <iostream>
#include "Duck.hpp"

class RubberDuck : public Duck {
    public:
        RubberDuck();
        void display(); 
};
#endif