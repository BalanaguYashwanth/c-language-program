#include<stdio.h>
int a;
void main()
{
    void show();
    void increase();
    a=10;
    increase();
    show();
}

void increase(){
    a=20;
}

void show()
{
    //int a=2;
    printf("\n %d \n",a);
}