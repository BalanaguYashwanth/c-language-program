#include<stdio.h>
int main()
{
    int i,j,n=6,k;
    int a[6]={1,2,3,4,5,6};
    k=n/2;
        for(i=0;i<(k-1);i++)
        {
            printf("%d ",a[i]);
        }
        for(i=n;i>=k;i--)
        {
        printf("%d ",a[i]);
        }

}

