#include<stdio.h>
#define N 4
void main()
{
    int a[N],*p;
    for(p=a;p<a+N;p++)
    {
        scanf("%d",(p));
    }
    for(p=a+N-1;p>=a;p--)
    {
        printf("\n %d \n",*p);
    }
}
