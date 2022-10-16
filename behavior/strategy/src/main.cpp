#include <iostream>
#include "../entities/Duck.cpp"
#include "../entities/MallardDuck.cpp"

using namespace std;

int main(){
	Duck mallard = new MallardDuck();
	mallard.performQuack();

	return 0;
}
