#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display( struct node *ptr);

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
