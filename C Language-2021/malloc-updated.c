#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,n,*ptr;
    printf("enter the value");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int)); // for calloc -> (int *)calloc(n,sizeof(int))
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",*(ptr+i));
    }
}