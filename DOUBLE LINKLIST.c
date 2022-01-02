#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;

};
void print(struct node *head);
void printprev(struct node *head);

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));

      head->data=12;
      head->prev=NULL;
      head->next=second;
      second->data=13;
      second->prev=head;
      second->next=third;
      third->data=15;
      third->prev=second;
      third->next=NULL;
print(head);
printf("printing of prev linklist\n");
printprev(third);
}

void print(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}
void printprev(struct node *third)
{
    struct node *ptr=third;
    while(ptr!=NULL)
    {
        printf("element is%d\n",ptr->data);
        ptr=ptr->prev;
    }
}
