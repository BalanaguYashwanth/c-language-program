#include<stdio.h>
void main()
{
    int a=10,b=20,c=0,r1;
    int (*ptr) (int,int);
    r1=sum(a,b);
    ptr=&sum;   
    c=ptr(a,b);
    printf("\n %d \n",c);
}

int sum(int x, int y)
{
    int temp=x+y;
    return temp;
}   