using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

#define mod 1000000007 

typedef long long int lint;

long long int pow(long long int a,long long  int b, long long int MOD) 
{
long long int x = 1, y = a;
    while(b > 0) {
        if(b%2 == 1) {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD;
        b /= 2;
    }
    return x;
}
 
long long int modInverse(long long int a, long long int m) {
    return pow(a,m-2,m);
} 
long long fact( int n, int c)
{
	long long p=1;
	int i;
	for(i=n;i>c;i--)
	{
		p=(p*i)%1000000007;
		}
	return p;
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
