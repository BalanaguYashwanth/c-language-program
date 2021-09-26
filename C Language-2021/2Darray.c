#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[2][3]={{12,20,35},{14,40,25}},i,j;

    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<5;j++)
    //     {
    //         printf("enter the elements");
    //         scanf("%d",&a[i][j]);
    //     }
    // }
    printf("\n %d \n",*(*a+2));
    //printf("\n %d \n",*(*(a+1)+1));

    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<5;j++)
    //     {
    //         printf("%d",a[i][j]);
    //     }
    // }
}
