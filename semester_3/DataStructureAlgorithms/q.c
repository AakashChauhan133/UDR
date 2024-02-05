#include<stdio.h>
#include<stdlib.h>
typedef struct  snnode
{
     int info;
     struct snnode *next;
}sn;
void push(sn **top)
{
    sn *p1;
    p1=(sn*)malloc(sizeof(sn));
    if(p1==NULL)
    {
        printf("memory not allocated");
    }
    else if(*top==NULL)
    {
       *top=p1;
       p1->next=NULL;
       printf("enter info");
       scanf("%d",&p1->info);
    }
    else
    {
         printf("enter info");
       scanf("%d",&p1->info);
        p1->next=*top;
        *top=p1;
    }

}
void  pop(sn **top)
{
    sn *p2=*top;
    if(*top==NULL)
    {
        printf("STACK IS EMPTY");
    }
    else
    {
        printf("the poped element is %d",p2->info);
        *top=p2->next;
        free(p2);
    }

}
sn* display(sn *top)
{
    sn *p3=top;
    if(top==NULL)
    {
        printf("STACK IS EMPTY");
    }
    else
    {
        while(p3!=NULL)
        {
          printf("%d ",p3->info);
          p3=p3->next;
        }
    }
    return top;
    }
int main()
{
    sn *top;
    top=NULL;
    int choice;
    while(1)
    {
        printf("enter choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                  push(&top);
                  break;
            case 2:
                 pop(&top);
                 break;
            case 3:
                 top= display(top);
                  break;
            default :
                   printf("invalid choice");
        }
    }
    return 0;
}


