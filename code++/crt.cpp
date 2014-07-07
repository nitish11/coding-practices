#include<iostream>
using namespace std;


int main()
{
int a,*y,*z;
a = 50;

cout<<a<<" "<<&a<<endl;
y = &a;

*y++ = *z++;
cout<<*y<<"--"<<*z<<endl;
a++;

cout<<a<<" "<<y<<" "<<z<<endl; 

//a = ++b * ++b * ++b; //cube(b++);
//cout<<a<<" "<<b<<endl;
return 0;

}


