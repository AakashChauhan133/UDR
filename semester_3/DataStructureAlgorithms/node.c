#include<stdio.h>
#include<stdlib.h>
typedef struct SNodetype
{
    int info;
    struct  SNodetype *next;
}SN;
SN *head=NULL;
void insbeg()
{
    SN *temp;
    temp=(SN*)malloc(sizeof (SN));
    if(temp==NULL)
    {
        printf("overflow");
    }
    else if(head==NULL)
    {
        head = temp;
        temp->next=NULL;
        scanf("%d",&(temp->info));
    }
    else
    {
        scanf("%d",&(temp->info));
        temp->next=head;
        head=temp;
    }
    {

    }
    }
}
