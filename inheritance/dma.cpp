#include <iostream>
#include "dma.h"
#include <string.h>

baseDMA::baseDMA(const char *l, int r)
{
  label = new char [strlen(l) + 1];
  strcpy(label, l);
  rating = r;
}

baseDMA::baseDMA(const baseDMA &rs)
{
  label = new char [strlen(rs.label) + 1];
  strcpy(label, rs. label);
  rating = rs.rating;
}

baseDMA::~baseDMA()
{
  delete [] label;
}

baseDMA &baseDMA::operator= (const baseDMA &rs)
{
  if(this == &rs)
    return *this;
  delete [] label;
  label = new char [strlen(rs.label)+1];
  strcpy(label, rs.label);
  rating = rs.rating;
  return *this;
}

std::ostream &operator<< (std::ostream &os, const baseDMA &rs)
{
  os<<"label:"<<rs.label<<'\n';
  os<<"rating:"<<rs.rating<<'\n';
  return os;
}

lacksDMA::lacksDMA(const char *c, const char *l, int r):baseDMA(l, r)
{
  strncpy(color, c, COL_LEN-1);
  color[COL_LEN-1] = '\0';
}

lacksDMA::lacksDMA(const char *c, const baseDMA &rs):baseDMA(rs)
{
  strncpy(color, c, COL_LEN-1);
  color[COL_LEN-1] = '\0';
}

std::ostream &operator<< (std::ostream &os, const lacksDMA &rs)
{
  os<<(const baseDMA&)rs;
  os<<"color:"<<rs.color<<'\n';
  return os;
}

hasDMA::hasDMA(const char *s, const char*l, int r):baseDMA(l, r)
{
  style = new char [strlen(s)+1];
  strcpy(style, s);
}

hasDMA::hasDMA(const char *s, const baseDMA &rs): baseDMA(rs)
{
  style = new char [strlen(s)+1];
  strcpy(style,s);
}

hasDMA::hasDMA(const hasDMA &rs)
{
  hasDMA(rs.style, (const baseDMA &)rs);
}

hasDMA::~hasDMA()
{
  delete [] style;
}

hasDMA &hasDMA::operator= (const hasDMA &rs)
{
  if(this == &rs)
    return *this;
  baseDMA::operator=((const baseDMA &)rs);
  delete [] style;
  style = new char [strlen(rs.style)+1];
  strcpy(style, rs.style);
  return *this;
}

std::ostream &operator<< (std::ostream &os, const hasDMA &rs)
{
  os<<(const baseDMA &)rs;
  os<<"style:"<<rs.style<<'\n';
  return os;
}
