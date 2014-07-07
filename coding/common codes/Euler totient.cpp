#include<iostream>
#include<vector>
#include<cmath>
#include<cstdio>
using namespace std;

#define N 1000000
#define MAXN 1000000
int phi[MAXN + 1], prime[MAXN/10], sz=0;
vector<bool> mark(MAXN + 1);

int main()
{
    
   phi[1] = 0;  // phi[1] = 1 but for our question, for 1 answer is 0.
   for (int i = 2; i <= MAXN; i++ ){
    if(!mark[i]){
        phi[i] = i-1;
        prime[sz++]= i;
    }
    for (int j=0; j<sz && prime[j]*i <= MAXN; j++ ){
        mark[prime[j]*i]=1;
        if(i%prime[j]==0){
            int ll = 0;int xx = i;
            while(xx%prime[j]==0)
            {
                           xx/=prime[j];
                           ll++;         
                       }
            int mm = 1;
            for(int k=0;k<ll;k++)mm*=prime[j];
            phi[i*prime[j]] = phi[xx]*mm*(prime[j]-1);
            break;
    }
        else phi[i*prime[j]] = phi[i]*(prime[j]-1 );
    }
}
   int t;
   scanf("%d",&t);
   while(t--)
   {
    int n;
    scanf("%d",&n);
    printf("%d\n",phi[n]);             
   } 
   return 0;    
}
