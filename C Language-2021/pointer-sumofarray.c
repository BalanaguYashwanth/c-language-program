#include<stdio.h>
void main()
{
    int *q,a[]={10,10,10,10,10},sum=0;
    for(q=&a[0];q<&a[5];q++)
    {
        sum=sum+*q;
    }
    printf("%d",sum);
}
