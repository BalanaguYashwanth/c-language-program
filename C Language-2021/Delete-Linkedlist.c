#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *delete(struct node *);

void main()
{
    struct node *head,*head1=NULL;
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

    head=delete(head);

    head1=head;

    while(head1!=NULL)
    {
        printf("%d",head1->data);
        head1=head1->link;
    }
}


struct node *delete(struct node *head)
{
   struct node *temp=head;
   head=head->link;
   free(temp);
   //temp=NULL;
    return head;
}
