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

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    int64 t,i,j,k,n,ans,mx,a[26],b[26];
    char st[211];
    
    scanf("%lld",&t);
    while(t--)
    {
     scanf("%s",st); n = strlen(st);
     
     scanf("%lld",&n);
     
     memset(a,0,sizeof(a[0])*n);
     ans =0;
     for(i=0; i<n; i++)
     {
              k = st[i];
              if(k>=65 && k<=90)  a[k-65]++;
              if(k>=97 && k<=122)  b[k-97]++;
     }
     
     for(i=0; i<26; i++)  
     {
              ans+= a[i]/2;
              if(a[i]%2!=0) ans++;
              ans+= b[i]/2;
              if(b[i]%2!=0) ans++;
     }
     printf("%lld\n",ans);
    }
    
    return 0;
}
