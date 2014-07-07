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


/* Function to diameter of tree */
int height(struct node* root)
{
    if(root==NULL) return 0;
    else return (1+max(height(root->left),height(root->right)));
}


bool isbalanced(struct node* root)
{
    if(root==NULL) {return 1; }
    
    
    int lh = height(root->left);
    int rh = height(root->right);
    int k = lh-rh;
     
    //1st way 
    bool ans=true; ans = ans && (k==0 || k==-1 || k==1); return ans;    
    
    //2nd way
    //if(abs(k)<=1 && isbalanced(root->left) && isbalanced(root->right)) return 1; return 0;
}




/* Driver program to test mirror() */
int main()
{
  
  int m,n,i,j,k;  
  struct node *root  = newNode(10);
  root->left         = newNode(11);
  root->right        = newNode(4);
  root->right->left  = newNode(3);
  root->right->right = newNode(5);
  //root->right->left->left  = newNode(9);
  //root->right->left->right  = newNode(8);
 
/* Constructed  tree is
            10
           / \
         11   4
             / \
           3   5
         / \
        9   8
*/
 
 cout<<isbalanced(root);
 cin>>i;
  return 0;
}
