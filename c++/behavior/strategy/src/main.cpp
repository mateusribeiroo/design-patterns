#include <iostream>
#include "interfaces/Duck.hpp"
#include "interfaces/MallardDuck.hpp"

using namespace std;

int main(){
	MallardDuck md;
	md.performQuack();

	return 0;
}
