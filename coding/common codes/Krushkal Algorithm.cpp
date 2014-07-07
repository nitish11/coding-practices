using namespace std;
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>

#define siz 100


vector<pair<int,int> >t1;
vector<pair<int ,pair<int,int> >  >edge;
vector<pair<int ,pair<int,int> >  >::iterator eit;
pair<int ,pair<int,int> >  pt;


struct union_find
{
       int *p; //=new int[10];     // set of parent elements
       int *size; //=new int[10];  // size[i] stores the no. of elements in subtree i
       int n;                   // no. of elements.
};

struct union_find f;

void init(union_find* s, int n)
{
     for(int i=1;i<=n;i++)
     {
             s->p[i]=i;
             s->size[i]=1;
     }

     s->n=n;
}

//it finds if root of tree in which element i exists

int find(union_find* s,int i)
{
    if(s->p[i]=i)
    return i;

    return (find(s, s->p[i]));
}



void unionsets(union_find* s,int i,int j)
{
    int root1=find(s,i);
    int root2=find(s,j);
    if(root1==root2)
    return ;

    if(s->size[root1]>s->size[root2])
    {
                                    s->p[root2]=root1;
                                    s->size[root1]=s->size[root1]+s->size[root2];
    }

    else
    {
        s->p[root1]=root2;
        s->size[root2]=s->size[root1]+s->size[root2];
    } 
}



int main()
{
    int nodes,edges,i,j,k,ct,e1,e2,count,cost,sz,fl;
    
    freopen("inii.txt","r",stdin);freopen("out.txt","w",stdout);
    cin>>nodes>>edges;
    
    init(&f,nodes);
    t1.clear();
    cost= 0;
                  
              
     for(i=0; i<edges; i++)
     {
              cin>>j>>k>>ct;
              e1 = min(j,k);
              e2 = max(j,k);
              pt = make_pair(ct,make_pair(e1,e2));   
              edge.push_back(pt);
     }
     
     sort(edge.begin(),edge.end());
     eit = edge.begin();
     
     sz =1;
     while(sz<nodes)
     {
            pt = *eit;
            ct = pt.first;
            e1 = pt.second.first;
            e2 = pt.second.second; 
            
            if(find(&f,e1)!=find(&f,e2))
            {
                     t1.push_back(make_pair(e1,e2));
                     cout<<e1<<"/"<<e2<<"#"<<ct<<endl;
                     cost += ct;
                     unionsets(&f,e1,e2); sz++;   
            }
            else
            {
                cout<<"##"<<e1<<"-"<<e2<<"#"<<ct<<endl;
            }
            eit++;
     }
     cout<<cost<<"$";
     return 0;
}
