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
 
typedef long long int int64;

map<string,int64>mp; 
map<string,int>::iterator mq;
int ct[10001][10001];

int main()
{
    int64 t,i,j,k,n,m,q,ans,cst,frs,tos,mx;
    string st,frm,to;
    freopen("in.in","r",stdin); freopen("otr.out","w",stdout);

    scanf("%lld",&t);
    while(t--)
    {
     scanf("%lld",&n);
     
     for(i=0; i<=n; i++)
          for(j=0; j<=n; j++)
                ct[i][j] = 1000000;

     for(i=0; i<n; i++)
     {
              cin>>st;
              mp[st]=i;
              scanf("%lld",&m); 
              for(j=0; j<m; j++)
              {
                scanf("%lld",&k); 
                scanf("%lld",&cst); 
                ct[i][k-1]=cst;    
              }  
     }
     
     for(k=0;k<n;k++)
     {
        for(i=0;i<n;i++)
        {
             for(j=0;j<n; j++)
             {
                if(ct[i][j]>ct[i][k]+ct[k][j])
                   ct[i][j] = ct[i][k]+ct[k][j]; 
             }   
        }
     }
     
     scanf("%lld",&q);
     for(i=0; i<q; i++)
     {
        cin>>frm>>to;
        frs = mp[frm];
        tos = mp[to];
        ans = ct[frs][tos];
        printf("%lld\n",ans);
     }
     
    }
    
    return 0;
}
