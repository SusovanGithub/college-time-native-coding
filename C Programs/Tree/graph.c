#include <stdio.h>
#include <stdlib.h>

int **graph;

void create_graph(int v)
{
	int i,j;
	graph = (int **) malloc(sizeof(graph)*v);
	printf("\nEnter the adjacenty matrix for the %d Vertices...\n",v);
	for(i=0;i<v;i++)
	{
		graph[i] = (int *) malloc(sizeof(int)*v);
		printf("\nEnter for the Vertice (%d) :---\n\n",i+1);
		for(j=0;j<v;j++)
		{
			if(i==j)
			{
				graph[i][j] = 0;
				continue;
			}
			printf("Enter the path value for Vertice (%d) to (%d) = ",i+1,j+1);
			scanf("%d",&graph[i][j]);
		}
	}
}

int* sort(int a[],int v)
{
	int i,j,temp;
	for(i=0;i<v;i++)
		for(j=i+1;j<v;j++)
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	return a;
}

void display(int **g,int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d  ",g[i][j]);
		printf("\n");
	}
}

int **dijkstra(int v)
{
	int i,j,sv,top;
	int **spg;
	int stack[v];
	printf("\nEnter the Source Vertice Number = ");
	scanf("%d",&sv);
	stack[0]=sv;
	top=0;
	while(top!=-1)
	{
		for(i=0;i<v;i++)
		{

		}
	}
}

int main()
{
	int v;
	printf("\nEnter the Number of Vertices = ");
	scanf("%d",&v);
	create_graph(v);
	display(graph,v,v);
	return 0;
}