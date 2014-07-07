using namespace std;
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include<queue>
 
#define mod 1000007 
typedef long long int int64;

int64 compute(int64 n)
{
      int64 i,j,k,l,c; 
      c=0;
      for(i=1; i<=sqrt(n); i++)
      {
               if(n%i==0)
                  c++;                     
      }
      return c;
}

int main()
{
    int64 t,i,j,k,n,ans,mx,a[10011];
    
    a[0]=0; a[1]=2; a[2]=7; a[3]=15; a[4]=26;

    //4*2 + 3*3 + 3*2 + 3*1
    //n*2 + n*(n+1)*(n-1)/2;
    
    scanf("%lld",&t); 
    
    
    while(t--)
    {
      ans =0;        
      scanf("%lld",&n);         
      ans = (n*2)%mod;
      
      if(n%2==0) ans+= (((n/2)*(n-1))*3)%mod;
      else ans += (((n-1)/2  * n)*3)%mod;
      
      printf("%lld\n",ans%mod);
    }
    
    return 0;
}


