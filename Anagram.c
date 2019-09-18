#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100]="Creative";
    char ch1[100]="reaCtiVe";
    int i,j,count=0;
    for(i=0;i<=strlen(ch);i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
         ch[i]=ch[i]+32;
        }


    }

    for(i=0;i<=strlen(ch1);i++)
    {
        if(ch1[i]>='A' && ch1[i]<='Z')
        {
         ch1[i]=ch1[i]-32;
        }


    }

    for(i=0;i<=strlen(ch);i++)
    {
        for(j=0;j<=strlen(ch1);j++)
        {
        if(ch[i]==ch[j])
        {
            count++;
            if(count==strlen(ch))
            printf("yes");
        }

        }

    }



}




