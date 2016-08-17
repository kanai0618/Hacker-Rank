#include <stdio.h>
#include <stdlib.h>
int sum[10]={0};
int k=2;
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
void print(struct node*p)
{
    if(p!=NULL)
    {

        print(p->left);
        printf("%d",p->info);
        print(p->right);
    }
}
void vertical(struct node*p,int col,int *min,int *max)
{
    if(p==NULL)
        return 0;
    if(col<*min)
    {
        *min=col;
    }
    if(col>*max)
    {
        *max=col;
    }
    vertical(p->left,col-1,min,max);
    vertical(p->right,col+1,min,max);
}
void printlist(struct node*p,int x,int y)
{
    if(p==NULL)
        return 0;
    if(x==y)
    {
        printf("%d",p->info);
        sum[x+k]=sum[x+k]+p->info;
    }
    printlist(p->left,x,y-1);
    printlist(p->right,x,y+1);

}
int main()
{

    int min=0,max=0,i;
    struct node*start=insert(1);
    start->left=insert(2);
    start->right=insert(3);
    start->left->left=insert(4);
    start->left->right=insert(5);
    print(start);
    vertical(start,0,&min,&max);
    printf("%d%d",min,max);
    for(i=min;i<=max;i++)
    {
        printlist(start,i,0);

    }
    printf("\n");
    for(i=0;i<=max-min;i++)
    {
        printf("%d\t",sum[i]);
    }
    return 0;

}
