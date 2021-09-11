#include<stdio.h>
void main()
{
    int a[10]={9,3,1,4,2,7,5};
    int i,n=8,j,max=0;
    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i;j<n-1;j++)
        {
            if(a[j]<a[max])
            {
                max=j;
            }
        }
        
        int temp=a[min];
        a[min]=a[max];
        a[max]=temp;

        
    }

    for(i=0;i<n-1;i++)
    {
        printf("\n %d \n",a[i]);
    }

}
