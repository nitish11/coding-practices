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

bool isinterleaved(string a,string b,string c)
{
    int64 t,i,j,k,n,m,l;
    
    l=a.size(); m=b.size(); n=c.size();
    
}



int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    
    int t,ans;
    cin>>t; 
    string a,b,c;
    while(t--)
    {
     cin>>a>>b>>c;
     cout<<isinterleaved(a,b,c)<<endl;
    }
    
    return 0;
}
