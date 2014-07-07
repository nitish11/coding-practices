using namespace std;
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<stack>
#include<list>
 

vector<int>dpt[100];
vector<int>lt[100];
vector<int>::iterator ltit;
queue<int>q;
int visited[100];

int makelist()
{
    int i,j,k,n,m,s,t,ct;        
    //cout<<"N-nodes / M-edges"<<endl;
    cin>>n>>m;   
    //cout<<"source / target / cost "<<endl;
    
    for(i=0; i<m;  i++)
    {
             cin>>s>>t>>ct;
             lt[s].push_back(t);
    }
    return n;
}



void printdepthlist(int level)
{
   for(int i=0; i<=level; i++)
    {
       cout<<"Level "<<i<<endl;
        for(ltit=dpt[i].begin(); ltit!=dpt[i].end(); ltit++)
        {     cout<<(*ltit)<<" ";  }
       cout<<endl;
    }
}


void leveltraversal(int sr,int n)
{
    int i=1,j,k,t,tmp;
    int level; 
    //memset(visited,0,visited+n);
    for(i=0;i<=n;i++) visited[i]=0; i=1;
    
    level = visited[sr];
    ltit=lt[sr].begin(); 
    q.push(sr);
    dpt[level].push_back(sr);
    
    while(!q.empty() && i<=n)
    {
    t=q.front();
    
    q.pop();
        for(ltit=lt[t].begin(); ltit!=lt[t].end()  && i<=n; ltit++)
        {
            k =*ltit; 
                if(visited[k]==0)  
                { visited[k] = visited[t]+1; q.push(k);  tmp=visited[k]; dpt[tmp].push_back(k);  i++;}       
        }  
    }
    level = tmp;
    printdepthlist(level);
    return ;                         
}

int main()
{
    freopen("inii.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int i,j,k,n,t,goal;
    n=makelist();
    
    leveltraversal(1,n);
    
    //system("pause");
}
