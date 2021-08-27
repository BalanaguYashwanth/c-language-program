#include<stdio.h>
void main()
{
    int a[5]={30,3,12,6,4},sum=0,i;
    for(i=0;i<5;i++)
    {
        if(a[i]>sum)
        {
            sum=a[i];
        }
    }
    printf("the value of sum is %d",sum);
}