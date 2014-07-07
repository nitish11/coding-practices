#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
    int t,i,j,a=0;
    cin>>t;
    string resp;
    vector<string>words;
    vector<string>ans;
    vector<string>words_backup;
    while(t--)
    {
    cin>>resp;
    words.push_back(resp);
    words_backup.push_back(resp);
    }
    //words_backup=words;
   for(int i=0; i<words_backup.size();i++)
    {cout<<words_backup[i]<<":)\n";}
    
    for(int i=0; i<words.size();i++)
    {
           sort(words[i].begin(),words[i].end());
           cout<<words[i]<<":P"<<endl;  
    }
   sort(words.begin(),words.end());
    for(i=0; i<words.size();i++)
    {
            if(words_backup[i]!="1")
            {
            for(j=1;j<words.size();j++)
            {
                    ans.push_back(words_backup[i]);
                     if(words[i]==words[j])
                     {
                      ans[a]=words_backup[j];a++;
                       words_backup[j]="1";
                     } 
            }    
            }             
    }
    sort(ans.begin(),ans.end());
   for(int i=0; i<words.size();i++)
    {cout<<ans[i]<<"\n";}
    
    system("pause");
    return 0;
}

