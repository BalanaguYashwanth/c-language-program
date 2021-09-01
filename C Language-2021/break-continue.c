#include<stdio.h>
void main()
{
    int a=0,b=0;
    while(a<10)
    {
        if(a==5)
        {
            a=a+1;
           continue;  
        }else{
            printf("%d",a);
            b=b+1;
            a=a+1;
        }
    }
}
