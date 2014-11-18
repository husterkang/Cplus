#include <iostream>

class Base
{
  public:
   virtual void show(){ std::cout<<"I am Base"<<'\n';}
};

class Son: public Base
{
  public:
    virtual void show() {Base::show();std::cout<<"I am Son of bitch"<<'\n';}
};

int main()
{
  Base b;
  Son s;
  s.show();
  return 0;
}

