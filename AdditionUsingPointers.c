#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    printf("%d",*p+*q);
}
