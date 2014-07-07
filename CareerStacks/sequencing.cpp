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
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long int i,j,k,n,m,l,t,fl,a[10011],b[10011];
      
    //cin>>t;  
    while(cin>>n)
    {
              
              for(i=0; i<n;i++) {cin>>a[i];}
              for(i=0; i<n-1;i++) 
               {   
                    k =  min(a[i],a[i+1]);
                    a[i] -=k;
                    a[i+1] -=k;
               }
               fl=0;
              for(i=0; i<n;i++)      
              {
                       if(a[i]==0) fl++;
                       else break;
              }
             
                  if(fl==n) {cout<<"YES"<<endl; }
                  else {cout<<"NO"<<endl; }
              
              
    }
    
    return 0;
}


