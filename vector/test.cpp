#include "vector.h"
#include <iostream>

int main(void)
{
  using namespace VECTOR;
  using std::cout;
  using std::endl;
  Vector v2(3, 4, 'r');
  Vector v(6, 8, 'r');
  Vector v3;
  v3 = -v;
  v3.show();
  return 0;
}
