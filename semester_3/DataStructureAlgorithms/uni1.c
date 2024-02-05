#include <stdio.h>
#include<stdlib.h>
typedef struct stack {
    int data;
    struct stack *next;
}stk;
stk* push(stk*);
stk* pop(stk*);
void disp(stk*);
main()
{
    int ch;
    stk* top = NULL;
    do
    {
        printf("\n1-Push\n2-Pop\n3-Display");
        scanf("%d",&ch);
        switch(ch)
        {
            case1:
            top=push(top);
            break;
            case2:
            top=pop(top);#include <stdio.h>
typedef struct stack {
    int data;
    struct stack *next;
}stk;
stk* push(stk*);
stk* pop(stk*);
void disp(stk*);
main()
{
    int ch;
    stk* top = NULL;
    do
    {
        printf("\n1-Push\n2-Pop\n3-Display");
        scanf("%d",&ch);
        switch(ch)
        {
            case1:
            top=push(top);
            break;
            case2:
            top=pop(top);
            break;
            case3:
            disp(top);
            break;
        }
    }while(ch<=3);
}
stk* push(stk *tp)
{
    stk *p=NULL;
    int x;
    printf("\nEnter value");
    scanf("%d",&x);
    p=(stk*)malloc(sizeof(stk));
    p->data = x;
    p->next = tp;
    tp=p;
    return(tp);
}
stk* pop(stk* tp)
{
    stk* p=NULL;
    if(tp==NULL)
        printf("Stack is empty");
    else
    {
        p=tp;
        printf("\npopped node is %d",tp->data);
        tp=tp->next;
        free(p);
    }
}
void disp(stk* tp)
{
    if(tp==NULL)
    printf("\nStack is empty");
    tp=tp->next;
}

            break;
            case3:
            disp(top);
            break;
        }
    }while(ch<=3);
}
stk* push(stk *tp)
{
    stk *p=NULL;
    int x;
    printf("\nEnter value");
    scanf("%d",&x);
    p=(stk*)malloc(sizeof(stk));
    p->data = x;
    p->next = tp;
    tp=p;
    return(tp);
}
stk* pop(stk* tp)
{
    stk* p=NULL;
    if(tp==NULL)
        printf("Stack is empty");
    else
    {
        p=tp;
        printf("\npopped node is %d",tp->data);
        tp=tp->next;
        free(p);
    }
}
void disp(stk* tp)
{
    if(tp==NULL)
    printf("\nStack is empty");
    tp=tp->next;
}
