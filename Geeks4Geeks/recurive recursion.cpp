#include<iostream>
#include<cstdio>
using namespace std;
 

int fun(int count)
{
    printf("%d\n", count);
    if(count < 3)
    {
      fun(fun(fun(++count)));
    }
    return count;
}
 
int main()
{
    fun(1);
    int i; cin>>i;
    return 0;
}
