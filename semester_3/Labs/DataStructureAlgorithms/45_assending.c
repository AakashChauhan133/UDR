#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    struct ListNode *prev;
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
    list *p = NULL, *q = NULL;
    p = (list *)malloc(sizeof(list));
    if (!p)
    {
        printf("Error\n");
        return;
    }
    p->data = num;
    if (*head==NULL && *last== NULL)
    {
        *head = *last = p;
        (*head)->prev = (*head)->next = NULL;
    }
    else if (p->data <= (*head)->data)
    {
        p->prev = NULL;
        p->next = *head;
        (*head)->prev = p;
        *head = p;
    }
    else if (p->data >= (*last)->data)
    {
        p->next = NULL;
        p->prev = *last;
        (*last)->next = p;
        *last = p;
    }
    else
    {
        q = *head;
        while(q->next)
        {
            if (q->data >= num)
                break;
            q = q->next;
        }
        p->prev = q->prev;
        p->next = q;
        q->prev->next = p;
        q->prev = p;
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
