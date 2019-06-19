#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,a[100],j,count=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
           if(a[i]==a[j])
           {
               count++;
           }
        }
    if(count==1)
    {
        printf("%d",a[i]);
    }
    }

}

