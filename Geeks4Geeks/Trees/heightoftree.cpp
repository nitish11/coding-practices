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


/* Function to heightoftree */

 
int heightoftree(struct node* root)
{
    if(root==NULL) {return 0; }
    return (1+ max(heightoftree(root->left),heightoftree(root->right)));    
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
  root->right->left->left  = newNode(9);
  root->right->left->right  = newNode(8);
 
/* Constructed  tree is
            10
           / \
         11   4
             / \
           3   5
         / \
        9   8
*/
 
 cout<<heightoftree(root);
 cin>>i;
  return 0;
}
