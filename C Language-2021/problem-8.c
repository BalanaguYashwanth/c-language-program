#include<stdio.h>
void main()
{
    static int a[5];
    int i=0;
    a[i]=i++;
    printf("\n a=%d b=%d \n",a[0],a[1]);
}