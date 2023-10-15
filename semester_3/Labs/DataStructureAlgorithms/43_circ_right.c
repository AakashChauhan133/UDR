#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int data;
    struct list *next;
} c;

void right(c **);
void left(c **);
void insert(c **);
void display(c *);

int main()
{
    c *last = NULL;
    int ch = 1;

    while(ch)
    {
        printf("********** MENU ********** \n");
        printf("[1] Add to right hand side\n");
        printf("[2] Add to left\n");
        printf("[3] Display list\n");
        printf("[4] Insert at position\n");
        printf("[5] Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            right(&last);
            break;
        case 2:
            left(&last);
            break;
        case 3:
            display(last);
            break;
        case 4:
            insert(&last);
            break;
        case 5:
            ch = 0;
            break;
        }

    }

    return 0;
}

void right(c **last)
{
    c * p = NULL;
    p = (c *)malloc(sizeof(c));
    if (!p)
    {
        printf("FULL\n");
        return;
    }
    printf("Enter the data: ");
    scanf("%d", &(p->data));

    if (!(*last))
    {
        *last = p;
        (*last)->next = *last;
    }
    else
    {
        p->next = (*last)->next;
        (*last)->next = p;
        *last = (*last)->next;
    }
}

void display(c *last)
{
    if (!last)
        return;
    last = last->next;
    c *p = last;

    do
    {
        printf("%d ", last->data);
        last = last->next;
    }
    while(last != p);
    printf("\n");
}

void left(c **last)
{
    c * p = NULL;
    p = (c *)malloc(sizeof(c));
    if (!p)
    {
        printf("FULL\n");
        return;
    }
    printf("Enter the data: ");
    scanf("%d", &(p->data));

    if (!(*last))
    {
        *last = p;
        (*last)->next = *last;
    }
    else
    {
        p->next = (*last)->next;
        (*last)->next = p;
    }
}


void insert(c **last)
{
    int pos;
    c * p = NULL, *temp = NULL;
    p = (c *)malloc(sizeof(c));
    if (!p)
    {
        printf("FULL\n");
        return;
    }
    printf("Enter the position: ");
    scanf("%d", &pos);
    printf("Enter the data: ");
    scanf("%d", &(p->data));

    if (!(*last))
    {
        *last = p;
        (*last)->next = *last;
        return;
    }

    if (pos == 1)
    {
        p->next = (*last)->next;
        (*last)->next = p;
        return;
    }
    temp = (*last)->next;
    do
    {
        pos--;
        if (pos == 1)
            break;
        temp = temp->next;
    }while((*last)->next != temp);

    if (temp == (*last)->next)
    {
        printf("gg");
        p->next = (*last)->next;
        (*last)->next = p;
    }
    else
    {
        p->next = temp->next;
        temp->next = p;
    }
}

