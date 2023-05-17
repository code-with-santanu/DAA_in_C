#include<stdio.h>

int a[20][20], visited[20], n;

void DFS(int v)
{
    int i;
    for (i = 0; i < n;i++)  //check all vertices in the graph
    {
        if(a[v][i]!=0 && visited[i]==0)  //adjacent to v and not visited 
        {
            visited[i] = 1;    //mark the vertices as visited
            printf("%d->", i);
            DFS(i);
        }
    }
}

int main()
{
    int v, i, j;

    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);

    for (i = 0; i < n;i++)  //Mark of the nodes as not visited
    {
        visited[i] = 0;
    }

    printf("\nEnter the graph data in matrix form:\n");   //Taking input in adjacency matrix
    for (i = 0; i < n;i++)
    {
        for (j = 0; j < n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnte the starting vertex: "); //starting vertex 
    scanf("%d", &v);

    printf("\nDFS Traversal is:\n");  //Represent the graph
    visited[v] = 1;   //Mark the starting vertex as visited
    printf("%d->", v);

    DFS(v); //Traverse rest of the nodes

    return 0;
}