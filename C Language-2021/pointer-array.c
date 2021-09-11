#include<stdio.h>
void main()
{
    int *ptr,arr[10]={1,2,3,4,5,6};
    ptr=arr;
    printf("\n %d %d %d\n",arr,&arr[0],ptr);

}