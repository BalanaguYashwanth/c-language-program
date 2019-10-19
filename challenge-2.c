#include<stdio.h>
int main()
{
    int a[100],i,j,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=a[n-1];
    for(j=a[0];j<=k;j++)
    {
        for(i=0;i<n;i++)
        {
            if(j!=a[i] && j!=a[0]+a[1])
            {
                printf("%d",j);
                break;
            }
            else
                j++;
        }
        break;

    }
}

