#include<iostream>
#include<cstdio>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

typedef long long int int64;


int main()
{
//freopen("in.in","r",stdin);
//freopen("ot.out","w",stdout);

int64 test,n,m,i,j,k,mxcf,mxct;
string chef,country,vote,ct,wincf,winct;
map<string, string> chef_country;
map<string, int> chef_votes;
map<string, int> country_votes;
map<string, string> :: iterator mit;

 scanf("%lld%lld",&n,&m);    
    
     for(i=0; i<n; i++) 
     { 
           cin>>chef>>country; 
           //chef_country.insert(chef,country);
           chef_country[chef]=country; 
           chef_votes[chef]=0;
           country_votes[country]=0;         
     } 
     
     for(i=0; i<m; i++)
     {
       cin>>vote;
       ct =  chef_country[vote];
       chef_votes[vote]++;
       country_votes[ct]++;
       if(i==0){ mxcf= chef_votes[vote]; mxct= country_votes[ct]; wincf = vote; winct = ct; }
       else
       { 
          if(chef_votes[vote]>mxcf) { wincf = vote; mxcf = chef_votes[vote]; }
          if(chef_votes[vote]==mxcf && vote<=wincf)  { wincf = vote; mxcf = chef_votes[vote]; }
          if(country_votes[ct]>mxct) { winct = ct; mxct = country_votes[ct]; }
          if(country_votes[ct]==mxcf && ct<=winct)  { winct = ct; mxct = country_votes[ct]; }
       }
     }
     cout<<winct<<endl<<wincf<<endl;
     /*cout<<"Hello"<<endl;
     for(mit=chef_country.begin(); mit!=chef_country.end(); mit++)
     {
        chef = mit->first; 
        ct = mit->second;
        cout<<chef<<" "<<ct<<" "<<chef_votes[vote]<<" "<<country_votes[ct]<<endl;
     
     }*/

return 0;
}
