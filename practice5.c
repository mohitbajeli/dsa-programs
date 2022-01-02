#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display( struct node *ptr);
struct node *between(struct node *head,int data,int index);
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    head->data=23;
    head->next=second;
    second->data=24;
    second->next=third;
    third->data=25;
    third->next=NULL;
    printf("linklist before insertion\n");
    display(head);
    printf("linklist after insertion\n");
    between(head,987,2);
    display(head);
}

void display( struct node *ptr)
{


  while(ptr!=NULL)
  {
      printf("%d element\n",ptr->data);
      ptr=ptr->next;
  }
}
struct node *between(struct node *head,int data,int index)
{
    int i=0;
 struct node*p=head;
 struct node *ptr=(struct node *)malloc(sizeof(struct node));
 ptr->data=data;

 while(i!=index-1)
 {
     p=p->next;
     i++;
 }
 ptr->next=p->next;
 p->next=ptr;
 return head;
}









