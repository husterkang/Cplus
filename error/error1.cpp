#include <iostream>
#include <cstdlib>
#include <exception>
double hmean(double, double)throw(int);
void myquit()
{
  std::cout<<"terminating due to uncaught exception\n";
  exit(1);
}

void myunexpect()
{
  std::cout<<"terminate due to unexpect!\n";
  exit(1);
}

int main(void)
{
  std::set_terminate(myquit);
  std::set_unexpected(myunexpect);
  double x, y, z;
  std::cout<<"Enter two numbers: ";
  while(std::cin>>x>>y)
  {
    try
    {
      z = hmean(x,y);
    }

    catch(const char *s)
    {
      std::cout<<s<<'\n';
      std::cout<<"Enter a new pair of numbers: ";
      continue;
    }

    catch(int n)
    {
      std::cout<<n<<'\n';
      std::cout<<"in sec!\n";
      continue;
    }

/*    catch(...)
    {
      std::cout<<"i am the default!\n";
    }*/
    std::cout<<"the mean of "<<x<<" and "<<y<<" is "<<z<<'\n';
    std::cout<<"Enter next two(q to quit): ";
  }

  std::cout<<"Bye~\n";
  return 0;
}

double hmean(double a, double b)throw(int)
{
  if(a == -b)
    throw 1.12;
/*  catch(const char*s)
  {
    std::cout<<"error in hmean\n";
  }*/
  return 2.0*a*b/(a+b);
}
