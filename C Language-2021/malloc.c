#include<stdio.h>
#include<stdlib.h>
struct details{
    int enumber;
    char ename[20];
    float emarks;
};

void main()
{
    struct details* ptr;
    ptr=(struct details*)malloc(sizeof(struct details));
    if(ptr==NULL)
    {
        printf("memoery not allocated");
    }
    else{
         printf("enter the values");
        scanf("%d %s %f",&ptr->enumber,ptr->ename,&ptr->emarks);
        printf("\n %d %s %f\n",ptr->enumber,ptr->ename,ptr->emarks);
    }
   
}