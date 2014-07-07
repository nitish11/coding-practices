using namespace std;
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<list>
 

vector<int>lt[100];
vector<int>::iterator ltit;
queue<int>q;


void makelist()
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
}

bool bfs(int gl,int sr)
{
    int i,j,k,n,t;
    i=1;
    ltit=lt[sr].begin(); 
    q.push(sr);
    while(!q.empty())
    {
    t=q.front();
    cout<<" "<<t;
    q.pop();
    if(t==gl)
    { cout<<"success"; return 1;}
    else
    {
        for(ltit=lt[t].begin(); ltit!=lt[t].end(); ltit++)
                             q.push(*ltit);
    }   
    }
    return 0;                         
}

int main()
{
    freopen("inii.txt","r",stdin);
    freopen("outt.txt","w",stdout);
    int i,j,k,n,t,goal;
    makelist();
    
    cin>>goal;
    if(!bfs(goal,1))cout<<"ZZZZZZZZZZZZ";
    system("pause");
}
