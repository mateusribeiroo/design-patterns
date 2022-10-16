#include <iostream>
#include "../interfaces/Duck.cpp"
#include "../interfaces/FlyBehavior.h"
#include "../interfaces/QuackBehavior.h"
using namespace std;

void Duck::swin(){
	cout << "Nadando" << endl;
}

void Duck::display(){
	cout << "Aparecendo" << endl;
}

void Duck::performQuack(){
	quackBehavior.quack();
}

void Duck::performFly(){
	flyBehavior.fly();
}
