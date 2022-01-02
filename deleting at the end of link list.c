#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *atlast(struct node *head);

void display(struct node *ptr);
int main()
{
    struct node  *head;
    struct node  *second;
    struct node *third;
    struct node *fourth;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));

    head->data=34;
    head->next=second;
    second->data=35;
    second->next=third;
    third->data=36;
    third->next=fourth;
    fourth->data=37;
    fourth->next=NULL;
    printf("link list before deleting\n");
    display(head);
    atlast(head);
    printf("link list after deleting\n");
    display(head);
    return 0;
}


void display(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node *atlast(struct node *head)
{
  struct node *p=head;
  struct node *q=head->next;
  while(q->next!=NULL)
  {
      p=p->next;
      q=q->next;
  }
  p->next=NULL;
  free(q);
  return head;
}
