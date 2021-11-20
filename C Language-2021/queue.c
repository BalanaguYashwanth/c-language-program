#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int array[MAX];
int top=0;
int rear=0;

void insert(int data);
void delete(void);
void show(void);

void main()
{
    int a;
    insert(1);
    insert(3);
    insert(5);
    insert(8);
    delete();
    delete();
    delete();
    show();
}

void insert(int data)
{
    if(rear==MAX)
    {
        printf("memory is full");
    }
    else{
        array[rear]=data;
        rear=rear+1;
    }
}

void show()
{
    if(rear==top)
    {
        printf("queue is empty");
    }else{
        for(int i=top;i<MAX;i++)
        {
            printf("\t %d \t",array[i]);
        }
        //printf("\n %d \n",rear);
    }
}

void delete()
{
    if(rear==top)
    {
        printf("queue is empty in delete operation");
    }else{
        for(rear=top;rear<MAX;rear++)
        {
            array[rear]=array[rear+1];
            printf("%d",array[rear]);
        }
        printf("\n");
        //printf("\n %d \n",rear);
    }
}


