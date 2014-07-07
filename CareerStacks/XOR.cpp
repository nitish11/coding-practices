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

void binary(int64 n)
{
     int a[100],k,i=0;
     while(n>0)
     {
           a[i]=n%2;
           n/=2;    
           i++;
     }
     for(k=i-1; k>=0; k--) cout<<a[k];
     cout<<endl;
}


int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int i,j,k,n,m,l,t,fl,d1,d2,sum,a[10011],b[10011];
    
    cin>>t;  
    while(t--) 
    {
            cin>>i;
            cout<<"~";binary(i);
            j=i^i;
            cout<<"*";binary(i);
            cout<<"#";binary(j);            
    }
    return 0;
}


