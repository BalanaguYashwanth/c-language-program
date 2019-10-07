#include<stdio.h>
#include<string.h>
int main()
{
    char *a;
    int i,j,len,count;
    a=(char *)malloc(sizeof(char));
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        count=1;
    for(j=i+1;j<len;j++)
    {
        if(a[i] == a[j])
        {
            count++;
            a[j]=1;

        }

    }
    if(a[i]!=1)
    printf("%c = %d",a[i],count);
    }


}
