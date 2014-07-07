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

bool isunique(string str)
{
     int check=0;
     for(int i=0;i<str.size();i++)
     {
             int val=str[i]-'a';
             cout<<val<<endl
             int val2 = 1<<val;
             cout<<val<<endl;
             cout<<val2<endl;
             
     }
     return true;
}


int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    long long int i,j,k,n,m,l,t,fl,d1,d2,sum,a[10011],b[10011];
    bool ans;
    
    cin>>t;  
    while(t--) 
    {
            cin>>str;
            ans=isunique(str);
            cout<<ans<<endl;   
    }
    return 0;
}


