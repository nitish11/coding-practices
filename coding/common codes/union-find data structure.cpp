/*
This is a data structure which helps us in
i) how to make each element as a set;
ii) how to union those sets and finally make into one set. 
*/

struct union_find
{
       int* p=new int[n+1];     // set of parent elements
       int* size=new int[n+1];  // size[i] stores the no. of elements in subtree i
       int n;                   // no. of elements.
}

/* init function initializes the set union data structure
   Here you can treat a tree equivalent to a set.
   it makes each element as a tree with the element itself as root.
   it initializes the size[i] for all i as 1 as all elements are tree, and make each element parent of itself.
*/

void init(union_find* s, int n)
{
     for(int i=1;i<=n;i++)
     {
             s->p[i]=i;
             s->size[i]=1;
     }

     s->n=n;
}

//it finds if root of tree in which element i exists

int find(union_find* s,int i)
{
    if(s->p[i]=i)
    return i;

    return (find(s, s->p[i]));
}

/*
This function finds if element i and j are in the same tree or set,
if their roots are same it means they are in the same set,
otherwise we will append one tree into another .
*/

void unionsets(union_find* s,int i,int j)
{
    int root1=find(s,i);
    int root2=find(s,j);
    if(root1==root2)
    return ;

    if(s->size[roo1]>s->size[root2])
    {
                                    s->p[root2]=root1;
                                    s->size[root1]=s->size[root1]+s->size[root2];
    }

    else
    {
        s->p[root1]=root2;
        s->size[root2]=s->size[root1]+s->size[root2];
    } 
}
