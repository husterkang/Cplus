#include <iostream>

class Time
{
  private:
    int hour;
    int min;
  public:
    Time(int m_hour, int m_min)
    {
      hour = m_hour;
      min = m_min;
    }
    Time(){};
    friend std::ostream & operator<< (std::ostream &os, const Time &t);
    friend Time operator+ (const Time &t1, const Time &t2);
};

std::ostream &operator<< (std::ostream &os, const Time &t)
{
  os<<t.hour<<"hour "<<t.min<<"min"<<std::endl;
  return os;
}

Time operator+ (const Time &t1, const Time &t2)
{
  Time t3;
  t3.hour = t1.hour+t2.hour;
  t3.min = t1.min+t2.min;
  return t3;
}
int main()
{
  using std::cout;
  Time t1(2,30);
  Time t2(3,20);
  Time t3;
  t3 = t1+t2;
  cout<<t3;
  
  return 0;
}
