#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,n=0,decimalvalue=0,remainder;
    printf("enter the value ");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        n=n/10;
        decimalvalue=decimalvalue+remainder*pow(2,i);
        ++i;
    }
    printf("%d",decimalvalue);
}
