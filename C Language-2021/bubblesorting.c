#include <stdio.h>
void main()
{
    int i, a[10] = {2, 3, 4, 5};
    int n = 4;
    for (int j = 0; j <= n; j++)
    {
        for (i = 0; i <= n - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    for (i = 0; i <= n - 1; i++)
    {
        printf("\n %d \n", a[i]);
    }
}