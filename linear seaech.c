#include<stdio.h>
int linearsearch(int arr[],int element,int size);

int main()
{
    int arr[]={1,5,34,23,67};
    int result=linearsearch(arr,68,5);
    printf("%d is in %d index\n",34,result);
}



int linearsearch(int arr[],int element,int size)
{
    for (int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
        return -1;
}
