#include <iostream>
#include "../headers/MallardDuck.hpp"
#include "../headers/FlyWithWings.hpp"
#include "../headers/Quack.hpp"
using namespace std;

MallardDuck::MallardDuck() : Duck(FlyWithWings(), Quack()){
	cout << "Mallard Pato contruido" << endl;
}

void MallardDuck::display(){
	cout << "Pato mallard aparecendo" << endl;
}