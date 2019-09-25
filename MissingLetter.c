#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100],ch1[100],count=0;
    int i,j;
    printf("enter the first string");
    scanf("%s",ch);
    printf("enter the second string");
    scanf("%s",ch1);
    for(i=0;i<=strlen(ch);i++)
    {
        count=0;
        for(j=0;j<=strlen(ch1);j++)
        {
            if(ch[i]!=ch1[j])
            {
                count++;

            if(count==strlen(ch))
            printf("\nThe missed character is  %c",ch[i]);
            }

        }

    }

}
