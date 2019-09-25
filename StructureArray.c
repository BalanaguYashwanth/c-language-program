#include<stdio.h>
struct array
{
    char name[100];
    int marks;
    float no;
};
int main()
{
    struct array b[10];
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%s",&b[i].name);
        scanf("%d",&b[i].marks);
        scanf("%f",&b[i].no);

    }
    for(i=0;i<3;i++)
    {
        printf("%s",b[i].name);
        printf("%d",b[i].marks);
        printf("%f",b[i].no);


    }
}
