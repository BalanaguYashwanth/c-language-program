#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
    struct node *link;
};

void add_node(struct node *, int);

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
    add_node(head,27);
}

void add_node(struct node *head,int data)
{
    struct node *ptr,*temp;

    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    ptr=head;

    while (ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
   
    ptr->link=temp;
    
}
//  if(ptr->link==NULL)
//         {
//            printf("%d",ptr->data);
//            ptr->link=temp;
//         }
