#include<stdio.h>
void fun(void);
void fun1(void);
void main()
{

    fun();
    fun();
    fun();
    //printf("%d",a);
}

void fun()
{
    static int a;
    a+=20;
    printf("\n fun is %d \n ",a);
}

