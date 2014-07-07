#include <iostream>
/*
 * Author : Anthoniraj Amalan
 * Date   : 10/04/2011
 * Description : Simple C++ Program for Adding
 *               Two Numbers using Templates
 */
using namespace std;
 
template <class A>A add (A a, int b=10)
{
    cout <<"The Integer Addition is "; 	
    return (a+b);
}

template <class A, class B>A add (A a, B b)
{
    cout <<"The Double Addition is " ;
    return (a+b);
}


template <class A, class B,class C>B add (A a, B b,C c)
{
    cout <<"The Triple Addition is " ;
    return (a+b+c);
}


int main()
{ 
     	
    cout<< add(10,20)<<endl;
    cout<< add(2,3.2)<<endl;
    cout<< add(2,3.2,3.2)<<endl;	

    return 0;
}
