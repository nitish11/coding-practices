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
    int64 t,i,j,k,mx,a[26],b[26];
    string ans;
    //memset(a,0,sizeof(a[0])*n);  
    bool fl=next_permutation(str.begin(),str.end());
    if(fl==false)  ans ="-1";
    else ans=str;
    return ans; 
}



int main()
{
    freopen("ini.txt","r",stdin);
    freopen("outi.txt","w",stdout);
  
    string st,ans;    
    while(cin>>st)
    {
     ans = operate(st);     
     cout<<ans<<endl;
    }
    
    return 0;
}
