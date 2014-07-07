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
int64 calc(int64 n, int64  r)
{
    long long int c,h,l,i,j;
    c=1;
    if(n>r)
    { h=n-r; l=r;}
    else
    { l=n-r; h=r;}
    
    if(n==r || r==0)
       return c;     
    for(i=n,j=l; i>h; i--)
      {
                 c *= i;
                 while((c%j==0)&& j>1)
                 { c /= j; j--;}           
      }  
      return c;       
}

int main()
{
    //freopen("in.txt","r",stdin); freopen("ot.txt","w",stdout);
    int64 t,i,j,k,n,ans,l;
    
    scanf("%lld",&t);
    while(t--)
    {
     
     scanf("%s",st);
     l = strlen(st);
     j = l-1;
     i = 2*j;
     ans = calc(i,j)/l;
     printf("%lld\n",ans);
    }
    
    return 0;
}
