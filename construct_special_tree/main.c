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
int search(int *a,int i,int j)
{
    int k;
    for(k=i; k<=j; k++)
    {
        if(a[k]>a[k+1])
        {
            return k;
            break;
        }
    }
    return j;

}

struct node*construct(int *a,int i,int j)
{


    if(i>j)
    return NULL;
    int z=search(a,i,j);


    struct node*root=insert(a[z]);
    if(i==j)
        return root;
    root->left=construct(a,i,z-1);
    root->right=construct(a,z+1,j);
    return root;

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

    int a[10]= {1, 5, 10, 40, 30, 15, 28, 20};
    struct node*root=construct(a,0,7);
    print(root);




    return 0;
}
