using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<algorithm>

typedef long long int int64;

int add(int  x, int y) { return x+y; }
int add(int  x, int y, int z) { return x+y+z; }
float add(float  x) { return x*x*x; }

//int add(int x){ return x*x*x*x; }       //these two are ambiguous
float add(int  x) { return (x*x)+1.11; }

int main()
{
    int x=1,y=2,z=3,a;
    float f=10.230001;   
    
     cout<<add(x,y)<<endl;
     cout<<add(x,y,z)<<endl;
     cout<<add(2)<<endl;
     cout<<add(5)<<endl;
     cout<<add(f)<<endl;
     cin>>a;       
    
    
    return 0;
}
