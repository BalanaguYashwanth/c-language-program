#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node* count(int,int,struct node*);

void main()
{
    int a,pos;
    struct node *head,*ptr,*all;
    printf("enter the position");
    scanf("%d",&pos);
    head=malloc(sizeof(struct node));
    head->data=20;
    head->link=NULL;

    ptr=malloc(sizeof(struct node));
    ptr->data=30;
    ptr->link=NULL;

    head->link=ptr;

    ptr=malloc(sizeof(struct node));
    ptr->data=50;
    ptr->link=NULL;
    
    head->link->link=ptr;
    printf("node created");

    struct node* head1=count(pos,40,head);

    all=head1;

    while(all!=NULL)
    {
        printf("\n all is %d \n",all->data);
        all=all->link;
    }
    
}

struct node* count(int pos,int data,struct node *head)
{
    int num=0;
    struct node *ptr, *temp, *posdata, *all;
    ptr=head;
    
    posdata=malloc(sizeof(struct node));
    posdata->data=data;
    posdata->link=NULL;

    while (num<pos-1)
    {

        //printf("\n %d \n",ptr->data);
        ptr=ptr->link;
        
        num=num+1;
    }


    temp=ptr->link;

    ptr-> link = posdata;

    posdata->link=temp;

    return head;
}

