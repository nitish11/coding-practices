#include<iostream>
#include<cstdio>
using namespace std;
 

void abc(char *s)
{
    if(s[0] == '\0')
       {//cout<<"\n#"; 
       return; }
 
                     //cout<<endl<<"***"<<s;  
    abc(s + 1);      //cout<<endl<<"^^^"<<s;      
    abc(s + 1);      //cout<<endl<<s;    
    printf(" %c ", s[0]);
}
 
int main()
{
    abc("p"); cout<<endl;
    abc("qp"); cout<<endl;
    abc("rqp"); cout<<endl;
    abc("srqp"); cout<<endl;
    int i; cin>>i;
    return 0;
    
}
