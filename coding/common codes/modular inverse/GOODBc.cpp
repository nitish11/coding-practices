using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

#define mod 1000000007 

typedef long long int lint;

lint power(lint a, lint b, lint m)
{
    lint x = 1, y = a;
	while(b > 0) 
    {
		if(b%2 == 1) 
        {
			x=(x*y);
			if(x>m) x%=m;
		}
		y = (y*y);
		if(y>m) y%=m;
		b /= 2;
	}
	return x;
}

lint modInverse(lint a, lint m) 
{
    return power(a,m-2,m);
}
int main()
{
    lint i,j,k,test,t,w,n,r,ans,s[4];
    while(cin>>n)
    {
                 cin>>s[0]>>s[1]>>s[2];
                 sort(s,s+3);
                 w=s[0], r=s[1], t=s[2];
                 //cout<<"^"<<w<<"^"<<r<<"^"<<t<<endl;
                 ans = 1;
                 for(i=n; i>t; i--)
                 {
                     ans = (i*ans)%mod;     
                     while(ans>w && w>1 && ans%w==0){ans = (ans*modInverse(w,mod))%mod; w--;}
                     while(ans>r && r>1 && ans%r==0){ans = (ans*modInverse(r,mod))%mod; r--;}
                 //cout<<"***"<<ans<<endl;
                 }

                 while(w>1){ans = (ans*modInverse(w,mod))%mod; w--;}
                 while(r>1){ans = (ans*modInverse(r,mod))%mod; r--;}
                 if(ans<0) ans+=mod;
                 cout<<ans%mod<<endl;
    }
    return 0;
}
