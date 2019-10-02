

#include <stdio.h>

int main()
{
    int i;
    printf("enter the day");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("tuesday");
        break;
        case 3:
        printf("wednesday");
        break;
        case 4:
        printf("Thrusday");
        break;
        case 5:
        printf("friday");
        break;
        case 6:
        printf("satuday");
        case 7:
        printf("sunday");
        default:
        printf("error");
    }

    return 0;
}
