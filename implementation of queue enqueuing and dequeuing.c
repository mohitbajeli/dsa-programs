#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int r;
    int f;
    int *arr;
};
int fullset(struct queue *ptr);
int emptyset(struct queue *ptr);
int dequeue(struct queue *ptr);
void enqueue(struct queue *ptr,int val);
int main()
{
    struct queue q;
    q.size=50;
    q.r=q.f=-1;
    q.arr=(int  *)malloc(q.size*sizeof(int));
    printf("before enqueuing\n");
    printf("%d\n",emptyset(&q));
    printf("%d\n",fullset(&q));
    enqueue(&q,12);
      enqueue(&q,14);
        enqueue(&q,19);
    printf("after enqueuing\n");
    printf("%d\n",emptyset(&q));
    printf("%d\n",fullset(&q));
    printf("dequeued element is %d\n",dequeue(&q));


}

int fullset(struct queue *ptr)
{
    if(ptr->r==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int emptyset(struct queue *ptr)
{
    if(ptr->r==ptr->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *ptr,int val)
{
    if(fullset(ptr))
    {
        printf("queue overflow\n");
    }
    else
    {
        ptr->r++;
        ptr->arr[ptr->r]=val;
     printf("enqueued element is %d\n",val);
    }
}

int dequeue(struct queue *ptr)
{
    if(emptyset(ptr))
    {
        printf("queue undeflow\n");
    }
    else
    {
        ptr->f++;
        int val=ptr->arr[ptr->f];
        return val;
    }
}
