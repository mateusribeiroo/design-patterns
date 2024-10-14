#include<iostream>
#include "subject.h"
#include "observer.h"

int main(){
  std::cout << "Starting observer" << std::endl;

  Subject *sub = new Subject();
  Observer *obs1 = new Observer("mateus");
  Observer *obs2 = new Observer("friend");

  sub->registerObserver(*obs1);
  sub->registerObserver(*obs2);

  std::cout << "Observador 1: " << obs1->name << std::endl;
  std::cout << "Observador 2: " << obs2->name << std::endl;

  sub->notifyObservers();

  std::cout << "The End!" << std::endl;

  delete obs1, obs2, sub;

  return 0;
}