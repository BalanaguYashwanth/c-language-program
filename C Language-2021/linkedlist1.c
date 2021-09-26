#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void count(struct node *,int);

void main()
{
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=12;
    head->link=NULL;

    struct node *current=(struct node*)malloc(sizeof(struct node));
    current->data=15;
    current->link=NULL;

    head->link=current;

    current=(struct node*)malloc(sizeof(struct node));
    current->data=20;
    current->link=NULL;

    head->link->link=current;

    count(head,32);
}

void count(struct node *head, int data)
{
    struct node *temp=NULL;
    struct node *ptr=NULL;
    struct node *ptr1=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    ptr=head;

    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }

    ptr->link=temp;

    ptr1=head;

    while(ptr1!=NULL)
    {
        printf("\n %d \n", ptr1->data);
        ptr1=ptr1->link;
    }

    

}