#include<iostream>
using namespace std;
 
int &fun()
{
    int x = 10;
    cout << "!!"<<x<<endl;
    return x;
}
int main()
{
    int a=30; 
    cout << fun();
    fun() = a;
    cout << fun();
    int i; cin>>i;
    return 0;
}
