#include<stdio.h>
void swap(int, int);
void main()
{
    int a=10,b=20;
    printf("\n Before swapped values %d %d \n",a,b);
    printf("\n After swapped values %d %d \n",a,b);
    swap(a,b);
    printf("operation done");
}

void swap(int x,int y)
{   
    int temp;
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\n After swapped values inside functions %d  %d \n",x,y);
}
