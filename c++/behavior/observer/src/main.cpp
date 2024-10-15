#include<iostream>
#include "classes/subject.h"
#include "classes/observer.h"

int main(){
  std::cout << "Starting observer" << std::endl;

  Subject *sub = new Subject();
  Observer *obs1 = new Observer("mateus");
  Observer *obs2 = new Observer("friend");

  sub->registerObserver(*obs1);
  sub->registerObserver(*obs2);

  std::cout << "Observer 1: " << obs1->name << std::endl;
  std::cout << "Observer 2: " << obs2->name << std::endl;

  sub->notifyObservers();

  std::cout << "The End!" << std::endl;

  delete obs1, obs2, sub;

  return 0;
}