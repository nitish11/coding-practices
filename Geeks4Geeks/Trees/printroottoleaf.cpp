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
    struct node* left;
    struct node* right;
};
 
struct node* newNode(int );
 
/* Helper function that allocates a new node with the given data and NULL left and right pointers. */
struct node* newNode(int data)
{
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data  = data;
  node->left  = NULL;
  node->right = NULL; 
  return(node);
}


/* Function to print roottoleave */
void print(int a[],int n)
{
     for(int i=0; i<n; i++) cout<<a[i]<<" ";
     cout<<endl;
} 
 
void roottoleave(struct node* root, int a[],int plen)
{
    int64 t,i,j,k,mx;
    
    if(root==NULL) {return; }
    a[plen] = root->data;  plen++;
    if(root->left ==NULL && root->right ==NULL)print(a,plen);
    if(root->left !=NULL) roottoleave(root->left,a,plen);
    if(root->right !=NULL) roottoleave(root->right,a,plen);    
}

void printroottoleave(struct node* root)
{
     int a[1000],plen=0;
     roottoleave(root,a,plen);
}


/* Driver program to test mirror() */
int main()
{
  
  int  a[100][100],m,n,i,j,k;  
  struct node *root  = newNode(10);
  root->left         = newNode(11);
  root->right        = newNode(4);
  root->right->left  = newNode(3);
  root->right->right = newNode(5);
 
/* Constructed  tree is
            10
           / \
         11   4
             / \
           3   5
*/
 
 printroottoleave(root);
 cin>>i;
  return 0;
}
