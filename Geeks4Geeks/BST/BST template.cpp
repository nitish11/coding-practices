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
 
/* Function to find least comman ancestor of n1 and n2 */
int leastCommanAncestor(struct node* root, int n1, int n2)
{
    int64 t,i,j,k,mx,a[26],b[26];
    
    
}



/* Helper function that allocates a new node with the given data and NULL left and right pointers. */
struct node* newNode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data  = data;
  node->left  = NULL;
  node->right = NULL;
 
  return(node);
}
 
/* Driver program to test mirror() */
int main()
{
  struct node *root  = newNode(2);
  root->left         = newNode(1);
  root->right        = newNode(4);
  root->right->left  = newNode(3);
  root->right->right = newNode(5);
 
/* Constructed binary search tree is
            2
           / \
         1   4
             / \
           3   5
*/
  printf("\n The Least Common Ancestor is \n");
  printf("%d", leastCommanAncestor(root, 3, 5));
 
  getchar();
  return 0;
}
