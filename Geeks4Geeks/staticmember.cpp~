#include <iostream>
using namespace std;
 
class A
{
    int x;
public:
    A() { cout << "A's constructor called " << endl;  }
};


class C
{
    int y;
public:
    C() { cout << "C's constructor called " << endl;  }
};
 
class B
{
    static A a;
    static C c;
public:
    B() { cout << "B's constructor called " << endl; }
   // static A getA() { cout<<"getA\n"; return a; }
};
 
A B::a;  // definition of a
C B::c;  // definition of c

int main()
{
    // static member 'a' is accessed without any object of B
    cout<<"hello\n";
    //B b1;
    //B b2;
    //B b3;
    //A a = B::getA();
 
    return 0;
}


