#include<iostream>
using namespace std;

#define cube(x) (x*x*x)

int main()
{
int a=1, b=3;
a = ++b * ++b * ++b; //cube(b++);
cout<<a<<" "<<b<<endl;
return 0;
}
