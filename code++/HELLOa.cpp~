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
int64 gcd(int64 a,int64 b)
{
	if(b==0) return 1;

	return gcd(b,a%b); 
}


int64 lcm(int64 a,int64 b)
{
	return (a*b)/gcd(a,b); 
}

int main()
{
    freopen("in.in","r",stdin);
    freopen("out.out","w",stdout);

    int64 t,i,k,n,ans,d,u,m[111],r[111],c[111],cost,mst[111],mx; 
    float temp;
	    
    cin>>t;		    
    while(t--)
    {
    	cin>>temp>>u>>n;
    	d = temp*100.00;
    	cost=d*u;
    	cout<<"#"<<cost<<endl;
    	ans=0; mx=1;
    	for(i=1;i<=n;i++)
    	{
    	   cin>>m[i]>>temp>>c[i];
    	   c[i]*=100;
    	   r[i]=temp*100.00;
    	   mx=lcm(mx,m[i]); 
    	}
    	
    	cost*=mx;
    	for(i=1;i<=n;i++)
    	{
           k=mx/m[i];		
    	   mst[i]=k*c[i] + k*u*r[i];  
    	   cout<<"~"<<cost<<" "<<mst[i]<<endl;
    	   if(mst[i]<cost) {cost=mst[i]; ans=i;}
    	}
      	cout<<ans<<endl;
   
    }
    
    return 0;
}
