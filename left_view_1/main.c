#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
    int data;
    struct node *left, *right;
};
struct node* newNode( int data )
{
    struct node* temp = (struct node *) malloc( sizeof(struct node) );

    temp->data = data;
    temp->left = temp->right = NULL;

    return temp;
}
void leftview(struct node*p,int level,int *max)
{
    if(p==NULL)
        return ;
    if((p->left)&&(level>*max+1))
    {
        //printf("%d\t",p->data);
        *max=level;
    }
    else
    {
        if(level>*max)
        {
            printf("%d\t",p->data);*max=level;
        }

    }
    leftview(p->left,level+1,max);
    leftview(p->right,level+1,max);

}
void leafview(struct node*p)
{
    if(p==NULL)
        return ;
    if((p->left==NULL)&&(p->right==NULL))
    {
        printf("%d\t",p->data);
    }
    leafview(p->left);
    leafview(p->right);
}

// Driver program to test above functions
int main()
{
    // Let us construct the tree given in the above diagram
    int max=0;
    struct node *root         = newNode(20);
    root->left                = newNode(8);
    root->left->left=newNode(27);

    root->right               = newNode(22);
    root->right->left        = newNode(25);
    root->right->left->left = newNode(26);
    root->right->left->right  = newNode(29);
    leftview(root,1,&max);
    printf("\n");
    leafview(root->left);
    printf("\n");
    leafview(root->right);
    return 0;
}

