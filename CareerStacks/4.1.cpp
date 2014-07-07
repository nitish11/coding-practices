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

int bitstonum(string str)
{
    int ans=0;
    double i,j,k;
    j= str.size();
    for(i=0; i<j; i++)
    {
             k = str[i]-'0';
             ans += k*pow(2,j-i-1);
    }
    return ans;
}

void showbits(int num)
{
    int i=0,j,k;
    char st[100];
    while(num>0)
    {
           k=num%2;     
           st[i]=k+'0'; i++;
           num/=2;
    }
    st[i]='\0';
    cout<<strrev(st)<<endl;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
  int i=2,j=6,k;                                
  string nst = "11110111011";
  int n = bitstonum(nst);  showbits(n);
  string mst = "10101";
  int m=bitstonum(mst);    showbits(m);

  int max =!0;  showbits(max);
  k = 1<<j;  showbits(k);
  k = (1<<j)-1;  showbits(k);
  cout<<"Left ::"; 
  int left = max-k; showbits(left);
  
  k = 1<<i;  showbits(k);
  k = (1<<i)-1;  showbits(k);
  int right = k; showbits(right);
  cout<<"Mask ::"; 
  int mask= left|right; showbits(mask);
  
  int r=n & mask; showbits(r);
  int s=m<<i; showbits(s);
  int t = r|s; showbits(t);
  
    cin>>k;       
    return 0;
}
