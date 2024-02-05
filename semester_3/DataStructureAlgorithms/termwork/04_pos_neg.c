/*
    Author  :   Aakash Chauhan
    Roll no :   22021931
    Section :   IoT 
    Class Roll: 01
    Write a C program to create two link lists positive and negative from a Original linked list, so that positive linked list contains all positive elements and negative  linked list contains negative elements. Positive and negative linked lists should use the node of existing original linked list.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    int data;
    struct ListNode *next;
} list;

// Function decleration
void create(list **, list **);
void pos_neg(list **, list **, list **);
void display(list *);

int main()
{
// Local decleration
    list *left = NULL, *right = NULL, *l1 = NULL, *l2 = NULL;
    int n, i, v;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the list\n");
    for (i = 0; i < n; i++)
    {
        create(&left, &right);
    }

    display(left);
    pos_neg(&left, &l1, &l2);
    printf("List 1: ");
    display(l1);
    printf("List 2: ");
    display(l2);
    return 0;
}

void create(list **left, list **right)
{
    // Function to create a singly linked list
    list *p = NULL;
    int val;
    p = (list *)malloc(sizeof(list));
    if (!p)
    {
        printf("ERROR\n");
        return;
    }
    printf("Enter the value: ");
    scanf("%d", &val);
    p->data = val;

    if (!(*left))
    {
        *left = *right = p;
    }
    else
    {
        (*right)->next = p;
        *right = p;
    }
    p->next = NULL;
}

void pos_neg(list **left, list **l1, list **l2)
{
    // Function to seperate negative positive in two lists 
    list *l = *left, *q = *left, *p = NULL, *n = NULL;
    if (*left == NULL)
        return;

    while (l)
    {
        if (l->data < 0)
        {
            if (*l1 == NULL)
            {
                *l1 = p = l;
            }
            else
            {
                p->next = l;
                p = l;
            }
            l = l->next;
            p->next = NULL;
        }
        else if (l->data > 0)
        {
            if (*l2 == NULL)
            {
                *l2 = n = l;
            }
            else
            {
                n->next = l;
                n = l;
            }
            l = l->next;
            n->next = NULL;
        }
    }
}

void display(list *left)
{
    while (left)
    {
        printf("%d ", left->data);
        left = left->next;
    }
    printf("\n");
}
