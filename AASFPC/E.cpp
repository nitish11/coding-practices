#include<cstdio>
#include<cstdio>
#include<queue>
#include<cstring>
#include<vector>
#include<iostream>
#include<cassert>
#include<cmath>
#include<map>
#include<set>
#include<cstdlib>
using namespace std;
typedef long long int int64;
struct nd
{
int64 n;
struct nd * p;
};
int64 find(struct nd * ptr)
{
while(ptr->p!=NULL)ptr = ptr->p;
return ptr->n;
}
void uni(struct nd * ptr1,struct nd *ptr2)
{
int64 c1=0,c2=0;
while(ptr1->p!=NULL){ptr1 = ptr1->p;c1++;}
while(ptr2->p!=NULL){ptr2 = ptr2->p;c2++;}

if(c1>c2)ptr2->p = ptr1;
else ptr1->p = ptr2;
}
int main()
{
//freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
int64 i,j,k,n,m,t,f,g,u,d,x,y;
struct nd *ptr1,*ptr2 ;
map <int64, struct nd *> mp;
set <int64> s,s1;
cin>>n>>m;
while(m--)
{	
scanf("%lld %lld",&x,&y);
if(s.find(x)==s.end()){
s.insert(x);ptr1 = (struct nd *)malloc(sizeof(nd));
ptr1->n=x;ptr1->p=NULL;mp.insert(make_pair(x,ptr1));
}
else ptr1=mp[x];
if(s.find(y)==s.end())
{
s.insert(y);ptr2 = (struct nd *)malloc(sizeof(nd));
ptr2->n=y;ptr2->p=NULL;mp.insert(make_pair(y,ptr2));
}
else ptr2=mp[y];
if(find(ptr1)!=find(ptr2))uni(ptr1,ptr2);
}
set <int64> :: iterator it;
for(it=s.begin();it!=s.end();++it)
{
x=*it;y=find(mp[x]);s1.insert(y);
}
cout<<n-s.size()+s1.size()<<endl;
return 0;
}
