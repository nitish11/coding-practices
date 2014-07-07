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

typedef long long int int64;

int main()
{
    int64 t,i,j,k,n,ans,mx,a[100];
    
    scanf("%lld",&t);
    while(t--)
    {
     
     scanf("%lld",&n);
     
     a[0]=0; a[1]=0; a[2]=1;
     for(i=3; i<=n; i++)
     {
             a[i]=(i-1)*(a[i-1]+a[i-2]);
             cout<<i<<" "<<a[i]<<endl;
     }
     
    }
    
    return 0;
}
