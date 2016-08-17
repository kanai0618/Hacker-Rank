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
    temp->left=NULL;
    temp->right=NULL;
    temp->info=x;
    return temp;
}
void fun(struct node*p,int count,int *max)
{

   if(p==NULL)
    return ;
    //printf("%d%d\n",count,max);


    if(count>*max)
   {
       printf("%d",p->info);
       *max=count;

   }

   fun(p->right,count+1,max);
   fun(p->left,count+1,max);




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
    struct node*root1;
    int max=0;
    struct node*head=NULL;
    struct node*root=insert(1);
    root->left=insert(2);
    root->right=insert(3);
    root->left->left=insert(4);
    root->left->right=insert(5);
    root->right->left=insert(6);
    root->left->left->left=insert(7);
    root->left->left->right=insert(8);

    //print(root);
    printf("\n");
    fun(root,1,&max);

    return 0;
}
