#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    long long int i,c,j,k,t,l,h,ans,n,mx,mn,q,a[100000];
    vector<long long int> b;
	vector<long long int>::iterator it,low;
	b.push_back(0);
    cin>>n>>q;
    {
    ans=0;
    for(i=0; i<n; i++)
    {scanf("%lld",&a[i]); b.push_back(b[i]+a[i]);}
	h= n+1;	
    for(i=0; i<q; i++)
    {
        scanf("%lld",&l);
		//for(j=0; b[j]<=l; j++){} ans=j;printf("%lld\n",ans);
		
		low = upper_bound(b.begin(),b.end(),l);
		cout<<int(low- b.begin()) << endl;
 
    }
    
    
    }
    return 0;
    
}

