#include<stdio.h>
int main()
{
    int n,a[10],count=0,i,j,k[10],p=0,h=0,min=0;
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
        if(count>3)
        {
            printf("%d",a[i]);
            break;

        }
        else if(count>=1)
        printf("%d",a[i]);

    }

}

