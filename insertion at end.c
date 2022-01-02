#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display( struct node *ptr);
struct node *atend(struct node *head,int data);
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
    printf("element before inserting\n");
    display(head);
    printf("element after inserting\n");
    atend(head,65);
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

struct node *atend(struct node *head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;

    }
    ptr->next=NULL;
    p->next=ptr;
    return head;

}

