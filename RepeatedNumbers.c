#include<stdio.h>
int main()
{
    int n,a[10],count=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
             if(a[i]==a[j])
             {
                 count++;
             }

        }
     if(count>=1)
        {
            printf("%d",a[i]);
        }

    }


}
