/*
    Author  :   Aakash Chauhan
    Roll no :   22021931
    Section :   IoT 
    Class Roll: 01
     Write a program to add of two polynomials of degree n, using linked list 
    For example   p1=anxn+an-1xn-1 + an-2xn-2 + …….. a0x0 
    P2=bnxn+bn-1xn-1 + bn-2xn-2 + …….. b0x0 
    p1 = first   polynomial  
    p2 = second  polynomial  
    Find out   p3= p1+p2
*/
#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int co;
    int ex;
    struct ListNode *next;
};

// Function decleration
struct ListNode *create();
struct ListNode *add_poly(struct ListNode *, struct ListNode *);
void display(struct ListNode *);

int main()
{
// Local decleration
    struct ListNode *poly1 = NULL, *poly2 = NULL, *poly3 = NULL;
    poly1 = create();
    printf("polynomial 1: ");
    display(poly1);

    poly2 = create();

    printf("polynomial 1: ");
    display(poly1);
    printf("polynomial 2: ");
    display(poly2);
    printf("\nResulting polynomial : ");
    poly3 = add_poly(poly1, poly2);

// Output
    display(poly3);

    return 0;
}

struct ListNode *create()
{
    // Fuunction to create a linked list
    struct ListNode *p = NULL, *head = NULL, *tail = NULL;
    int ch = 1;
    while (ch)
    {
        p = (struct ListNode *)malloc(sizeof(struct ListNode));
        printf("Enter the exp: ");
        scanf("%d", &(p->ex));
        printf("Enter the co-eff: ");
        scanf("%d", &(p->co));
        if (!head)
            head = tail = p;
        else
        {
            tail->next = p;
            tail = p;
        }

        printf("Do you want to continue ...\n");
        scanf("%d", &ch);
    }
    p->next = NULL;
    return head;
};

struct ListNode *add_poly(struct ListNode *poly1, struct ListNode *poly2)
{
    // Function to add two polynomials
    struct ListNode *head = NULL, *tail = NULL, *p = NULL;
    while (poly1 && poly2)
    {
        p = (struct ListNode *)malloc(sizeof(struct ListNode));
        if (poly1->ex == poly2->ex)
        {
            p->co = poly1->co + poly2->co;
            p->ex = poly1->ex;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        else if (poly1->co > poly2->co)
        {
            p->co = poly1->co;
            p->ex = poly1->ex;
            poly1 = poly1->next;
        }
        else
        {
            p->co = poly2->co;
            p->ex = poly2->ex;
            poly2 = poly2->next;
        }
        if (!head)
            head = tail = p;
        else
        {
            tail->next = p;
            tail = p;
        }
    }

    if (poly1 != NULL)
    {
        tail->next = poly1;
    }
    else if (poly2 != NULL)
    {
        tail->next = poly2;
    }

    // tail->next = NULL;
    return head;
};
void display(struct ListNode *head)
{
    // Display function in forward manner
    while (head)
    {
        printf("%dX^%d  ", head->co, head->ex);
        head = head->next;
    }
    printf("\n");
}
