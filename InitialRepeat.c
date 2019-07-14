#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,a[20],count=0,n,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

for(i=0;i<n;i++)
{
    count=0;
    for(j=0;j<n-1;j++)
    {
        if(a[i]==a[j])
            count++;
    }
        if(count==2)
        {
            printf("%d",a[i]);
            break;

        }
k++;
}
if(k==n)
    printf("UNIQUE");
}

