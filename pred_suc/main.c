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

void pre(struct node*p,int *min,int *max,int key)
{
    if(p==NULL)
        return ;

    if(p->info==key)
    {
        struct node*temp=p->right;
        struct node*temp1=p->left;
        while(temp->left!=NULL)
        {
            temp=temp->left;
        }
        *max=temp->info;
        while(temp1->right!=NULL)
        {
            temp1=temp1->right;
        }
        *min=temp1->info;
        return ;
    }
    if(p->info<key)
    {
        *min=p->info;

        pre(p->right,min,max,key);
    }

    if(p->info>key)
    {
        *max=p->info;
        pre(p->left,min,max,key);
    }
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
    printf("Hello world!\n");
    int min=0,max=0,key=65;

    struct node*root=insert(50);
    root->left=insert(30);
    root->right=insert(70);
    root->left->left=insert(20);
    root->left->right=insert(40);
    root->right->left=insert(60);
    root->right->right=insert(80);


    print(root);
    printf("\n");
    pre(root,&min,&max,key);
    printf("predecessor and successor\t%d\t%d\n",min,max);


    return 0;
}
