#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,n=0,t[100],i=0,k;
    scanf("%d",&k);
    while(n<k)
    {
        c=a+b;
        a=b;
        b=c;
        t[i]=c;
        i++;
        n++;
    }
    for(i=0;i<k;i++)
    {
        printf(" %d ",t[i]);
    }

}

