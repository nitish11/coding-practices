using namespace std;
#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<list>
 

vector<pair<int,int> >open;
vector<pair<int,int> >close;
pair<int,int> pt;
pair<int,int> pr;
pair<int,int> pq;
vector<pair<int,int> >lt[1000];
vector<pair<int,int> >::iterator ltit;
vector<pair<int,int> >::iterator oit;
vector<pair<int,int> >::iterator cit;
int num_nodes,cost,cst;

void makelist()
{
    int i,j,k,n,m,s,t,ct;        
    cout<<"N-roads / M-edges"<<endl;
    cin>>n>>m;   //n roads- m edges
    num_nodes = n;
    cout<<"s-roads / t-edges /cost "<<endl;
    for(i=0; i<m;  i++)
    {
             cin>>s>>t>>ct;
             pt = make_pair(t,ct);
             lt[s].push_back(pt);
    }
}

int select()
{
    int ind=0;
    cost =-1;
    for(oit=open.begin(); oit!=open.end(); oit++)
    {
          pq = *oit;
          if(pq.second<=cost) {cost=pq.second; ind=pq.first;}
    }
    return ind;
}

int search(int m)
{
    int i,j,k,ct,fl=0;
    
    for(oit=open.begin(); oit!=open.end(); oit++)
    { pr = *oit; if(pr.first==m) {fl +=1; cst=pr.second; break;}}    
    for(cit=close.begin(); cit!=close.end(); cit++)
    { pr = *cit; if(pr.first==m) {fl +=2;  cst=pr.second; break;}}    
    if(fl==2)
    {
             if(pr.second>cost+cst){pr.second=cost+cst; open.push_back(pr); close.pop_back();}
    }
    return fl;
}

int ucs(int gl,int sr)
{
    int i=1,j,k,n,t;
    open.push_back(make_pair(sr,0));
    
    while(1)
    {
    if(!open.empty()) { cout<<"FAILED"; return -1;}
    n=select();                
    
    if(n==gl) { cout<<"success"; return 1;}

        for(ltit=lt[n].begin(); ltit!=lt[n].end(); ltit++)
        {
                   pt=*ltit;
                   t=search(pt.first);
                   if(t==0) 
                          {pt.second += cost;open.push_back(pt);}
                   if(t==1)
                          {if(pt.second>cost+cst){pt.second=cost+cst; }}
                   if(t==2)
                          {if(pt.second>cost+cst){pt.second=cost+cst;}}
        }       
    }
    return 0;                      
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int i,j,k,n,t,goal,dest;
    makelist();
    
    cin>>goal>>dest;
    if(ucs(goal,dest)==1)
    {
      for(cit=close.begin(); cit!=close.end(); cit++)
      {
                           pt = *cit;
                           cout<<pt.first<<"("<<pt.second<<")"<<" ";
    }}    
    system("pause");
}
