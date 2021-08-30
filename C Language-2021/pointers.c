#include<stdio.h>
void main()
{
    int a=10;
    int* map;
    map=&a;
    printf("\n the address is %ld",map);
    printf("\n the value is %d \n",*map);
    printf("\n size of variable %lu \n",sizeof(map));
    printf("\n size of pointer variable %lu \n",sizeof(*map));
}
