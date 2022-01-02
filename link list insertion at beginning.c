#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display( struct node *ptr);
struct node *atfirst(struct node *head,int data);
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
    printf("link list before inserting\n");
    display(head);
        printf("link list after  inserting\n");
    head= atfirst(head,43);
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


struct node * atfirst(struct node *head,int data)
{
 struct node *ptr;
 ptr=(struct node *)malloc(sizeof(struct node));
 ptr->next=head;
 ptr->data=data;
head=ptr;
 return head;
}
