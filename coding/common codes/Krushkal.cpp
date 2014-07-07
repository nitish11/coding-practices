using namespace std;
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>

#define size 100

vector<pair<int ,pair<int,int> >  >gr;
vector<pair<int ,pair<int,int> >  > :: iterator grt;
pair<int ,pair<int,int> >  pt;
int v[size];


int main()
{
    int nodes,edges,i,j,k,ct,e1,e2,count,cost;
    
    
    cin>>nodes>>edges;
    for(i=0; i<nodes+1; i++) v[i]=0;
                      
              
     for(i=0; i<edges; i++)
     {
              cin>>j>>k>>ct;
              e1 = min(j,k);
              e2 = max(j,k);
              pt = make_pair(ct,make_pair(e1,e2));
              gr.push_back(pt);
     }
     
     sort(gr.begin(),gr.end());
     count=cost=0;
     
     for(grt=gr.begin(); grt!=gr.end(); grt++)
     {
                 pt = *grt;
                 e1 = pt.second.first;
                 e2 = pt.second.second; 
                 ct = pt.first;
                 
                 if(v[e1]==0 || v[e2]==0) 
                 {
                             cost += ct;
                             v[e1]= v[e2] =1;
                             //cout<<e1<<" "<<e2<<"#"<<ct<<endl;
                 }    
     }
     cout<<cost;
    
}
