
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    struct ListNode *prev;
    int data;
    struct ListNode *next;
} list;

void display(list *);

list * in_last(list *);
void disp_overlap(list *, list *);

int main()
{
    list *head = NULL, *last = NULL;
    int ch = 1, i;
    printf("Enter the number of elements: ");
    scanf("%d", &ch);
    for (i = 0; i < ch; i++)
    {
        last = in_last(last);
        if (!head)
            head = last;
    }
    display(head);
    disp_overlap(head, last);

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

void display(list *head)
{
    printf("\noriginal: ");
    while (head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void disp_overlap(list * head, list * last)
{
    int count = 0;
    list *p = head;
    while (p)
    {
        count ++;
        p = p->next;
    }
    printf("\nSpecial print: ");
    if (count % 2)
    {
        while (head != last )
        {
            printf("%d ", head->data);
            head = head->next;
            printf("%d ", last->data);
            last = last->prev;
        }
        printf("%d ", head->data);
    }
    else
    {
        while (head->next != last )
        {
            printf("%d ", head->data);
            head = head->next;
            printf("%d ", last->data);
            last = last->prev;
        }
        printf("%d ", head->data);
        printf("%d ", last->data);
    }
    printf("\n");
}
