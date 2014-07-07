using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

#define mod 1000000007 

typedef long long int lint;

/* This function return the gcd of a and b followed by the pair x and y of equation ax + by = gcd(a,b)*/
pair<lint, pair<lint, lint> > extendedEuclid(lint a, lint b) 
{
	lint x = 1, y = 0;
	lint xLast = 0, yLast = 1;
	lint q, r, m, n;
	while(a != 0) 
    {
		q = b / a;
		r = b % a;
		m = xLast - q * x;
		n = yLast - q * y;
		xLast = x, yLast = y;
		x = m, y = n;
		b = a, a = r;
	}
	return make_pair(b, make_pair(xLast, yLast));
}

lint modInverse(lint a, lint m) 
{
    return (extendedEuclid(a,m).second.first + m) % m;
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
