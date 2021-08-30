#include<stdio.h>

struct emp
{
    int number;
    char name[20];
    float salary;
};

void main()
{
    int a;
    struct emp e={23,"yashwanth",78.38};
    printf("the values are %d %s %f ",e.number,e.name,e.salary);
}