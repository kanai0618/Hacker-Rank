#include <stdio.h>
#include <stdlib.h>
int x=0;
int visited[100]= {0};
int pa[1000];
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
void path(struct node*p,int k)

{





    if(p==NULL)
        return ;
    pa[x++]=p->info;
    printf("%d",p->info);






    if((p->left==NULL)&&(p->right==NULL))
    {
        if((visited[x-k-1]==0))
        {
            printf("%d",pa[x-k-1]);
            visited[x-k-1]=1;
            return ;
        }
    }
    path(p->left,x);
    path(p->right,x);

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
    printf("k distance from leaf\n");
    path(root,1);

    return 0;
}
