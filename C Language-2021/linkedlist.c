#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void main()
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=12;
    head->link=NULL;

    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data=15;
    current->link=NULL;

    head->link=current;
}
