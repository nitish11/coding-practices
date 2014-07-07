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
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    long long int i,j,k,n,m,l,t,fl,d1,d2,sum,ans,a[10011],b[10011];
      
    //cin>>t;  
    while(cin>>n)
    {
                 
              fl=sum=ans=0;;
              for(i=1; i<=n;i++) {cin>>a[i]; sum+=a[i];}  k=sum/n;
              a[0]=a[n-1]; a[n+1]=a[0];
              
               for(i=1; i<=n;i++) 
               {   
                   if(a[i]<k)
                   {
                          d1=a[i+1]-a[i]; d2=a[i-1]-a[i];   
                          if(d1>d2)
                          {
                                   j=a[i+1]-k;
                                   if(j>0) {a[i]+=j; a[i+1]=k; fl++; if(a[i]==k) fl++; ans+=j; }                    
                          }
                          else
                          {
                                   j=a[i-1]-k;
                                   if(j>0) {a[i]+=j; a[i-1]=k; fl++; if(a[i]==k) fl++;ans+=j; }                    
                          }
                   }
               }
               if(fl==n) {cout<<ans<<endl; continue;}
               
             //while(fl<n)
             {  
               for(i=1; i<=n;i++) 
               {   
                   if(a[i]<k)
                   {
                          int j1,j2; d1=d2=0;
                          for(j1=i+1;j1<=n+1; j1++){if(a[j1]>k) {d1++; break;} }
                          for(j2=i-1;j2>=0; j2--){if(a[j2]>k) {d2++; break;} }
                    
                          d1=(a[j1]-k)*d1; d2=(a[j2]-k)*d2;   
                          if(d1<d2)
                          {
                                   j=a[j1]-k;
                                   {a[i]+=j; a[j1]=k; fl++; if(a[i]==k) fl++;ans+=d1; }                    
                          }
                          else
                          {
                                   j=a[j2]-k;
                                   {a[i]+=j; a[j2]=k; fl++; if(a[i]==k) fl++;ans+=d2; }                   
                          }
                   }           
               }
               if(fl==n) {cout<<ans<<endl; continue;}
             } 
            cout<<ans<<endl;   
    }
    return 0;
}


