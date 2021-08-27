#include<stdio.h>
void main()
{
    int a=9823,i,sum=0,a1;
    while(a>0)
    {
        a1=a%10;
        sum=sum+a1;
        a=a/10;
    }
    printf("\n the value of sum is %d \n",sum);
}