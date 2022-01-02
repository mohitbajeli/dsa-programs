#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
int fullset(struct stack *ptr);
char pop(struct stack *ptr);
void push(struct stack *ptr,char x);
int emptyset(struct stack *ptr);
int parenthesis(char *exp);
int main()
{
    char *exp="((3+2))*8";
    if(parenthesis(exp))
    {
        printf("the parenthesis is matching\n");
    }
    else
    {
        printf("parenthesis not matching\n");
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

void push(struct stack *ptr,char x)
{
    if(fullset(ptr))
    {
        printf("stackoverflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=x;

    }
}

char pop(struct stack *ptr)
{
    if(emptyset(ptr))
    {
        printf("underflow\n");
    }
    else
    {
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}


int parenthesis(char *exp)
{
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=50;
    sp->top=-1;
    sp->arr=(char *)malloc(sp->size *sizeof(char));
    for(int i=0;exp[i]!='0';i++){
        if(exp[i]=='(')
    {
        push(sp,'(');
    }
    else if(exp[i]==')')
    {
        if(emptyset(sp))
        {
            return 0;
        }
        pop(sp);
    }
    }

if(emptyset(sp))
{
    return  1;
}
else
{
    return 0;
}
}
