using namespace std;
#include<iostream>
int main()
{
int x=30,*y,*z;
y=&x;
cout<<&x<<endl;
cout<<"y="<<y<<endl;
z=y;
cout<<*y<<" "<<*z<<endl;
*y++;
*z++;
cout<<*y<<endl;
cout<<*z<<endl;
//cout<<*z<<" "<<"*y"<<endl;
x++;
cout<<x<<" "<<y<<" "<<z<<endl;
return 0;
}
