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

    int64 t,i,k,n,ans,d,u,m,r,c; 
    double temp,cost,mst;
	    
    cin>>t;		    
    while(t--)
    {
    	cin>>temp>>u>>n;
    	d = temp*100.00;
    	cost=d*u;
    	//cout<<"#"<<cost<<endl;
    	ans=0;
    	for(i=1;i<=n;i++)
    	{
    	   cin>>m>>temp>>c;
    	   r=temp*100.00;
    	   mst=((r*u*m)+(c*100)+0.00)/(0.00+m);
    	   //cout<<"*"<<mst<<"#"<<cost<<endl;
    	   if(mst<cost) { ans=i; cost=mst; }
    	}
    	
      	cout<<ans<<endl;
   
    }
    
    return 0;
}
