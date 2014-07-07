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
int height(struct node* root)
{
    int64 t,i,j,k,mx;
  	if(root==NULL)
  	return 0;
  	else
  	return(1+max(height(root->left),height(root->right)));    
}

int diameter(struct node* root)
{
	int lh,rh,rootht,nrootl,nrootr;
	if(root==NULL)
	return 0;
	lh=height(root->left);
	rh=height(root->right);
	rootht=lh+rh+1;
	nrootl=diameter(root->left);
	nrootr=diameter(root->right);
	return(max(rootht,max(nrootl,nrootr)));
}

int balanced(struct node* root)
{
int rh,lh,ans,rhb,lhb;
/*if(root==NULL)
return 0;
rh=height(root->right);
lh=height(root->left);
ans=abs(rh-lh);
rhb=balanced(root->right);
lhb=balanced(root->left);
return((rhb==0 || rhb==1 || lhb==0 || lhb==1)?1:0);*/
int flag;
if(root==NULL)
return 1;
rh=height(root->right);
lh=height(root->left);
ans=abs(rh-lh);
if(ans==0 || ans==1)
{
hb=balanced(root->right);
lhb=balanced(root->left);
flag=rhb && lhb;
}
else
flag=0;
return flag;

}
 
/* Driver program to test mirror() */
int main()
{
  
  int m,n,i,j,k;  
  struct node *root  = newNode(10);
  root->left         = newNode(11);
  root->left->left          = newNode(12);
  root->left->left->left          = newNode(13);
  root->right        = newNode(4);
  root->right->left  = newNode(3);
  root->right->right = newNode(5);
  root->right->left->left  = newNode(9);
  root->right->left->right  = newNode(8);
 
/* Constructed  tree is
            10
           / \
         11   4
         /    / \
        12   3   5
        /   / \
       13  9   8
*/


//call of function xyz

m=height(root);
cout<<m;
n=diameter(root);
cout<<endl<<n;
i=balanced(root);
if(i==1)
cout<<" balanced";
else
cout<<"not balanced";
  return 0;
}
