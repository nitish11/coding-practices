using namespace std;
#include<iostream>
#include<cmath>
#include<algorithm>

int value[50004],minm[20][50004],maxm[20][50004];

void rmq_init(int n)
{
    int i,j;
    for(i=0;i<n;i++) minm[0][i] = maxm[0][i] = value[i];
     
    for(j=1;(1<<j)<n;j++)
     for(i=0;i+(1<<j)-1<n;i++)
      minm[j][i]=min(minm[j-1][i],minm[j-1][i+(1<<(j-1))]),maxm[j][i]=max(maxm[j-1][i],maxm[j-1][i+(1<<(j-1))]);
}


int query(int i,int j)
{
     int k=(int)(log((double)j-i+1)/log(2.0));
     int rmq_a;
     int mma=max(ma[k][i],ma[k][j-(1<<k)+1]);
     int mmi=min(mi[k][i],mi[k][j-(1<<k)+1]);
     return mma-mmi;
}

int main()
{
int n,m,i,x,y;
scanf("%d%d",&n,&m);
for(i=0;i<n;i++) 
scanf("%d",&value[i]);
rmq_init(n);
for(i=0;i<m;i++)
{
scanf("%d%d",&x,&y);
printf("%d\n",query(x-1,y-1));
}
return 0;
}

