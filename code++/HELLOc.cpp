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

    int64 t,i,k,n,ans,d,u,m,c; 
    double r,temp,cost,mst;
	    
    cin>>t;		    
    while(t--)
    {
    	cin>>temp>>u>>n;
    	cost=temp*u;
    	//cout<<"#"<<cost<<endl;
    	ans=0;
    	for(i=1;i<=n;i++)
    	{
    	   cin>>m>>r>>c;
    	   
    	   mst=(r*u)+((c+0.00)/(m+0.00));
    	   //cout<<"*"<<mst<<"#"<<cost<<endl;
    	   if(mst<cost) { ans=i; cost=mst; }
    	}
    	
      	cout<<ans<<endl;
   
    }
    
    return 0;
}
