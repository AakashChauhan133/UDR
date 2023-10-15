#include <stdio.h>

typedef struct ListNode
{
    int data;
    struct ListNode *next;
} list;

void create(list **, list **);
void rev(list *);


int main()
{
    list *left = NULL, *right = NULL;
    int ch = 1;

    while (ch)
    {
        printf("************ MENU ************\n");
        printf("[1] Insert\n");
        printf("[2] Print rev\n");
        printf("[3] Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            create(&left, &right);
            break;
        case 2:
            rev(left);
            printf("\n");
            break;
        case 3:
            ch = 0;
            break;
        }
    }
    return 0;
}

void create(list **left, list **right)
{
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

void rev(list *left)
{
    if (!left)
    {
        return;
    }
    rev(left->next);
    printf("%d ", left->data);
}
