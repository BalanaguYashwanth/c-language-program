#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *add(struct node *, int data);

void main()
{
    struct node *head,*head1=NULL;
    head=malloc(sizeof(struct node *));
    head->data=20;
    head->link=head;

    head1=add(head,30);

    while(head1!=NULL)
    {
        printf("\n data is %d \n",head1->data);
        head1=head1->link;
    }
}

struct node *add(struct node *head,int data)
{
    struct node *temp=NULL;
    temp=malloc(sizeof(struct node *));
    temp->data=data;
    temp->link=head->link;
    head->link=temp;

    return temp;

}
