#include<stdio.h>
int main()
{
    int r,f,sp,n=4,b;
    for(r=0;r<n;r++)
    {
        for(f=1;f<=n-r;f++)

            printf("%d",f);

            for(sp=1;sp<=r;sp++)
                printf("##");

            for(b=n-r;b>0;b--)

                printf("%d",b);
                printf("\n");


    }
}
