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


/* Function to perform haspathsum */

bool haspathsum(struct node* root, int sum)
{
    int64 t,i,j,k,mx;
    bool ans=false;
    if(root==NULL) 
    {if(sum==0) return true; else return false;}
    
    k = root->data;  sum-=k;
    if(sum==0 && root->left==NULL && root->right==NULL) return true;
    
    if(root->left!=NULL) ans = ans || haspathsum(root->left,sum);
    if(root->right!=NULL)ans = ans || haspathsum(root->right,sum);
    
    return ans;
    
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
 
 cout<<haspathsum(root,22);
 cin>>i;
  return 0;
}
