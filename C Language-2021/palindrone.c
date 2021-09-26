#include<stdio.h>
void main()
{
    int a,n,sum=0,total=0;
    printf("enter the palindrone");
    scanf("%d",&a);
    n=a;
    while(n>0)
    {
        a=n%10;
        n=n/10;
        sum=sum*10+a;
    }
    printf("%d",sum);
}