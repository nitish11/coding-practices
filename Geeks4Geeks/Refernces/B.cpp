#include<iostream>
using namespace std;
 
int fun(int &x)
{
    x+=5;
    return x;
}
int main()
{
    static int a=10;
    cout << fun(a)<<" "<<a;
    int i; cin>>i;
    return 0;
}
