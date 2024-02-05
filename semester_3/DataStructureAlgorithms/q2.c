#include<stdio.h>
#include<stdlib.h>
typedef struct snnode
{
    int info;
    struct snnode *next;
}sn;
void enqueue(sn **f,sn **r)
{
    sn *temp;
    temp=(sn*)malloc(sizeof(sn));
    if(temp==null)
    {
        printf("memory not allocated");
    }
    else if(*f=NULL && r==NULL)
    {
        f=r=0;
        printf("enter value");
        scanf("%d",&temp->info);
        r=r+1;
    }
    else
    {
        printf("enter value");
        scanf("%d",&temp->info);

    }
}
