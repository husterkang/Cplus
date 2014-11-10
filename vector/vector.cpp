#include <math.h>
#include "vector.h"
#include <iostream>
using std::cout;
using std::endl;
namespace VECTOR
{
  const double rad_to_deg = 57.30;
  void Vector::show()
  {
    cout<<"x:"<<x<<endl<<"y:"<<y<<endl<<"mag:"<<mag<<endl<<"ang:"<<ang<<endl<<endl;
  }
  void Vector::set_x()
  {
    x = mag*cos(ang);
  }

  void Vector::set_y()
  {
    y = mag*sin(ang);
  }

  void Vector::set_mag()
  {
    mag = sqrt(x*x+y*y);
  }

  void Vector::set_ang()
  {
    ang=atan2(y,x);
  }

  Vector::Vector()
  {
    x = 0;
    y = 0;
    mag = 0;
    ang = 0;
    mode = 'r';
  }

  Vector::~Vector()
  {
    ;
  }
  Vector::Vector(double n1, double n2, char form)
  {
    mode = form;
    if('r' == mode)
    {
      x = n1;
      y = n2;
      set_mag();
      set_ang();
    }
    else if('p' == mode)
    {
      mag = n1;
      ang = n2;
      set_x();
      set_y();
    }
    else
    {
      cout<<"the default mode is 'r' or 'p'"<<endl;
      cout<<"now, I help to init all parameters to zero!"<<endl;
    }
  }
  void Vector::set(double n1, double n2, char form)
  {
    mode = form;
    if('r' == mode)
    {
      x = n1;
      y = n2;
      set_mag();
      set_ang();
    }
    else if('p' == mode)
    {
      mag = n1;
      ang = n2;
      set_x();
      set_y();
    }
    else
    {
      cout<<"the default mode is 'r' or 'p'"<<endl;
      cout<<"now, I help to init all parameters to zero!"<<endl;
    }
  }

  Vector Vector::operator+ (const Vector &b)const
  {
    Vector sum(x+b.x, y+b.y, 'r');
    return sum;
  }

  Vector Vector::operator- (const Vector &b)const
  {
    Vector sum(x-b.x, y-b.y, 'r');
    return sum;
  }

  Vector Vector::operator* (double n)const
  {
    Vector sum(n*x, n*y, 'r');
    return sum;
  }

  Vector operator*(double n, const Vector &b)
  {
    Vector sum(n*b.x, n*b.y, 'r');
    return sum;
  }

  Vector Vector::operator-()const
  {
    return Vector(-x, -y, 'r');
  }
}
