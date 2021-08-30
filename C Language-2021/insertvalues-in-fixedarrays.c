#include <stdio.h>
void main()
{
    int n, i, pos, val;
    char confirm;
    printf("enter the size of the array");
    scanf("%d", &n);
    int a[10];
    for (i = 0; i < n; i++)
    {
        printf("enter the values inside the array");
        scanf("%d", &a[i]);
    }

    printf("enter the position & value to insert");
    scanf("%d %d", &pos, &val);
    printf("confirm it %d pos %d val (y/n)", pos, val);
    scanf(" %c", &confirm);
    int dummy=pos;
    if (confirm == 'y')
    {
       for(i=(n-1);pos<=(n-1);i--)
       {
           a[i+1]=a[i];
           pos=pos+1;
       }
        a[dummy]=val;
        for (i = 0; i < 10; i++)
        {
            printf("\n the values are %d \n", a[i]);
        }
    }
    else
    {
        printf("please try again....");
    }
}


