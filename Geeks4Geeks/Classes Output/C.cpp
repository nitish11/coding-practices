#include<iostream>
#include<stdio.h>
 
using namespace std;
 
class Base
{
public:
  Base()
  {
    fun(); //note: fun() is virtual
  }
  virtual void fun()
  {
    cout<<"\nBase Function";
  }
};
 
class Derived: public Base
{
public:
  Derived(){  fun();}
  virtual void fun()
  {
    cout<<"\nDerived Function\n";
  }
};
 
int main()
{
  Base* pBase = new Derived();
  delete pBase;
  return 0;
}
