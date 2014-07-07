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


/* Function to perform xyz */
int xyz(struct node* root, int n)
{
    int64 t,i,j,k,mx,a[26],b[26];
    
    
}
 
 
/* Driver program to test mirror() */
int main()
{
  
  int  a[100][100],m,n,i,j,k;  
  struct node *root  = newNode(2);
  root->left         = newNode(1);
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
 

  return 0;
}
