#include <stdio.h>
#include <stdlib.h>


struct node
{
    int info;
    struct node*left;
    struct node*right;
};

struct node*insert(int x)
{
    struct node*temp=(struct node*)(malloc(sizeof(struct node)));
    temp->info=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

struct node*leaf(struct node*p)
{

if(p==NULL)
{
    return NULL;
}
if(((p->left==NULL)&&(p->right==NULL)))
    {   return NULL;
    }
p->left=leaf(p->left);
p->right=leaf(p->right);
return p;

}

void print(struct node*p)
{
    if(p!=NULL)
    {
        print(p->left);
        printf("%d",p->info);
        print(p->right);
    }
}

int main()
{
    printf("Hello world!\n");

    struct node*root=insert(6);
    root->left=insert(4);
    root->right=insert(7);
    root->left->left=insert(2);
    root->left->right=insert(3);
    root->right->left=insert(8);


    print(root);
    printf("\n");
    root=leaf(root);
    print(root);

    return 0;
}
