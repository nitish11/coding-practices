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


void print(struct node* root,int n)
{
     root=head;
     for(int i=1; i<=n; i++)
     {
        if(root->data<0) root->data=n;     
        printf("%d ",root->data);
        root = root->next;      
     }
}


int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,i,j,k,t,d,data,a[20011];
    int* p,q;
    
    cin>>t;  
    while(t--) 
    {
            scanf("%d",&n);
            root = (struct node*)malloc(sizeof(struct node*));
            root->data=-1; root->next=NULL;
            head =root;  
            for(i=2; i<=n; i++)
            {
                     newnode = (struct node*)malloc(sizeof(struct node*));
                     newnode->data = -i;
                     newnode->next=NULL;
                     root->next=newnode;
                     root= newnode;
            }
            root->next=head;
            //print(head,n);cout<<"^^^^^^^^^^^^^^^"<<endl;
            k=1; root=head; j=1;
            int d=1,nodes=n;
            
            while(1)
            {
                    if(n==1) break;
                    for(i=1; i<=k; i++) {root=root->next; if(root->data>0)i--;}
                    root->data=d; d++; k++; n--;
                    if(j==1) {k++; j++;}
                    //print(root,nodes);cout<<"^^^^^^^^^^^^^^^"<<endl;
            }
            print(root,nodes);cout<<endl;
    }
    return 0;
}


