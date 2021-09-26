#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void count_nodes(struct node*);

void main()
{
    struct node *head;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;

    struct node *current=(struct node*)malloc(sizeof(struct node));
    current->data=20;
    current->link=NULL;

    head->link=current;

    current=(struct node*)malloc(sizeof(struct node));
    current->data=30;
    current->link=NULL;

    head->link->link=current;
    count_nodes(head);

}

void count_nodes(struct node *head)
{
    int count=0;
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        count=count+1;
        printf("\n %d \n",ptr->data);
        ptr=ptr->link;
    }
    printf("\n %d \n",count);
}

