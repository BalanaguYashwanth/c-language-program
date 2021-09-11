#include<stdio.h>
void main()
{
    int a[]={10,2,3};
    int *p=a;
    int b[]={1,2,3};
    int *q=b;
    printf("%d",*p-*q);
}
