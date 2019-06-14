#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char ch[100];
    char temp;
        scanf("%s", ch);
    for(i=0;i<=strlen(ch);i+=2)
    {
        temp=ch[i];
        ch[i]=ch[i+1];
        ch[i+1]=temp;
    }
    for(i=0;i<=strlen(ch);i++)
    {
        printf("%c",ch[i]);
    }
    return 0;
}
