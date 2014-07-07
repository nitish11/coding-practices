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

int maxsum(int a[100][100],int n)
{
    int i,j,sum=0;
    for(i=1; i<=n; i++)for(j=1; j<=n; j++){ a[i][j]+=max(a[i-1][j],max(a[i-1][j-1],a[i-1][j+1])); sum=max(sum,a[i][j]);}
    return sum;
}



int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
  
    int  a[100][100],m,n,i,j,k;
    cin>>n;
    for(i=0;i<=n;i++)for(j=0;j<=n+1;j++){if(i==0||j==0||j==n+1)a[i][j]=0; else cin>>a[i][j];}
    cout<<maxsum(a,n);
    return 0;
}
