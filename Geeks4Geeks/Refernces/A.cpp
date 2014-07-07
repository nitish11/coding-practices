#include<iostream>
using namespace std;
 
int &fun()
{
    static int x = 10;
    cout << "!!"<<x;
    return x;
}
int main()
{
    cout << fun();
    fun() = 30;
    cout << fun();
    int i; cin>>i;
    return 0;
}
