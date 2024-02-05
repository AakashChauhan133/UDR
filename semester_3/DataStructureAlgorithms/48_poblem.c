#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode * create();
struct ListNode* sort(struct ListNode *);
void display(struct ListNode *);

int main()
{
    struct ListNode *head = NULL;
    head = create();
    printf("Original: ");
    display(head);

    head = sort(head);
    printf("Sorted: ");
    display(head);

    return 0;
}


struct ListNode * create()
{
    struct ListNode *p = NULL, *head = NULL, *tail = NULL;
    int ch = 5;

    for (int i = 0; i < ch; i++)
    {
        p = (struct ListNode *)malloc(sizeof(struct ListNode));
        printf("Enter the exp: ");
        scanf("%d", &(p->data));
        if (!head)
            head = tail = p;
        else
        {
            tail->next = p;
            tail = p;
        }
    }
    p->next = NULL;
    return head;
};

void display(struct ListNode * head)
{
    while (head)
    {
        printf("%d  ", head->data);
        head = head->next;
    }
    printf("\n");
}


struct ListNode* sort(struct ListNode *head)
{
    struct ListNode *p = head, *q = NULL;
    int c = 0, temp;
    while (head != NULL)
    {
        head = head->next;
        c++;
    }
    head = p;

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < c - i - 1; j++)
        {
            if (head->data > q->next->data);
            {
                temp = head->data;
                head->data = head->next->data;
                head->next->data = temp;
            }
        }
        head = head->next;
    }

    return p;
};
