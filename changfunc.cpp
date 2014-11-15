#include <iostream>

class Stun
{
  private:
    int stone;
    double pounds;
  public:
    Stun();
    Stun(double);
    void display();
    operator int()const;
};

Stun::operator int()const
{
  return int(pounds);
}

Stun::Stun()
{
  stone = 0;
  pounds = 0;
}

Stun::Stun(double lb)
{
  pounds = lb;
  stone = 10;
}

void Stun::display()
{
  using std::cout;
  cout<<stone<<'\n'<<pounds<<'\n';
}

int main()
{
  using std::cout;
  Stun test;
  float lb = 5.5;//use Stun(double);
  test = lb;
  double la = test;
  cout<<la<<'\n';

  return 0;
}
