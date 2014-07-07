using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include<queue>

typedef long long int int64;

pair<char,int>bc[100];
pair<char,int>ec[100];
pair<int,char>mc[100];

int len[100],cnt=1,mcnt=0;

void setvalue(string s)
{
     int i,l;
     len[cnt] = s.size();
     l = s.size()-1;
     i=1; while(s[i]==s[0]) i++;   bc[cnt].first=s[0];  bc[cnt].second=i;
     i=1; while(s[l-i]==s[l]) i++;   ec[cnt].first=s[l];  ec[cnt].second=i;
     cout<<bc[cnt].first<<" "<<bc[cnt].second<<"***"<<ec[cnt].first<<" "<<ec[cnt].second<<endl;

//******************************************************************************    
     int cnt1,cnt2,cnt3; 
     cnt1= bc[cnt].second;
     cnt2= ec[cnt].second;
     cnt3= s.size()-cnt1-cnt2;
     
     if(cnt3>cnt1 && cnt3>cnt2)
     {
         char ansm,chm; int crt,ans;
         chm=s[cnt1]; 
         crt = 0; ans=0;
         
         for(i=cnt1; i<=l-cnt2+1; i++)
         {
               if(s[i]==chm) {crt++; }
               else
               {
                   if(crt>ans) {ansm = s[i-1]; ans=crt; }
                   crt=1; chm=s[i]; 
               }      
         }
         mc[mcnt].first=ans; mc[mcnt].second=ansm; mcnt++;
     }
//************************************************************************     
}



int main()
{
    int64 test,t,i,j,k,n,r,ans,sum,fill;
    char ch,ch1,ch2,ansch;
    string st[100];
    
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    
    cin>>test;
    
    for(i=1; i<=test; i++)
    {cin>>st[i]; setvalue(st[i]);  cnt++;}
    
    ans=0;
    for(i=1; i<=test; i++)
    {
          //cout<<bc[i].first<<" "<<bc[i].second<<"**"<<ec[i].first<<" "<<ec[i].second<<endl; 
          if(bc[i].second>ans)  { ansch=bc[i].first; ans = bc[i].second; }
          if(ec[i].second>ans)  { ansch=ec[i].first; ans = ec[i].second; }
          
          for(j=1; j<=test; j++)
          {
                  //cout<<bc[j].first<<"##"<<ec[i].first <<endl;
                  if(i!=j && bc[j].first==ec[i].first && (bc[j].second+ec[i].second)>ans) 
                  {  ansch=bc[j].first; ans = bc[j].second+ec[i].second;   }
                  
                  if(i!=j && ec[j].first==bc[i].first && (ec[j].second+bc[i].second)>ans) 
                  {  ansch=ec[j].first; ans = ec[j].second+bc[i].second;   }
          }
    }
    sort(mc,mc+mcnt);
    if(mc[mcnt-1].first>ans) 
    { ans = mc[mcnt-1].first;  ansch=mc[mcnt-1].second;}
    
    cout<<ansch<<" "<<ans;
    return 0;
}
