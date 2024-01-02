/*
    Author  :   Aakash Chauhan
    Roll no :   2021931
    Section :   IoT
    Class Roll: 01
    Implimentaion of DFS in graph using adjacency matrix
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void dfs(int [][MAX], int, int [], int);

int main()
{
    // Local decleration
    int graph[MAX][MAX] = {0};
    int visited[MAX] = {0};
    int i, j, n, start;

    // Input of graph in the form of adjacency matrix
    printf("Enter the size of graph: ");
    scanf("%d", &n);
    printf("Enter the graph in form of matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }
    printf("Enter the starting: ");
    scanf("%d", &start);
    dfs(graph, n, visited, start);

    return 0;
}

void dfs(int graph[][MAX], int n, int visited[], int start)
{
    int i;
    if (visited[start] == 0)
    {
        printf("%d ", start);
        visited[start] = 1;
        for(i = 0; i < n; i++)
        {
            if (graph[start][i] == 1 && visited[i] == 0)
                dfs(graph, n, visited, i);
        }
    }
}