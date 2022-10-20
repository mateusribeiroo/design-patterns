#include <iostream>
#include "../interfaces/MallardDuck.hpp"
#include "../interfaces/FlyWithWings.hpp"
#include "../interfaces/Quack.hpp"
using namespace std;

MallardDuck::MallardDuck() : Duck(FlyWithWings(), Quack()){
	cout << "Mallard Pato contruido" << endl;
}

void MallardDuck::display(){
	cout << "Pato mallard aparecendo" << endl;
}