#include<stdio.h>
int binarysearch(int arr[],int size,int element);


int main()
{
    int size=7;
    int element=4;

    int arr[10]={1,2,3,4,5,6,7};
    int search=binarysearch(arr,size,element);
    printf(" element index is %d\n",search);
}
hellob gfhgfjgfjh


fhtfjyklj;o'p
int binarysearch(int arr[],int size,int element)
{
    int low=0;
    int mid;
    int high=size-1;
    while(low<=high)
    {
        mid=(low+mid)/2;
        if(arr[mid]==arr[element])
        {
          return mid;
        }
        if(arr[mid]<arr[element])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }

    }
        return -1;
}
