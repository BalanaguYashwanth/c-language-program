#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i,z;
    scanf("%d",&z);
    scanf("%s",&ch);
    for(i=z;i>='\0';i--)
    {
        if(ch[i]!='a'&&ch[i]!='e'&&ch[i]!='i'&&ch[i]!='o'&&ch[i]!='u'&&ch[i]!='s')
        printf("%c",ch[i]);
    }
}
