#include<stdio.h>
void main()
{
    int arr1[]={11,22,33,44,55},arr2[5],*p,i=1;
    p=arr2;
     for(i=0;i<5;i++)
    {
         *p=(*arr1)++;
         p++;
     }
    for(i=0;i<5;i++)
    {
        printf("\n %d \n",arr1+i);
    }
}