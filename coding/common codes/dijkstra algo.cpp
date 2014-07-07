#include<stdio.h>
#define MAX 250
#define INF 9999999
int cost[MAX][MAX];
int dis[MAX][MAX];
static int calc[MAX];
void dijkstra(int v,int source)
{	int visited[MAX],count,mindistance,nextnode,i,j,node,min;
	int distance[MAX];
	min=INF;
	calc[source]=1;
	for(i=0;i<v;i++)
	{	distance[i]=cost[source][i];
		dis[source][i]=distance[i];
		visited[i]=0;
		if(distance[i]<min && i!=source)
		{	min=distance[i];
			node=i;
		}
	}
	visited[source]=1;
	distance[source]=0;
	dis[source][source]=0;
	count=1;
	while(count<v-1)
	{	mindistance=min;
		nextnode=node;
		visited[nextnode]=1;
		min=INF;
		for(i=0;i<v;i++)
		{	if(!visited[i])
			{	if(mindistance+cost[nextnode][i]<distance[i])
				{	distance[i]=mindistance+cost[nextnode][i];
					dis[source][i]=distance[i];
				}
				if(distance[i]<min)
				{	min=distance[i];
					node=i;
				}
				
			}
		}
		count++;
	}	
}
int main()
{	int i,j,n,S,G,D,m;
	int tt,ts;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&cost[i][j]);
	scanf("%d",&m);
	while(m--)
	{	scanf("%d %d %d",&S,&G,&D);
		if(S==G && G==D)
		{	printf("0 0\n");
			continue;
		}
		if(calc[S]!=1)
			dijkstra(n,S);
		if(S==G || G==D)
		{	tt=dis[S][D];
			ts=0;
		}
		else
		{	if(calc[G]!=1)
				dijkstra(n,G);
			tt=dis[S][G]+dis[G][D];
			ts=tt-dis[S][D];
		}
		printf("%d %d\n",tt,ts);
	}
	return 0;
}
