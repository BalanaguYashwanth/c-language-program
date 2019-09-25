#include<stdio.h>
#include<stdlib.h>
struct data
{
    int data;
    char name[100];
    float marks;
}b,*b1;
int main()
{
    b1=&b;
    scanf("%d",&b.data);
    scanf("%s",&b.name);
    scanf("%f",&b.marks);

    printf("%d",b1->data);
    printf("%s",b1->name);
    printf("%f",b1->marks);

}
