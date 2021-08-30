#include<stdio.h>

union details
{
    int rollnumber;
    int marks;
};

void main()
{
    union details data;
    data.marks=10;
    data.rollnumber=20;
    printf("\n roll number %d \n",data.marks); //same memory will allocated for any vaiable 
}
