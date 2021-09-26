#include<stdio.h>
void main()
{
    int a=0,b=1,c,i;
    for(i=0;i<10;i++)
    {
        c=a+b;  
        a=b;
        b=c;
        printf("\n %d \n",c);
    }
}
