#include<stdio.h>
int main()
{
    int n,i=1,remainder=0;
    long long binaryvalue=0;
    printf("enter the decimal number");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%2;
        n=n/2;
        printf("%d",remainder);
        binaryvalue=binaryvalue+remainder*i;
        i=i*10;
    }
    printf("the value is %d",binaryvalue);

}
