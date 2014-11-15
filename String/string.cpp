#include <iostream>
#include "string.h"
#include <cstring>

int String::num_strings = 0;
String::String(const char*s)
{
  num_strings++;
  len = strlen(s);
  str = new char [len+1];
  strcpy(str, s);
}

String::String()
{
  num_strings++;
  str = new char [1];
  str = '\0';
}

String::String(const String &s)
{
  std::cout<<"I am copy class!!"<<'\n';
  num_strings++;
  len = s.len;
  str = new char [len+1];
  strcpy(str, s.str);
}

String::~String()
{
  num_strings--;
  std::cout<<"leaveing...:"<<'\n';
  std::cout<<"num_strings:"<<num_strings<<'\n'<<"str:"\
    <<str<<'\n'<<'\n';
  delete [] str;
}

int String::HowMany()
{
  return num_strings;
}

ostream &operator<< (ostream &os, const String &s)
{
  std::cout<<"the str:"<<s.str<<'\n'<<"the len:"<<s.len<<'\n'<<\
    "the num_strings:"<<String::num_strings<<'\n'<<'\n';
}

String &String::operator= (const String &s)
{
  if(this == &s)
    return *this;
  delete [] str;//delete be pre str!!, if str is null, that is ok.
  len = s.len;
  str = new char [len+1];
  strcpy(str, s.str);
  return *this;
}

String &String::operator= (const char *s)
{
  delete [] str;
  len = strlen(s);
  str = new char [len+1];
  strcpy(str, s);
  return *this;
}

char &String::operator[] (int i)
{
  return str[i];
}

const char &String::operator[] (int i)const
{
  return str[i];
}

bool operator< (const String &st1, const String &st2)
{
  return (strcmp(st1.str, st2.str)<0);
}

bool operator> (const String &st1, const String &st2)
{
  return (strcmp(st1.str, st2.str)>0);
}

bool operator== (const String &st1, const String &st2)
{
  return (strcmp(st1.str, st2.str)==0);
}

