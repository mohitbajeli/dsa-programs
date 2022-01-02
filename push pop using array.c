#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int emptyset(struct stack *ptr );
int fullset(struct stack *ptr);
void push(struct stack *ptr,int value);
int pop(struct stack *ptr);
int main()
{
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size *sizeof(int));
     printf("stack has been created successfully\n");
    // isfull(sp,32);
    printf("%d\n",emptyset(sp));
    printf("%d\n",fullset(sp));
    push(sp,15);
    push(sp,5);
    push(sp,75);
    push(sp,95);
    push(sp,87);
    printf("%d\n",emptyset(sp));
    printf("%d\n",fullset(sp));
     printf("popped %d from stack",pop(sp));
    return 0;
}


void push(struct stack *ptr,int value)
{
    if(fullset(ptr))
    {
        printf("stackoverflow cannot push elements\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}



int emptyset(struct stack *ptr)
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
int fullset(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pop(struct stack *ptr)
{
    if(emptyset(ptr))
       {
           printf("no element present stack under flow\n");
           return -1;
       }
       else
        {
            int val=ptr->arr[ptr->top];
            ptr->top--;
            return val;
        }
}
