#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    int data;
    struct ListNode *next;
} list;

void display(list *);
void asc_insert(list **, list **, int);

int main()
{
    list *head = NULL, *last = NULL;
    int ch = 1, num;

    while (ch)
    {
        printf("****** MENU ******\n");
        printf("[1] insert ascending\n");
        printf("[2] display\n");
        printf("[0] exit\n");
        scanf("%d", &ch);
        switch (ch)
        {

        case 1:
            printf("Enter the value of to insert: ");
            scanf("%d", &num);
            asc_insert(&head, &last, num);
            break;
        case 2:
            display(head);
            break;
        case 0:
            ch = 0;
            break;
        default:
            printf("INVALID\n");
            break;
        }
    }
    return 0;
}


void asc_insert(list **head, list **last, int num)
{
    list *p = NULL, *q = NULL, *follow = NULL;
    p = (list *)malloc(sizeof(list));
    if (!p)
    {
        printf("Error\n");
        return;
    }
    p->data = num;
    if (!*head && !*last)
    {
        *head = *last = p;
        (*head)->next = NULL;
    }
    else if (p->data <= (*head)->data)
    {
        p->next = *head;
        *head = p;
    }
    else if (p->data >= (*last)->data)
    {
        p->next = NULL;
        (*last)->next = p;
        *last = p;
    }
    else
    {
        q = *head;
        while (num >= q->data)
        {
            follow = q;
            q = q->next;
        }
        follow->next = p;
        p->next = q;
    }
}

void display(list * head)
{
    while(head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

