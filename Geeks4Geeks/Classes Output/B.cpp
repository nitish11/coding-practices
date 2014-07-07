
#include<iostream>
 
using namespace std;

class Base
{
  public:
  void print()
     { cout << " Base's constructor called" << endl;  }
};

class Base1 :virtual public Base {
 public:void print(){ cout << " Base1's constructor called" << endl;  }
};
 
class Base2 :virtual public Base{
 public:void print() { cout << "Base2's constructor called" << endl;  }
};
 
class Derived: public Base1, public Base2 {
  public:void print(){ cout << " Base's con:";}
};
 
int main()
{
   Derived d;
   d.print();
   return 0;
}
