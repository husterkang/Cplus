#include <iostream>
using namespace std;

class test
{
  private:
    int a;
    int b;
    int c;
  public:
//    test(const test &t);
    test(int , int , int);
    void show() {cout<<a<<'\n'<<b<<'\n'<<c<<endl;}
};

//test::test(const test &t)
//{
//  a = t.a;
 // b = t.b;
 // c = t.c;
//}

test::test(int a_m, int b_m, int c_m)
{
  a = a_m;
  b = b_m;
  c = c_m;
}

int main()
{
  test t1(1,2,3);
  test t2 = t1;
  t2.show();
  return 0;
}
