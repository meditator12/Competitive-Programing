#include<stdio.h>
#include<stdlib.h>

int main()
{
    int choice,val,total_nodes=1;
    struct node *first;
    struct node{
    int data;
    struct node *next;
    };
    struct node *root;
    root = (struct node *)malloc(sizeof(struct node));
    root->data=10;
    first=root;
    //printf("%d",first);
    while(1)
    {
        struct node *new_node;
        new_node=(struct node *)malloc(sizeof(struct node));
        printf("Enter the value");
        scanf("%d",&val);
        new_node->data=val;
        root->next=new_node;
        root=new_node;
        printf("continue");
        scanf("%d",&choice);
        ++total_nodes;
        if(choice == 0)
            break;
    }
    root->next=NULL;
    printf("nodes are%d",total_nodes);
    printf("\tfirst value is%d",first->data);
    root = first->next;
    while(root != NULL)
    {
        //printf("hello");
        printf("\tthe value is%d",root->data);
        root=root->next;
    }
}
