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
    int64 t,i,j,k,n,ans,mx,a[26],b[26];
    
    freopen("inc.txt","r",stdin);
    freopen("outs.txt","w",stdout);
    
    scanf("%lld",&t);j=1;
    while(t--)
    { 
     
     scanf("%lld",&n);
     vector<int64> v1;
     vector<int64> v2;
     
     //memset(a,0,sizeof(a[0])*n);
     ans =0;
     for(i=0; i<n; i++)
     {
              scanf("%lld",&k);
              v1.push_back(k);
     }
     
     for(i=0; i<n; i++)
     {
              scanf("%lld",&k);
              v2.push_back(k);
     }
     
     sort(v1.begin(),v1.end());
     sort(v2.begin(),v2.end());
     
     for(i=0; i<n; i++)
     {
              //cout<<ans<<"*";   
              ans += v1[i]*v2[n-1-i];
     }
     printf("Case #%lld: %lld\n",j,ans);j++;
    }
    
    return 0;
}
