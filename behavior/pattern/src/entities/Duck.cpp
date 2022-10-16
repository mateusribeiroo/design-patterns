#include <iostream>
#include "../interfaces/FlyBehavior.h"
#include "../interfaces/QuackBehavior.h"
using namespace std;

class Duck{

	FlyBehavior flyBehavior;
	QuackBehavior quackBehavior;

	public:
		void swin();
		void display();
		void performQuack();
		void performFly();
};

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
