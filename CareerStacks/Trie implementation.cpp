#include< iostream>
#include< stdio.h>
#include< string.h>
#define NOT_FOUND 0
#define FOUND 1
using namespace std;

struct trie_node
{
       int words;
       int prefixes;
       trie_node* child[26];

}*root=NULL;

typedef struct trie_node tn;

//initialize the trie
void initializeRoot(tn *root)             
{
    tn* node=new tn;
    root=node;

    //initializing the trie root node
    for(int i=0;i < 26;i  )
             root-> child[i]=NULL;

    root-> words=0;
    root-> prefixes=0;
}

//add a child at character 'c' to a node 'node'
void addNode(tn *node, char c)          
{
     tn* childNode =new tn;

     for(int i=0;i < 26;i  )
             childNode->child[i]=NULL;

     childNode->words=0;
     childNode->prefixes=0;

     int index=(int)c-97;
     node->child[index]=childNode;
}

int findWord(tn *root, char *word)
{
     tn* curr;
     curr=root;
     int len=strlen(word);

     //find length of the word
     int i;
     for(i=0;i < len;i  )
     {
         // find the child of the current node depending on the next character
         int index = (int)word[i] - 97;         
         curr=curr->child[index];

          // if node exists then the word might exist
         if(curr==NULL)                        
           return NOT_FOUND;
     }
     if(i==len)
        return FOUND;
     else
         return NOT_FOUND;
}

void addWord(tn *root, char *word)
{
     int len=strlen(word);
     tn* curr=root;
     tn* parent=root;
     int i;
     for(i=0;i < len;i++)
     {
         // increment the number of prefix with the word till word[i]
         curr->prefixes++;

         int index= (int)word[i] - 97;            
         parent=curr;              
         curr=curr->child[i];

         // no child exists for word[i] -- create one
         if(curr==NULL)
            addNode(parent,word[i]);

         // word is finished increment the number of words
         if(i==len-1)
            curr->words++;              
     }
}

int countPrefix(tn *root, char *prefix)
{
     tn* curr;
     curr=root;
     int len=strlen(prefix);            
     int i;
     for(i=0;i < len;i++)
     {
         // find the child of the current node depending on the next character
         int index = (int)prefix[i] - 97;         
         curr=curr->child[index];

         // if node exists then the word might exist
         if(curr==NULL)                         
           return NOT_FOUND;
     }
     if(i==len)
        return curr->prefixes;
     else
         return NOT_FOUND;
}

int main()
{
    initializeRoot(root);
    system("pause");
    return 0;
}
