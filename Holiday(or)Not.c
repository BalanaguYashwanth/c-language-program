#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char t[100]="Saturday";
    char x[100]="Sunday";
    scanf("%s",&a);
    if(strcmp(a,t)==0)
    {
        printf("yes");
    }
    else if(strcmp(a,x)==0)
    {
        printf("yes");
    }
    else
        printf("no");

}
