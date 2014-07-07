using namespace std;
#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<set>
#include<algorithm>

typedef long long int int64;

vector<pair<int,int> >point;
vector<pair<int,int> >cluster;
vector<pair<int,int> >::iterator pit; 
set<pair<int,int> >cls;
pair<int,int>  coods;


int distance(point A, point B)
{
    int x = (A.first-B.first)*(A.first-B.first);
    int y = (A.second-B.second)*(A.second-B.second);
    return sqrt(x + y);
}





int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,i,j,k,n,m,x,y,z,hl,cluster_set[100];

    scanf("%d",&n);
     for(i=0; i<n; i++)
     {
          scanf("%d %d",&x,&y);    
          point.push_back(make_pair(x,y));
     }
     
     cin>>k;
     if(k<n) for(i=0; i<k; i++) cluster.push_back(point[i]);
     else cout<<"Aborted";
     
     
     
    
    return 0;
}
