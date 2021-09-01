#include<stdio.h>
int a=10;
extern void message();
void main()
{
    void add(void);
    printf("\n value is %d \n",a);
    add();
    add();
    //message();
}

void add()
{
    //message();
   a=a+1;
}
