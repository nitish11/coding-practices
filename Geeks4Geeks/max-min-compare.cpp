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

string operate(string str)
{
    int64 t,i,j,k,n,ans,mx,a[26],b[26];
    //memset(a,0,sizeof(a[0])*n);   
}



int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
  
    string st,ans;    
    int64 i,j,k,n,a[100],mn,mx,diff;
    cin>>n;
    cin>>a[0];
    mn =mx=a[0];
    for(i=1; i<n;i++)
    { 
      cin>>a[i]; 
      mx = (a[i]>mx)?a[i]:mn;
      mn = (a[i]<mn)?a[i]:mn;
    }  
}  
    
    
    
    
    return 0;
}
