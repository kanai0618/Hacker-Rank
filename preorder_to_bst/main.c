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
  temp->left=NULL;
  temp->right=NULL;
  temp->info=x;
  return temp;
}


int search(int x,int *a,int y)
{

    while(a[y]<x)
    {
        y++;
    }


    return y;
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

struct node*fun(int *a,int i,int j)
{

    if(i>j)
        return NULL;


 struct node*root=insert(a[i]);
 if(i==j)
    return root;
 int k;
    for ( k =i+1; k<=j; ++k )
        if ( a[k] > root->info )
            break;

 root->left=fun(a,i,k-1);
 root->right=fun(a,k,j);
 return root;

}


int main()
{
    int a[10]={10, 5, 1, 7, 40, 50};
    struct node*root=fun(a,0,5);
    print(root);

}

