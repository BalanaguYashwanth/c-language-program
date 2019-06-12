#include <stdio.h>
#include<string.h>
int main(void) {
	int i;
    char ch[100];
    for(i=0;i<=strlen(ch);i++)
    {
    scanf("%c",&ch[i]);
    }
    for(i=strlen(ch);i>=0;i--)
    {
        printf("%c",ch[i]);
    }
	return 0;
}
