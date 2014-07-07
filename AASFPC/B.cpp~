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

    long long int num,ans,i,j,k,t,count,n,a[100011];
    cin>>k;
    
    while(k--) 	
    {
    	cin>>t;  count=ans=1;
        for(i=0;i<t;i++)
          cin>>a[i];  
        sort(a,a+t); 
        num=a[0]; 
        for(i=1;i<t;i++)
        {   
            if(a[i]==a[i-1]) count++;
	    else { if(count>ans) { ans=count; num=a[i-1]; }count=1;}	
        }  
        if(count>ans) { ans=count; num=a[i-1]; }count=1;
        cout<<num<<endl;  
        
        
    }
        
    
    return 0;
}
