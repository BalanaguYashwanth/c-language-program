#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a[2][3][2]={{{8,3},{2,5},{23,26}},{{18,13},{12,51},{123,126}}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         for (int k = 0; k < 2; k++)
    //         {
    //             printf(" \n %d \n", a[i][j][k]);
    //         }
    //     }
    // }
    printf("\n %d \n",*(*(*(a)+1)+1)); //5
    //printf("\n %d \n",**(*(a+1)+2)); //123
    //printf("\n %d \n",*(*(*(a+1)+2)));
}
