using namespace std;
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>

#define size 100

struct union_find
{
       int* p=new int[n+1];     // set of parent elements
       int* size=new int[n+1];  // size[i] stores the no. of elements in subtree i
       int n;                   // no. of elements.
}


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

    if(s->size[roo1]>s->size[root2])
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
    
    return 0;
}
