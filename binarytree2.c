#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(int data)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
}
int main()
{
    struct node *p=create(2);
    struct node *p1=create(3);
    struct node *p2=create(6);
    p->left=p1;
    p->right=p2;
    return 0;
}