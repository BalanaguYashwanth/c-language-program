#include<stdlib.h>
#include<stdio.h>
void main()
{
    char a[10];
    int i=0;
    scanf("%s",a);
    while(*(a+i)!='\0')
    {
        printf("\n %c \n",*(a+i));
        i=i+1;
    }
    printf("\n the length of the string %d \n",i);
}