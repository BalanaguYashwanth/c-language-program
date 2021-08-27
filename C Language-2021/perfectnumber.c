#include<stdio.h>
void main()
{
    int a,i,sum=0;
    printf("enter the number");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==a)
    {
        printf("%d number is perfect value",sum);
    }
    else{
         printf("%d number is not a perfect value",a);
    }
}
