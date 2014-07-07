using namespace std;
#include<iostream>
#include<cmath>
#include<cstdlib>

long long int i,j,k,a[104735],n;
void seive()
{
           n=104730;//n=104729;
           memset(a,0,sizeof(a));
           for(i=0;i<=n;i++) cout<<i<<"*"<<a[i]<<endl;
           a[0]=1; a[1]=1;
           for(i=2;i<=n/2;i++)
             {  if(a[i]==0) 
                  { j=2; k=i*j;
                       for(; k<=n; j++) { k=i*j; a[k]=1;}}}
           for(i=0;i<=104729;i++) cout<<i<<"%"<<a[i]<<endl;
}

int main()
{
long long int test,num;
cin>>test;
seive();
     while(test--)
     {
             cin>>num;
             if(a[num]==1){cout<<"NO"<<endl;}
             else cout<<"YES"<<endl;             
     }
             

system("pause");
    return 0;
}   


