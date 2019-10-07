#include<stdio.h>
int main()
{
    char a[10],b[10];
    int i,j;
    printf("enter the 1st string");
    scanf("%s",a);
    printf("enter the 2nd string");
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[i])
        {
            continue;
        }
        else
        {
            printf("the element is %c",a[i]);
        }
    }
}
