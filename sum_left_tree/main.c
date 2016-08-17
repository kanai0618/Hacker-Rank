#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node*left,*right;
};

struct node*insert(int x)
{


 struct node*temp=(struct node*)(malloc(sizeof(struct node)));
 temp->left=NULL;
 temp->right=NULL;
 temp->info=x;
}


void sum(struct node*root,int *x)
{

    if(root==NULL)
        return ;
    if(root->left->left==NULL)
    {
        *x=*x+root->left->info;
        return ;
    }
    sum(root->left,x);
    sum(root->right,x);

}

void print(struct node*p)
{
    if(p!=NULL)
    {
        printf("%d\t",p->info);
        print(p->left);
        print(p->right);
    }
}

int main()
{
    struct node*root=insert(1);
    root->left=insert(2);
    root->right=insert(3);
    root->left->left=insert(4);
    root->right->left=insert(5);
    root->left->left->left=insert(7);

    int x=0;
    //print(root);
    sum(root,&x);
    printf("%d",x);
    return 0;

}
