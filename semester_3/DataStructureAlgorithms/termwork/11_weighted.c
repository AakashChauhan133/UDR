/*
    Author  :   Aakash Chauhan
    Roll no :   22021931
    Section :   IoT
    Class Roll: 01
    Write a C program to store the details of a weighted graph (Use array of pointers concept). 
*/

#include <stdio.h>
#include <stdlib.h>
#define     MAX     10

typedef struct graph
{
    int node;
    int weight;
    struct graph *next;
} g;

// Function decleration
void insert(g **, int, int);
void display(g* [], int);

int main()
{
    // Local decleration
    g *arr[MAX] = { NULL };
    int n, i, ch, no, w;
    printf("Enter the number of vertices : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        ch = 1;
        while (ch)
        {
            printf("Enter the node and weight of node connected to node %d\n", i + 1);
            scanf("%d%d", &no, &w);
            insert(&arr[i], no, w);
            printf("Press 0 move to next node press 1 for same node ... ");
            scanf("%d", &ch);
        }
    }
    display(arr, n);
    return 0;
}


void insert(g **list, int no, int w)
{
    // Create a list with weigth
    g *temp = NULL, *p = NULL;
    p = (g*)malloc(sizeof(g));
    if (p == NULL)
    {
        printf("No memory");
        return;
    }
    p->weight = w;
    p->node = no;
    if (*list == NULL)
    {
        *list = p;
        p->next = NULL;
        return;
    }
    temp = *list;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = p;
    p->next = NULL;

}


void display(g* arr[], int n)
{
    // Print with weigth
    int i;
    for (i = 0; i < n; i++)
    {
        printf("|%d| => ", i+1);
        while (arr[i])
        {
            printf(" ||%d ,%d|| ", arr[i]->node, arr[i]->weight);
            arr[i] = arr[i]->next;
        }
        printf("\n");
    }
}
