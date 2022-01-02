#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct  node *next;
};
struct node * insertatfirst(struct node *head,int data);
void print(struct node *head);
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));

    head->data=12;
    head->next=second;
    second->data=13;
    second->next=third;
    third->data=14;
    third->next=fourth;
    fourth->data=15;
    fourth->next=head;
    printf("circular linklist before insertion\n");
    print(head);
    printf("circular linklist after insertion\n");
    head=insertatfirst(head,33);
    print(head);


}


void print(struct node *head)
{
    struct node *ptr=head;
    do
    {
        printf("element is %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}


struct node * insertatfirst(struct node *head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;


}
