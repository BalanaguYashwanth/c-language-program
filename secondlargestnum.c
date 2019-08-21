#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[20],i,max=0,sdmax=0,temp=0;
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];
    sdmax=a[1];
    for(i=0;i<=5;i++)
    {
      if(max<a[i])
      {
          temp=max;
          max=a[i];

      }
      else
        if(max>a[i] && sdmax<a[i])
      {
           sdmax=a[i];
           temp=sdmax;
      }

    }


printf("the value is %d",temp);

}
