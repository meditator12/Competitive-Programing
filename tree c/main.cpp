#include<iostream>
#include<malloc.h>
#include<stdio.h>
int level = -1;
typedef struct bin{
    int data;
    struct bin *lpt;
    struct bin *rpt;
}node;
node *get_node();
void preorder(node *);
void traversal_level(node *);
void inorder(node *);
void postorder(node *);
void insert(node *,node *);
int main()
{
    int choice;
    node *new_node,*root;
    root = NULL;
    do{
        new_node = get_node();
        printf("Enter the data\n");
        scanf("%d",&new_node->data);
        if(root == NULL)
            root = new_node;
        else
            insert(root,new_node);
        printf("Want to continue\n");
        scanf("%d",&choice);
    }while(choice == 1 || choice == 1);
    printf("----------------------------------------------------\n");
  //  inorder(root);
    printf("-----------------------------------------------------\n");
  //  preorder(root);
    printf("------------------------------------------------------\n");
   // postorder(root);
   traversal_level(root);
}
node *get_node()
{
    node *newer;
    newer = (node *)malloc(sizeof(node));
    newer->lpt = NULL;
    newer->rpt = NULL;
    return newer;
}
void insert(node *root,node *new_node)
{
    int ch;
    printf("Where to put the value left or right\n");
    scanf("%d",&ch);
    if(ch == 1)
    {
        if(root->rpt == NULL)
            root->rpt = new_node;
        else
            insert(root->rpt,new_node);
    }
    else
    {
        if(root->lpt == NULL)
            root->lpt = new_node;
        else
            insert(root->lpt,new_node);
    }
}
void inorder(node *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->lpt);
        printf("%d\n",temp->data);
        inorder(temp->rpt);
    }
}
void preorder(node *temp)
{
    if(temp!=NULL)
    {
        printf("%d\n",temp->data);
        preorder(temp->lpt);
        preorder(temp->rpt);
    }
}
void postorder(node *temp)
{
    if(temp!= NULL)
    {
        postorder(temp->lpt);
        postorder(temp->rpt);
        printf("%d\n",temp->data);
    }
}
void traversal_level(node *temp)
{
    if(temp != NULL)
    {
        ++level;
        printf("hello%d\n",level);
        printf("Fuck\t %d\n",temp->data);
        traversal_level(temp->rpt);
        printf("kiss \t %d\n",temp->data);
        if(level == 2)
        {
            printf("%d\n",temp->data);
            //--level;
        }
        traversal_level(temp->lpt);
        printf("Suck \t %d\n",temp->data);
        if(level == 2)
        {
            printf("%d\n",temp->data);
            --level;
            printf("level is %d\n",level);
        }
    }
}
