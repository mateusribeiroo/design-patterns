#include <iostream>
#include "../interfaces/FlyBehavior.h"
using namespace std;

class FlyWithWings{
	public:
		void fly();
};

void FlyWithWings::fly(){
	cout << "voando" << endl;
}
