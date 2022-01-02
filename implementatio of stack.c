#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isfull(struct stack *ptr );
int isempty(struct stack *ptr);
int main()
{
    struct stack *s;
    s->size=80;
    s->top=-1;
    s->arr=( int *)malloc(s->size * sizeof (int));
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
    return 0;
}

int isfull(struct stack *ptr )
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    return 0;
}
