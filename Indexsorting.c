#include<stdio.h>
int main()
{
    int i,j,a[10],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

   for(i=0;i<n;i++)
    {
        if(a[i]==i)
            printf("%d",a[i]);
    }

}
