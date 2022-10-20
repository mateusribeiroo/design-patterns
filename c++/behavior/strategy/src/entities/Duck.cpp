#include <iostream>
#include "../interfaces/Duck.hpp"
using namespace std;

Duck::Duck(FlyBehavior flyBehavior, QuackBehavior quackBehavior) : flyBehavior(), quackBehavior(){
	cout << "duck duck" << endl;
}

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
