#include<stdio.h>
void main()
{
    int i=1;
    int *p=&i;
    int *q;
    q=p;
    printf("%d %d",p,q);
    *q=5;   
    printf("\n %d \n",*p);
}
