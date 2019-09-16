#include<stdio.h>
int main()
{
    int i,n,t;
    scanf("%d",&n);
    t=n%100;
    if(t!=0 && t%4==0)
        printf("Leap Year");
     else if(t==0 && n%400==0)
        printf("leap year");
    else
        printf("non leap year");


}
