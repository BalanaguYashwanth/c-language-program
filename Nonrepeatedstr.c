#include<stdio.h>
#include<string.h>
int main()
{
    char b[10],ch[20]="placementseason";
    int i,j,flag=0,n;
    n=strlen(ch);
    for(i=0;i<=n;i++)
    {
        flag=0;
        for(j=0;j<=n;j++)
        {
            if(ch[i]!=ch[j])
            {
                flag++;

            }

        }
        if(flag==n)
            printf("\n%c",ch[i]);
            break;

    }
}
