#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *deleteatfirst(struct node *head);

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
    printf("linked list before deleting\n");
    display(head);
    printf("linked list after deleting\n");
    head=deleteatfirst(head);
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

struct node *deleteatfirst(struct node *head)
{
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
