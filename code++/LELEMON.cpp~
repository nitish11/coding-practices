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

    long t,i,j,k,n,r,m,a[1111];
    int64 ans;
	    
    cin>>t;		    
    while(t--)
    {
        ans=0;
        vector<long>p;
	vector<long>c[1111];
	vector<long>::iterator it;
	
      cin>>n>>m;
      
      for(i=0;i<m;i++) 
      {
      	cin>>k;
      	p.push_back(k);
      }
      
      for(i=0;i<n;i++) 
      {
      	cin>>k;
      	for(j=0;j<k;j++)
      	{
      	    cin>>r;
      	    c[i].push_back(r);
      	}
      	sort(c[i].begin(),c[i].end());
      	//for(it=c[i].begin();it!=c[i].end();it++)cout<<*it<<" ";cout<<endl;  
      }	  
      
      
     for(i=0;i<m;i++) 
      {
            k=p[i];
            if(!(c[k].empty())) 
            {
            	 ans += *(c[k].end()-1); 
            	 c[k].erase(c[k].begin()+c[k].size()-1); 
            }
      }
      cout<<ans<<endl;
   
    }
    
    return 0;
}
