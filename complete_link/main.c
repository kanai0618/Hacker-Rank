#include <stdio.h>
#include <stdlib.h>


struct node
{
    int info;
    struct node*left,*right;
};

struct nodelink
{
    int info;
    struct node*next;
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
void insertlink(struct nodelink**head,int x)
{
    struct nodelink*temp=(struct nodelink*)(malloc(sizeof(struct nodelink)));
    temp->next=*head;
    *head=temp;
    temp->info=x;
}
void printlink(struct nodelink*p)
{
   while(p!=NULL)
   {
       printf("%d\t",p->info);
       p=p->next;
   }

}
struct node*maketree(struct node*head,int i,int j)
{


    int mid=(i+j)/2;
    int k;
    struct nodelink*temp=head;
    for(k=0;k<mid;k++)
    {
        temp=temp->next;
    }

    struct node*root=node(temp->data);
    root->left=maketree(head,temp,i,mid);
    root->right=maketree(temp,temp2,mid+1,j);
    return root;



}



int main()
{
    struct nodelink*head=NULL;
    insertlink(&head,1);
    insertlink(&head,2);
    insertlink(&head,3);
    insertlink(&head,4);
    insertlink(&head,5);
    insertlink(&head,6);
    insertlink(&head,7);
    printlink(head);
    struct node*root=maketree(head,0,6);
    print(root);
}


