#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("\n enter the value for size of an array \n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("\n load the %d value \n",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        printf("\n value is %d \n",a[i]);
    }
    printf("the total value is %d",sum);
}
