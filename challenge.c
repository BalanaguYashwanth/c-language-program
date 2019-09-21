#include<stdio.h>
int fun(int j,int a[], int n);
int i,sum=0,a[100],n,count=0;

int main()
{
    int i,j=1,n,a[100],sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the value");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=j)
        {
            fun(j,a,n);
            break;
        }
        else
            j=j+1;

    }

}


    int fun(int j,int a[],int n)
    {
        int sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
            if(sum==j)
            {

                j=j+1;
                fun(j,a,n);
            }
            else
                count++;
                if(count==5)
                printf("%d",j);

        }


    }






