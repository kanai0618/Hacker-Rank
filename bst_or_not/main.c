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

int bst(struct node*p)
{
    if((p->left==NULL)&&(p->right==NULL))
        return 1;
    if((p->left->info<p->info&&p->right==NULL))
        return 1;
    if((p->right->info>p->info&&p->left==NULL))
        return 1;

    if((p->left->info<p->info)&&(p->right->info>p->info)&&bst(p->left)&&bst(p->right))
    return 1;
    else
        return 0;


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
    printf("Check bst or not\n%d",bst(root));

    return 0;
}
