#include<stdio.h>
#include<stdlib.h>
#define MAX

int stack_arr[MAX];
int top=-1;
void push(int data);
void pop();
void main()
{
    push(10);
    push(30);
    push(40);
    pop();
    pop();
    for(int i=0;i<=top;i++)
    {
        printf("%d",stack_arr[i]);
    }
}

void pop()
{
    top=top-1;
}

void push(int data)
{
    top=top+1;
    stack_arr[top]=data;
}