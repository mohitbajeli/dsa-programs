#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int emptyset(struct node *ptr);
int fullset(struct node *ptr);
void insertlist(struct node *ptr);
struct node *push(struct node *ptr,int x);
int pop(struct node *ptr);
int stacktop();
struct node *top=NULL;
int peek(int pos);
int stackbottom(struct node *ptr);
int main()
{
    printf("%d\n",emptyset(top));
    printf("%d\n",fullset(top));
    top=push(top,23);
    top=push(top,45);
    top=push(top,34);
    insertlist(top);
    //printf("popped element is %d\n",pop(top));

    printf("element peeked is %d\n",peek(1));
    printf("element is %d\n",stacktop());
    printf("element is %d\n",stackbottom(top));
}

int peek(int pos)
{
    struct node *ptr=top;
    for(int i=0;(i<pos-1 && ptr!=NULL);i++)
    {
        ptr=ptr->next;
    }
    if(ptr!=NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }

}

struct node *push(struct node *ptr,int x)
{
 if(fullset(ptr))
 {
     printf("stack overflow\n");

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
 int pop(struct node *ptr)
 {
     if(emptyset(ptr))
     {
         return -1;
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


void insertlist(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("element is %d \n",ptr->data);
        ptr=ptr->next;
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

int fullset(struct node *ptr)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL)
    {
        return 1;
    }
    return 0;
}

int stacktop()
{

return top->data;

}

int stackbottom(struct node *ptr)
{
    struct node *p=ptr;
    struct node *q=ptr->next;
    while(q->next!=NULL)
    {
        p=ptr->next;
        q=q->next;
    }
    return q->data;
}

