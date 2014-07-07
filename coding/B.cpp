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
    //freopen("int.in","r",stdin);
    //freopen("out.out","w",stdout);

    int64 t,i,j,k,n,ans,mx,fl;
    string st,tmp;
    
    cin>>t;
    while(t--)
    {
     cin>>st;
     n = st.size();
     
     ans = 0, mx=0;  j=0;
     for(i=0; i<n; i++)
     {
              fl=0;  j=0;
              while(st[i]=='.' && i<n) { j++; fl=1; i++;}
              if(fl==1)
              {
                     if(j>mx) { mx=j; ans++;   }
              }
     }
     
     cout<<ans<<endl;
     
    }
    
    return 0;
}
