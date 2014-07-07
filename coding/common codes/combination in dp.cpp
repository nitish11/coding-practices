using namespace std;
#include<iostream>

#define mod 1000000007

long long int t[1005][1005];
void ncr(long long int n,long long int r)
{
     int i,j,k;
    
     for(i=0; i<=n; i++) {t[i][0]=1;}
     
     
     for(i=1; i<n; i++) 
              for(j=1; j<i+1; j++) 
                         {t[i][j]=(t[i-1][j-1]+t[i-1][j])%mod; }
}


int main()
{
    long long int n,c,r;
    
    ncr(100,100);   
    while(cin>>n>>r)
    {
              c = t[n][r];               
              cout<<c<<endl;              
    }
}
