#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next ;
};
    struct node *top=NULL;
int emptyset(struct node *ptr);
int fullset(struct node *ptr);
struct node * push(struct node *ptr,int x);
void inserttraversal(struct node *ptr);
int pop(struct node *ptr);
int main()
{

printf("%d\n",emptyset(top));
printf("%d\n",fullset(top));

top=push(top,12);
top=push(top,14);
top=push(top,18);

printf("after pushing element\n");
printf("%d\n",emptyset(top));
printf("%d\n",fullset(top));
inserttraversal(top);
printf("%d is the popped element",pop(top));


}


void inserttraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int pop(struct node *ptr)
{
    if(emptyset(ptr))
    {
        printf("stackunderflow\n");
    }
    else
    {
        struct node *p=ptr;
        int x=p->data;
        p=p->next;
        free(p);
        return x;
    }
}

struct node * push(struct node *ptr,int x)
{
    if(fullset(ptr))
    {
        printf("overflow, cannot push element\n");
    }
    else
    {
        struct node *p=(struct node *)malloc(sizeof(struct node));
        p->data=x;
        p->next=ptr;
        ptr=p;
        return ptr;
    }
}


int fullset(struct node *ptr)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



int emptyset(struct node *ptr)
{
    if(ptr==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
