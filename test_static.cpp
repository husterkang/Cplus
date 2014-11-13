#include <iostream>
#include <stdio.h>
void test()
{
  static int i = 1;
  i++;
  printf("i:%d\n", i);
}

int main()
{
  int i = 0;
  for( ; i < 10; i++)
    test();

  return 0;
}

