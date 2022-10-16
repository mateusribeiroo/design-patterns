#include <iostream>
#include "FlyBehavior.h"
#include "QuackBehavior.h"
using namespace std;

class Duck{

	FlyBehavior flyBehavior;
	QuackBehavior quackBehavior;

	public:
		void swin();
		void display();
		void quack();
		void fly();
}

void Duck::swin(){
	cout << "Nadando" << endl;
}

void Duck::display(){
	cout << "Aparecendo" << endl;
}

void Duck::quack(){
	quackBehavior.quack();
}

void Duck::fly(){
	flyBehavior.fly();
}
