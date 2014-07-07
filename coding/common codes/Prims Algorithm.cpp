using namespace std;
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>

#define size 100

//prority queue for storing edges  (storing (cost,i,j))
priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > >pq;
vector<int>v;
vector<pair<int,int> >t1;
vector<int>v1;
vector<int>e[size];
vector<int>:: iterator vit;
vector<pair<int ,pair<int,int> >  > :: iterator grt;
pair<int ,pair<int,int> >  pt;

int vt[size];
int cst[size][size];

int main()
{
    int nodes,edges,i,j,k,ct,e1,e2,count,cost,sz,fl;
    
    //freopen("inii.txt","r",stdin);freopen("out.txt","w",stdout);
    
    cin>>nodes>>edges;
    for(i=1; i<=nodes; i++) {v.push_back(i); }
                      
              
     for(i=0; i<edges; i++)
     {
              cin>>j>>k>>ct;
              e1 = min(j,k);
              e2 = max(j,k);              
              e[e1].push_back(e2);
              e[e2].push_back(e1);
              cst[e1][e2]=cst[e2][e1]=ct;
     }
     
     t1.clear();
     v1.push_back(1);
     cost= 0;
     
     for(vit=e[1].begin(); vit!=e[1].end(); vit++)
     {
                        e2 = *vit;    
                        ct = cst[1][e2];
                        pt = make_pair(ct,make_pair(1,e2));   
                        pq.push(pt);
     }
     sz =1;
     while(sz<nodes)
     {
            pt = pq.top();
            pq.pop();
            e1 = pt.second.first;
            e2 = pt.second.second; 
            
            fl=0;
            for(vit=v1.begin(); vit!=v1.end(); vit++)
                                if(*vit==e2) fl=1;
            if(fl==0)
            {
                     t1.push_back(make_pair(e1,e2));
                     cout<<e1<<"-"<<e2<<"#"<<cst[e1][e2]<<endl;
                     cost += cst[e1][e2];
                     v1.push_back(e2);  sz++;
                     for(vit=e[e2].begin(); vit!=e[e2].end(); vit++) 
                     {
                        ct=cst[e2][*vit];                    
                        pt = make_pair(ct,make_pair(e2,*vit));   
                        pq.push(pt);
                     }                             
            }
     }
     cout<<cost;
     cin>>i;
    
}
