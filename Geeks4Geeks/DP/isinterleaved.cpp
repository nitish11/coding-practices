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
    int i,j,k,n,m,l;
    bool t[111][111];
    memset(t, 0, sizeof(t)); 
    l=c.size(); m=a.size(); n=b.size();
    
    if(l!=(n+m)) return false;
    for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
             k = i+j-1; 
             if(i==0 && j==0)  t[i][j]= true;
             else if((i==0||a[i-1]!=c[k]) && b[j-1]==c[k])  t[i][j]=t[i][j-1];
             else if(a[i-1]==c[k] && (j==0||b[j-1]!=c[k]))  t[i][j]=t[i-1][j];
             else if(a[i-1]==c[k] && b[j-1]==c[k])  t[i][j]= t[i-1][j] ||t[i][j-1];
        }
    }
    return t[m][n];
}



int main()
{
    freopen("in.in","r",stdin);
    freopen("out.out","w",stdout);
    
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
