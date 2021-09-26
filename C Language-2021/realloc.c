#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,n,*ptr;
    printf("enter the value");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
   
    ptr=(int *)realloc(ptr,2*(n*sizeof(int)));

    for(int i=4;i<9;i++)
    {
        scanf("%d",ptr+i);
    }

    for(int i=0;i<9;i++)
    {
        printf("%d",*(ptr+i));
    }

    free(ptr);
}
