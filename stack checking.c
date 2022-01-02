#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr);
int isfull(struct stack *p);
int main()
{
    struct stack *s;
    s->size=8;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    if(isempty(s))
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("stack is full\n");
    }

    return 0;
}

int isempty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {

    return 0;
    }
}

int isfull(struct stack *p)
{
    if(p->top==p->size-1)
    {
        return 1;
    }
    else
    {

    return 0;
    }
}
