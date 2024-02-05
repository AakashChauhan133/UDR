#include<stdio.h>
#include<stdlib.h>
 struct node{
   int info;
   struct node *next;
};
 struct node *head;

 struct insertatleft(){
  struct node *temp;
  temp=(struct *node)malloc(sizeof(struct node));
  if (temp==NULL)
  {
    printf("memory not available");;

  }
  else if (head==NULL){
  head=temp;
  temp->next=NULL;
  }
  else
  {
   struct node *p1=head;
   while(p1->next!=head){
   p1=p1->next;
   }
   p1->next=temp;
   temp->next=temp;
   head=temp;
   }
   scanf("%d",&temp->info);

   printf("element is inserted");
   return head;
   }
   struct node *insertatright(struct node *head)
   {
      struct node*temp;
      temp=(struct node*)malloc(sizeof(struct node));
      if(temp==NULL)
      {
          printf("memory not available");

      }
       else if(head=NULL)
       head=temp;
       temp->next=NULL;
   }
      struct node *p1=head;
      while(p1->next!=head){
       p1=p1->next;
      }








   struct node *traverse(struct node *head)
   {
    if(head==NULL)
    printf("list is empty");
    else
    {
      struct node *p1=head;
      do{
         printf("%d",p1->info);
         p1=p1->next;
        }while(p1->next!=head);

      int main(){
      int ch;

      struct node *head=NULL;


      do{
      printf("enter choice");
      scanf("%d",&ch);
      switch(ch);
      case1:insertatleft(head);
             break;
      case2:traverse(head);
            break;
      case3:insertatright(head);
            break;
      case4:deleteatright(head);
            break;
      case5:deleteatleft(head);
            break;
      case6:deleteatgivenpos(head);
            break;
      case7:insertatright(head);
            break;
























