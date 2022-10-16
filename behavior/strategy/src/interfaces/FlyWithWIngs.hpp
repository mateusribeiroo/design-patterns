#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H
#include <iostream>
using namespace std;

class FlyWithWings : public FlyBehavior{
    public:
        fly() override;
}
#endif