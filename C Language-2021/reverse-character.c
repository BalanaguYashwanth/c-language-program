#include<stdio.h>
#include <string.h>
void main()
{
    int i=0;
    char *c,sum[100];
    char str[100];
    printf("enter your name");
    scanf("%s",str);
    int total=strlen(str);
    int total1=total;
    //c=str;
    //printf("%c",*c);
    for(c=str+total-1;c>=str;c--)
    {
        if(i<total1)
        {
            sum[i]=*c;
            i++;
        }
    }

    printf("%s",sum);  
}