#include<iostream>
#include<string>
#include "observer.h"

Observer::Observer(std::string name){
  this->name = name;
}

void Observer::update(){
  std::cout << "Updating Data!" << std::endl;
}

bool Observer::operator==(Observer obs){
  return false;
}