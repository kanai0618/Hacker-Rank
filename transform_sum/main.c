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
 return temp;
}


void sum(struct node*root,int *x)
{


    if(root==NULL)
        return ;
    //if((root->left==NULL)&&(root->right==NULL))
        //return ;
    sum(root->right,x);
    int z=root->info;
    root->info=*x;
    *x=*x+z;
    sum(root->left,x);

}

void print(struct node*p)
{
    if(p!=NULL)
    {
        print(p->left);
        printf("%d\t",p->info);

        print(p->right);
    }
}

int main()
{
    struct node *root = insert(11);
    root->left = insert(2);
    root->right = insert(29);
    root->left->left = insert(1);
    root->left->right = insert(7);
    root->right->left = insert(15);
    root->right->right = insert(40);
    root->right->right->left = insert(35);

    int x=0;
    print(root);
    sum(root,&x);
    printf("\n");
    print(root);
    return 0;

}
