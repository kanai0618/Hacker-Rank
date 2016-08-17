#include <stdio.h>
#include <stdlib.h>
int x[10]= {1,5,5,2,2,-1,3};

struct node
{
    int info;
    struct node*left;
    struct node*right;
};

int search(int v)
{
    int i;
    for(i=0; i<7; i++)
    {
        if(x[i]==v)
        {
            return i;
            //break;
        }
    }
}
struct node*insert(int x)
{
    struct node*temp=(struct node*)(malloc(sizeof(struct node)));
    temp->left=NULL;
    temp->right=NULL;
    temp->info=x;
    return temp;
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

void construct(struct node*root,int y)
{
    if(root==NULL)
        return NULL;
    int k=search(y);
    //printf("%d",k);
    root->left=insert(k);
    int p=search(y);
    //printf("%d",p);
    root->right=insert(p);

    if(root->left!=NULL)
    {
        root=root->left;
        construct(root,k);
    }
    else
    {
        if(root->right!=NULL)
        {


            root=root->right;
            construct(root,p);
        }
        else
        {
            print(root);
        }
    }


}


int main()
{
    printf("Hello world!\n");
    struct node*root=insert(5);

    construct(root,5);



    return 0;
}
