#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,a[10],temp=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
       if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

    }
}

for(i=0;i<n;i++)
{
    if(a[i]==a[i+1] && a[i]==a[i+2])
    {
    printf("%d",a[i]);
    break;
    }
    else
    printf("%d",a[i]);
}

}
