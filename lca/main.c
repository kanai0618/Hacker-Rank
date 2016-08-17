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
    temp->info=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;

}
struct node*lca(struct node*p,int x,int y)
{
    if(p==NULL)
        return NULL;

    if((p->info==x)||(p->info==y))
        return p;
    struct node*l=lca(p->left,x,y);
    struct node*r=lca(p->right,x,y);
    if(l&&r)
        return p;
    return l!=NULL?l:r;
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
    struct node*head=insert(1);
    head->left=insert(2);
    head->right=insert(3);
    head->left->left=insert(4);
    head->left->right = insert(5);
    head->right->left = insert(6);
    head->right->right = insert(7);
    print(head);
    struct node*k=lca(head,4,5);
    printf("\n");
    printf("%d",k->info);
    return 0;
}
