using namespace std;
#include<iostream>
#include<algorithm>

int t,n,c[11],f[1001];

void dp()
{
    f[0]=0;
    for (int i=1;i<=t;i++)
    {
        f[i]=10000;
        for (int j=1;j<=n;j++)
        {
            if(i-c[j]>=0)
                f[i]=min(f[i],f[i-c[j]]+1);
        }
        for (int k=1;k<=t;k++) cout<<k<<" "<<f[k]<<endl;
        cout<<endl;
    }
    
}

int main()
{

 int i;
 cin>>t>>n;
 for (i=1;i<=n;i++)
     cin>>c[i];
 dp();
 cout<<f[t]<<endl;
 cin>>t;
return 0;
}



