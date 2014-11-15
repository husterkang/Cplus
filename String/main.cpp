#include <iostream>
#include "string.h"

int main()
{ 
  using std::cout;
  using std::endl;
/*
  String s1("cgk");
  cout<<s1;
  String s2("hust");
  cout<<s2;
  String s3 = s1;//just use construcor, not first con,then assignment
  cout<<s3;
  String s4;
  s4 = s2;
  cout<<s4;//use assignment
  String s5;
  (s5="husterkang")="huster-kang";
  cout<<s5;
*/
/*
  String s1("cgk");
  String s2("cgk");
  String s3("hust");
  cout<<(s1>s3)<<endl;
  cout<<(s1==s3)<<endl;
  cout<<(s1<s3)<<endl;
  cout<<(s1==s2)<<endl;
*/
  String s1("cgk");
  char *s = "mabye";
//  std::cin.getline(s, 40);
  String s2 = s;
  cout<<s2;
  s2[0] = 'r';
  s1[0] = 'r';
  cout<<s1<<s2;
  return 0;
}
