#include <stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int n,count=0,i;
    printf("enter the string");
    gets(str);
    printf("enter the character");
    scanf("%c",&ch);
    n=strlen(str);
    for(i=0;i<=n;i++)
    {
        if(ch==str[i])
        {
            count++;
        }
    }
    
printf("%d",count);
    return 0;
}
