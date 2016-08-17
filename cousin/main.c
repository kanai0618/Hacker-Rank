#include <stdio.h>
#include <stdlib.h>
int flag=1;
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
void level(struct node*start)
{
    int h=3;int i;
    for(i=1;i<=3;i++)
    {
        //printf("%d",levelheight(start,i,3));
        //printf("%d",i);
        if(levelheight(start,i,4)==1)
        {
            printf("%d",i);
            //break;
        }
    }
}

int levelheight(struct node*p,int x,int y)
{

    if(p==NULL)
        return 0;
    if(x==1)
    {
        //printf("%d",p->info);
       if((p->info==y))
       {

           //printf("%d",p->info);
           return 1;

       }


    }
    if(x>1)
    {


    return (levelheight(p->left,x-1,y))&&(levelheight(p->right,x-1,y));
    }

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
    struct node*start=insert(1);
    start->left=insert(2);
    start->right=insert(3);
    start->left->left=insert(4);
    start->left->right=insert(5);
    //print(start);
    level(start);
    return 0;
}
