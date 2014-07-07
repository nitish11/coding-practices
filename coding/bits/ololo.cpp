#include<iostream>
#include<cstdio>
using namespace std;

typedef long long int int64;


int main()
{
//freopen("in.in","r",stdin);
//freopen("out.out","w",stdout);

int64 test,n,i,j,k,ans;

scanf("%lld",&n);

for(i=0; i<n; i++)
{
        scanf("%lld",&k);
        if(i==0)  ans = k; 
        else ans = ans ^ k;
}

printf("%lld",ans);

}
