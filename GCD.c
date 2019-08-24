#include<stdio.h>
int main()
{
    int a=18,b=24,min=0,i,j;
    min=(a<b)?a:b;

   for(i=min;i>=1;i--)
   {
       if(a%i==0  && b%i==0 )
       {
           printf("%d",i);
           break;
        }
   }

}


