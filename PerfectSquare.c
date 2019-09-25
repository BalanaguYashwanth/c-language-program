#include<stdio.h>
int main()
{
    int i,j,count=0,a[10],n;
    printf("enter the max number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j*j)
                count++;
        }

    }
    printf("the perfect squares are %d",count);
}
