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

    int ans,i,j,k;
    string str;
    cin>>k;
    
    while(k--) 	
    {
    	cin>>str;
    	ans=0;
        j=str.size();
        for(i=1;i<j;i++)
            if(str[i]>=65 && str[i]<=90 && str[i-1]>=97 && str[i-1]<=122)  ans++;
        cout<<ans<<endl;  
    }
        
    
    return 0;
}
