#include<stdio.h>
void swap(int*, int*);
void main()
{
    int a=10,b=20;
    printf("\n Before swapped values %d %d \n",a,b);
    swap(&a,&b);
    printf("\n After swapped values %d %d \n",a,b);
}

void swap(int* x,int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("\n inside the function %d %d \n",*x,*y);
}
