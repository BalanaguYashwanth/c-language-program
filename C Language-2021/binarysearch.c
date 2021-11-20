#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* left;
    int data;
    struct node* right;
};

void add(struct node*,int);

void main()
{
    struct node *p=NULL;
    struct node *root=NULL;
    p=malloc(sizeof(struct node*));
    p->data=30;
    p->left=NULL;
    p->right=NULL;
    printf("%d",p->data);
    root=p;
    add(root,10);
   
}

void add(struct node* root,int data)
{
    struct node *current=root;
    struct node* temp=NULL;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    while(current)
    {
        root=current;
        if(temp->data>root->data)
        {
            current=current->right;
            
        }else{
            current=current->left;
        }
    }
    if(temp->data>root->data)
    {
        printf("%d",temp->data);
        root->right=temp;
    }else{
        printf("%d",temp->data);
        root->left=temp;
    }
}

