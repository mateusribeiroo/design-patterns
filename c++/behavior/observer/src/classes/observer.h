#include<string>

#ifndef OBSERVER
#define OBSERVER

class Observer{
  public:
    bool operator==(Observer other);
    std::string name;
    Observer(std::string name);
    void update();
};

#endif 