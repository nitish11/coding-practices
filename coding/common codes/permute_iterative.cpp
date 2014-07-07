#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
long long int i,j,k,n,t,h,l,test,a[1001],p[1001];
a[0]=5; a[1]=6; k=t=2; p[0]=0; p[1]=2; i=10;
cin>>test;
n=test;
while(k<n)
{
l=p[t-2]; h=p[t-1];
for(j=l; j<h; j++)
{a[k]=i*5+a[j]; k++;}

for(j=l; j<h; j++)
{a[k]=i*6+a[j]; k++;}

i*=10; p[t]=k; t++;
}

for(i=0; i<n; i++)cout<<a[i]<<endl;

cin>>n;
cout<<a[n-1]<<endl;
return 0;    
}
