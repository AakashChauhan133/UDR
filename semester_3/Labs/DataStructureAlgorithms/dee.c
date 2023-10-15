#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;

};
void delete(struct node *head)
{
   if(head == NULL)
   return;

struct node  *prev=head;
struct node *node=head->next;

while(prev !=NULL && node !=NULL)
{
 prev->next = node->next;
 free(node);
 prev =prev->next;
 if(prev!=NULL)
   node=prev->next;
}
}

void print(struct node *node)
{
 while(node!=NULL)
 {
    printf("%d",node->data);
    node=node->next;

 }
}
int main()
{
   struct node* head=NULL ;
}
   int nodess[10];
   for(int i=0;i<=4;i++)
   {
}
    scanf("%d",&nodess[i]);
   }
   print(head);
   delete(head);
   print(head);
   return 0;
}
