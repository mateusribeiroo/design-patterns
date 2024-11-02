#include<list>
#include "observer.h"

#ifndef SUBJECT
#define SUBJECT

class Subject{
  public:
    std::list<Observer> observerList;
    void registerObserver(Observer &obs);
    void removeObserver(Observer &obs);
    void notifyObservers();
};

#endif