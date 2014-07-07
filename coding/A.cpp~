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


string check(string m,string st)
{
        int i,j,k,l,fl,n,mx;
        j= st.size();
        string st1,st2; 
        mx=0;
        st2="";
        for(i=0; i<j; i++)
        {
            fl=0;  k=0;  st1="";  
            while(st[i]>=48 && st[i]<=57 && i<j) { st1+=st[i]; k++; i++;  }
            l=0; while(st1[l]==48 && l<st1.size()-1) {st1.erase(st1.begin()+0); l++;}
            //cout<<"^"<<st1<<endl;
            if(k>mx) { st2=st1;  mx=k; }//cout<<"#"<<st2<<endl;}
            else if(k==mx && st1>st2) { st2=st1; } //cout<<"#"<<st2<<endl;}
        }
        
        if(mx>m.size()) { m=st2; }
        else if(mx==m.size() && st2>m) { m=st2; }
 return m;
}


int main()
{
    //freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);

    int64 t,i,j,k,n,mx,fl;
    string st,tmp,ans;
    
    //scanf("%lld",&t);
    while(cin>>st)
    {
     tmp=st;
     n = st.size();
     ans = "";
     fl=0;
     //cout<<st<<endl; 
     for(i=0; i<n; i++)
     {
              k = st[i];
              if(k>=65 && k<=90) st[i]=57;
              //cout<<"&"<<st<<endl; cout<<"$"<<ans<<endl;
              ans = check(ans,st);
              //cout<<"~"<<ans<<endl;
              st[i]=k;                
     }
     //n = ans.size();
     //i=0; while(ans[i]==48 && i<n-1)  { i++;}  
     //for(; i<n; i++) { cout<<ans[i];}
     cout<<ans<<endl;
    }
    
    return 0;
}
