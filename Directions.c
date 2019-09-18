#include<stdio.h>
int main()
{
    int quad,count,direction=10,n=0,x=0,y=0;
    scanf("%d",&n);
    for(int i=0,count=0,quad=0;count<n;count++,direction+=10,quad+=1,quad=quad%4)
    {
        switch(quad)
        {
        case 0:
            x=x+direction;
            break;
        case 1:
            y=y+direction;
            break;
        case 2:
            x=x-direction;
            break;
        case 3:
            y=y-direction;
            break;
        }

    }
    printf("%d %d",x,y);
}
