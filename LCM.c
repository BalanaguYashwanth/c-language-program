#include<stdio.h>
int main()
{
    int a=12,b=6,max=0;
    max=(a>b)?a:b;
    while(1)
    {
        if( max%a ==0 && max%b==0 )
        {
            printf("%d",max);
            break;
        }
        max++;
    }


}
