#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
void print(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }
}
void insertatbeginning(struct node *head)
{
    
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data to insert\n");
    scanf("%d",&newnode->data);
      newnode->next=NULL;
      newnode->next=head;
      head=newnode;
}
int main()
{
    struct node *head,*temp;
    int choice=1;
    head=0;
    while(choice)
    {
        struct node *newnode;
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==0)
        {
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("enter the choice?\n");
        scanf("%d",&choice);

    }
    printf("the linklist before insertion\n");
    print(head);
       insertatbeginning(head);
      printf("linklist after insertion\n");
      print(head);
      return 0;

}