using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

#define mod 1000000007
int main()
{
    long long int i,j,k,test,t,w,n,r,ans;
    freopen("in.in","r",stdin);
    freopen("ot.out","w",stdout);
    while(cin>>n)
    {
                 cin>>w>>t>>r;
                 ans = 1;
                 for(i=n; i>1; i--)
                 {
                     ans = i*ans;     
                     cout<<i<<" "<<ans<<endl;
                     while(ans>w && w>1 && ans%w==0){ans=ans/w; w--;}
                     while(ans>t && t>1 && ans%t==0){ans=ans/t; t--;}
                     while(ans>r && r>1 && ans%r==0){ans=ans/r; r--;}
                     ans = ans%mod;
                 }
                 ans = ans/(w*t*r);
                 cout<<ans<<endl;
    }
    return 0;
}
