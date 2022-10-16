#ifndef DUCK_H
#define DUCK_H
#include<iostream>
#include "../interfaces/FlyBehavior.hpp"
#include "../interfaces/QuackBehavior.hpp"
using namespace std;

class Duck{
    private:
        FlyBehavior flyBehavior;
        QuackBehavior quackBehavior;
    public:
        Duck(FlyBehavior, QuackBehavior);
        void swin();
        void display();
        void performQuack();
        void performFly();
};
#endif