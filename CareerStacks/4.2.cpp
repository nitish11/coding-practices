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
struct tree
{
       int data;
       struct tree *left,*right; 
};

int mindepth(struct tree *node)
{
    if(node==NULL)
        return 0;
    else return (1 + min(mindepth(node->left),mindepth(node->right)));          
}

int maxdepth(struct tree *node)
{
    if(node==NULL)
        return 0;
    else return (1 + max(maxdepth(node->left),maxdepth(node->right)));          
}


bool isbalanced(struct tree *node)
{    
     return ((maxdepth(node)-mindepth(node))<=1);
}

struct tree* newNode(int data)
{
  struct tree* node = (struct tree*) malloc(sizeof(struct tree));
  node->data  = data;
  node->left  = NULL;
  node->right = NULL;
  return(node);
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
  int i,j,k;                                
  struct tree* root  = newNode(2);
  root->left         = newNode(1);
  root->right        = newNode(5);
  root->right->right = newNode(6);
  //root->right->right->right = newNode(10);
 
 cout<<isbalanced(root);
/* Constructed binary search tree is
            2
           / \
         1   5
              \
               6
                \
                10          
*/
    cin>>k;       
    return 0;
}
