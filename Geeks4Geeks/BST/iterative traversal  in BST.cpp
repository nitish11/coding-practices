using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

typedef long long int int64;
int val;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
 
struct node* newNode(int );
 
void traversal(struct node* root)
{
  stack<struct node*>parent;

  while(!(parent.empty()) || root!=NULL)
  {
      if(root!=NULL)
      {   
          parent.push(root);
          root =root->left;
      }
      else
      {
          root = parent.top();
          cout<<root->data<<"*";   //visit(root)
          parent.pop(); root=root->right;
      }    
         
  }    
}


struct node* newNode(int data)
{
  struct node* node = (struct node*) malloc(sizeof(struct node));
  node->data  = data;
  node->left  = NULL;
  node->right = NULL;
 
  return(node);
}
 
int main()
{
  struct node *root  = newNode(2);
  root->left         = newNode(1);
  root->right        = newNode(5);
  root->right->left  = newNode(3);
  root->right->right = newNode(6);
 
/* Constructed binary search tree is
            2
           / \
         1   5
             / \
           3   6
*/
  traversal(root); 
  system("pause");
  return 0;
}
