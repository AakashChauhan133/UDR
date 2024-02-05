
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    int data;
    struct ListNode *next;
} list;

void create(list **, list **);
list * rev(list *, list *);
void display(list *);

int main()
{
    list *left = NULL, *right = NULL, *l1 = NULL, *temp = NULL;
    int ch = 1, f;

    while (ch)
    {
        printf("************ MENU ************\n");
        printf("[1] Insert\n");
        printf("[2] Palindrome\n");
        printf("[3] Display\n");
        printf("[4] Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            create(&left, &right);
            break;
        case 2:
            l1 = rev(left, l1);
            f = 1;
            temp = left;
            while(temp)
            {
                if (l1->data != temp->data)
                {
                    printf("Not Palindrome\n");
                    f = 0;
                    break;
                }
                l1 = l1->next;
                temp = temp->next;
            }
            if (f)
                printf("Palindrome\n");
            break;
        case 3:
            display(left);
            display(l1);
            break;
        case 4:
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

list * rev(list *left, list *l1)
{
    l1 = NULL;
    list *p = NULL;
    while (left)
    {
        p = (list *)malloc(sizeof(list));
        p->data = left->data;
        p->next = l1;
        l1 = p;

        left = left->next;
    }
    return l1;
}

void display(list *left)
{
    while(left)
    {
        printf("%d ", left->data);
        left = left->next;
    }
    printf("\n");
}
