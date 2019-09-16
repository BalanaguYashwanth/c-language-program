#include<stdio.h>
int main()
{
    int a=0,b=1,c,i;
    printf("%d",a);
    printf("%d",b);
for(i=0;i<=8;i++)
{
    c=a+b;
    a=b;
    b=c;
    printf(" %d",c);
}
}
