#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int data;
    struct list *next;
}c;

void display_single(c*);
void display_circ(c*);


int main()
{
    c *p = NULL, *head = NULL, *last = NULL;
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        p = (c *)malloc(sizeof(c));
        printf("Enter the content: ");
        scanf("%d", &(p->data));
        if (!last && !head)
        {
            head = last = p;
        }
        else
        {
            last->next = p;
            last = p;
        }
        p->next = NULL;
    }
    display_single(head);

    // Converting singly linked list to doubly linked list
    last->next = head;
    display_circ(last);


    return 0;
}

void display_single(c* head)
{
    printf("Content in singly linked list: ");
    while (head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
void display_circ(c *last)
{
    // Bring it to first
    last = last->next;
    printf("Content in doubly linked list: ");
    c *p = last;

    do
    {
        printf("%d ", p->data);
        p = p->next;
    }while(p!= last);

    printf("\n");
}
