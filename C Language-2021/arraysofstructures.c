#include<stdio.h>

struct students
{
    char name[50];
    int hallticket;
    int marks[10];  
};

void main()
{
    struct students e[3]={{"yash",239,{10,2,20,35}},{"bash",250,{20,6,30,365}},{"gash",239,{10,2,20,35}}}; //we need 3 datas inside for e[3]
    printf("\n 1st is %s \n",e[1].name);
    printf("\n   %d \n",e[1].marks[1]);
    printf("\n   %d \n",e[1].marks[3]);
    printf("\n hallticket   %d \n",e[1].hallticket);
}
