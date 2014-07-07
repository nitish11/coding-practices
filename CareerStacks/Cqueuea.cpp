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
#include<algorithm>

typedef long long int int64;

struct node
{
       int data;
       struct node* next;
};
struct node *head,*root,*newnode;


void print(struct node* root)
{
     for(int i=1; i<20; i++)
     {
        cout<<root->data<<" ";
        root = root->next;      
     }
}


int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n,i,j,k,t,d,data;
    int* p,q;
    
    cin>>t;  
    while(t--) 
    {
            cin>>n;
            root = (struct node*)malloc(sizeof(struct node*));
            root->data=2; root->next=NULL;
            head =root;  
            for(i=3; i<=n; i++)
            {
                     newnode = (struct node*)malloc(sizeof(struct node*));
                     newnode->data = i;
                     newnode->next=NULL;
                     root->next=newnode;
                     root= newnode;
            }
            root->next=head;
            //print(head);cout<<"^^^^^^^^^^^^^^^"<<endl;
            k=1; root=head; j=1;
            while(1)
            {
                    if(n==1) break;
                    for(i=1; i<k; i++) root=root->next; 
                    cout<<root->next->data<<" ";
                    root->next = root->next->next; n--;
                    //print(root);cout<<"*******"<<endl;
                    k++;if(j==1) {k++; j++;}
            }
            cout<<endl;
    }
    return 0;
}


