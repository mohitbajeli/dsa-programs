#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int emptyset(struct stack *ptr);
int fullset(struct stack *ptr);
void push(struct stack *ptr,int val);
int pop(struct stack *ptr);
int peek(struct stack *ptr,int i);
int stacktop(struct stack *ptr);
int stackbottom(struct stack *ptr);
int main()
{
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=20;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size *sizeof(int));
    printf("%d\n",emptyset(sp));
    printf("%d\n",fullset(sp));
    printf("after push\n");
    push(sp,34);
    push(sp,12);
    push(sp,213);
    push(sp,43);

    printf("%d\n",emptyset(sp));
    printf("%d\n",fullset(sp));
    printf("%d is the popped value\n",pop(sp));
   for(int j=1;j<=sp->top+1;j++)
   {
       printf("value at %d is %d\n",j,peek(sp,j));       //only will print three values as one value is popped ie=43;
   }

   printf("element at top is %d\n",stacktop(sp));
   printf("element at bottom is %d\n",stackbottom(sp));
}

int stackbottom(struct stack *ptr)
{
    return ptr->arr[0];
}

int stacktop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

int peek(struct stack *ptr,int i)
{
    int arrind=ptr->top-i+1;
    if(arrind<0){
        printf("invalid no cannot peek\n");
        return -1;
    }
    else
    {
        return ptr->arr[arrind];
    }
}


int pop(struct stack *ptr)
{
    if(emptyset(ptr))
    {
        printf("underflow no element present\n");
        return -1;
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }

}

void push(struct stack *ptr,int val)
{
    if(fullset(ptr))
    {
        printf("stackoverflow cannot push elements\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
        printf("pushed values  %d\n",val);
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
