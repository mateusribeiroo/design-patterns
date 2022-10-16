#include <iostream>
#include "FlyWithWings.h"
#include "Quack.h"

using namespace std;

class MallardDuck{
	public:
		void Duck();
		void quack();
		void fly();
}

void Duck::Duck(){
	flyBehavior = new FlyWithWings();
	quackBehavior = new Quack();
}

void Duck::fly(){
	flyBehavior.fly();
}

void Duck::quack(){
	quackBehavior.quack();
}