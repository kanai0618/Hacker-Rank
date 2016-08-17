#include<stdio.h>


struct node
{
    int info;
    struct node*left;
    struct node*right;
};

struct node*insert(struct node*p,int x)
{
struct node*temp;
    if(p==NULL)
    {
struct node*temp=(struct node*)(malloc(sizeof(struct node)));
        temp->info=x;
        temp->left=NULL;
        temp->right=NULL;
        //printf("%d",temp->info);
        return temp;





    }
    if(p->info>x)
    {

        p->left=insert(p->left,x);
    }
    else
    {

        p->right=insert(p->right,x);
    }
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
    struct node*root=NULL;
    struct node*z;
    root=insert(root,1);
    //printf("%d",root->info);
    insert(root,2);
    insert(root,3);
    //printf("%d",root->info);
    print(root);
}
