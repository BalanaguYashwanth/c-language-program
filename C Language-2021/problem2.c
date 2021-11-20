#include<stdio.h>
void func(int *x)
{
    if (!(--*x))
    {
        printf("yes is %d",x);
        return;
    }
    printf("%d",*x);
    func(x);
    
}

int main()
{
    int x=2;
    func(&x);

    return 0;
}