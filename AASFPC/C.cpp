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
    //freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);

    long int num,ans,i,j,k,t,count,n,a[1011],inc[1011],dec[1011];
    cin>>t;
    
    while(t--) 	
    {
    	cin>>n;  ans=0;
        for(i=0;i<n;i++)
           { cin>>a[i];  inc[i]=dec[i]=1;}
        
        
        for(i=1;i<n;i++) for(j=0;j<i;j++)
             if(a[i]>a[j])  inc[i]=max(inc[i],inc[j]+1); 
         
         for(i=n-2;i>=0;i--) for(j=n-1;j>i;j--)
             if(a[i]>a[j])  dec[i]=max(dec[i],dec[j]+1); 
         
         ans=inc[0]+dec[0]-1;
         for(i=1; i<n; i++)ans=max(ans,inc[i]+dec[i]-1);
       
        cout<<ans<<endl;
    }
        
    
    return 0;
}
