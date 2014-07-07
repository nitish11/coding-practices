using namespace std;
#include<iostream>

long long int ncr(long long int n,long long int r)
{
    long long int c,h,l,i,j;
    c=1;
    if(n>r)
    { h=n-r; l=r;}
    else
    { l=n-r; h=r;}
    
    if(n==r || r==0)
       return c;     
    for(i=n,j=l; i>h; i--)
      {
                 c *= i;
                 while((c%j==0)&& j>1)
                 { c /= j; j--;}           
      }  
      return c;     
}

int main()
{
    long long int n,c,r,t,i,j,h,l;
    cin>>n>>r;
    c = ncr(n,r);               
    cout<<c<<endl;              
    system("pause");
}
