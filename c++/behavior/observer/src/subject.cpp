#include "subject.h"

void Subject::registerObserver(Observer &obs){
  observerList.push_back(obs);
}

void Subject::removeObserver(Observer &obs){
  observerList.remove(obs);
}

void Subject::notifyObservers(){
  for(auto obs : observerList){
    obs.update();
  }
}