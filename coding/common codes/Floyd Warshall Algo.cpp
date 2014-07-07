using namespace std;
#include<iostream>
#include<cstdio>

int main()
{
    int nodes,edges,i,j,k,ct,c[100][100],p[100][100];
    cin>>nodes>>edges;
     for(i=1; i<=nodes; i++)
              for(j=1; j<=nodes; j++)
                    a[i][j] = 1000000;
                      
              
     for(i=0; i<edges; i++)
     {
              cin>>j>>k>>ct;
              c[j][k] = ct;
              p[j][k]]=k;
     }
     
     for(k=1; k<=nodes; k++)
     {
              for(i=1; i<=nodes; i++)
              {
                       for(j=1; j<=nodes; j++)
                       {
                                if(c[i][j]>c[i][k]+c[k][j])
                                 { c[i][j] = c[i][k]+c[k][j]; p[i][j]=k; }
                       }
              }
     }

    
}
