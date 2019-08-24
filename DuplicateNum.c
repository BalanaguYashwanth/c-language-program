#include<stdio.h>
int main()
{
    int a[10],i,j,count=0;
    for(i=0;i<=7;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<=7;i++)
    {
        count=0;
        for(j=i+1;j<=7;j++)
        {
            if(a[i]==a[j])
            {
                count++;

            }

        }

         if(count>0)
            printf("%d\n",a[i]);
    }


}
