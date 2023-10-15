#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    struct ListNode *prev;
    int data;
    struct ListNode *next;
} list;

list * in_last(list *);
list * in_front(list *);
list * del_last(list *);
list * del_front(list *);
void del(list **, list **);
void display(list *);


int main()
{
    list *head = NULL, *last = NULL;
    int ch = 1;

    while (ch)
    {
        printf("****** MENU ******\n");
        printf("[1] insert after last\n");
        printf("[2] insert before front\n");
        printf("[3] delete last node\n");
        printf("[4] delete first node\n");
        printf("[5] delete from position\n");
        printf("[111] display\n");
        printf("[0] exit\n");
        scanf("%d", &ch);
        switch (ch)
        {

        case 1:
            last = in_last(last);
            if (!head)
                head = last;
            break;
        case 2:
            head = in_front(head);
            if (!last)
                last = head;
            break;
        case 3:
            last = del_last(last);
            if (!last)
                head = NULL;
            break;
        case 4:
            head = del_front(head);
            if (!head)
                last = NULL;
            break;
        case 5:
            del(&head, &last);
            break;
        case 0:
            ch = 0;
            break;
        case 111:
            display(head);
            break;
        default:
            printf("INVALID\n");
            break;
        }
    }

    return 0;
}

list * in_last(list *last)
{
    list *p = NULL;
    p = (list *)malloc(sizeof(list));

    if (!p)
        return last;
    printf("Enter data: ");
    scanf("%d", &(p->data));
    if (!last)
    {
        p->prev = NULL;
    }
    else
    {
        last->next = p;
        p->prev = last;
    }
    last = p;
    last->next = NULL;
    return last;
}

list * in_front(list *head)
{
    list *p = NULL;
    p = (list *)malloc(sizeof(list));

    if (!p)
        return head;
    printf("Enter data: ");
    scanf("%d", &(p->data));
    if (!head)
    {
        p->next = NULL;
    }
    else
    {
        p->next = head;
        head->prev = p;
    }
    head = p;
    head->prev = NULL;
    return head;
}
list * del_last(list * last)
{
    list *p = NULL;
    p = last;
    if (!last)
    {
        printf("Empty\n");
        return last;
    }

    if ((last->prev))
    {
        last = last->prev;
        last->next = NULL;
    }
    else
        last = NULL;


    printf("deleted => %d\n", p->data);
    free(p);

    return last;
}
list * del_front(list * head)
{
    list *p = NULL;
    p = head;
    if (!head)
    {
        printf("Empty\n");
        return head;
    }

    if ((head->next))
    {
        head = head->next;
        head->prev = NULL;
    }
    else
        head = NULL;


    printf("deleted => %d\n", p->data);
    free(p);

    return head;
}

void del(list ** head, list ** last)
{
    int pos, count = 0;
    list *p = NULL;
    if (!(*head))
    {
        printf("Empty\n");
        return;
    }
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos <= 1)
    {
        *head = del_front(*head);
        if (!(*head))
            *last = NULL;
        return;
    }
    p = *head;
        while(p->next)
    {
        count ++;
        if (count == pos)
        {
            break;
        }

        p = p->next;
    }
    if (p == *last)
    {
        *last = del_last(*last);
        if (!(*last))
            *head = NULL;
    }
    else
    {
        p->prev->next = p->next;
        p->next->prev = p->prev;
        printf("deleted %d\n", p->data);
        free(p);
    }
}

void display(list *head)
{
    while (head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
