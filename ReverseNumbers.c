#include<stdio.h>
int main()
{
    int n=123,d,a,b,c,sum=0;
    while(n>0)
    {
        a=(n%10);
        sum=sum*10+a;
        n=n/10;
    }
    printf("%d",sum);
}
