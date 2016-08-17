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
void path(struct node*p,int x,int sum,int n,int k,int *a)
{
    int i;

   if(p==NULL)
    return;

   if(x==0)
    {
        sum+=p->info;

        a[k]=x;


    }
    else
    {
        sum+=p->info;
         a[k]=x;

    }

    if(sum==n)
    {

        for(i=0;i<=k;i++)
        {
            printf("%d",a[i]);
        }
        printf("\n");

        return ;
    }

    path(p->left,0,sum,n,k+1,a);
    path(p->right,1,sum,n,k+1,a);
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
    int sum=0,max1=0;
    int a[100];
    struct node*root=insert(1);
    root->left=insert(2);
    root->right=insert(3);
    root->left->left=insert(4);
    root->left->right=insert(5);
    root->right->left=insert(6);
    root->right->right=insert(7);
    print(root);
    printf("\n");
    printf("binary path is\n");
    path(root,0,sum,11,0,a);

    return 0;
}
