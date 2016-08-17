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
struct node*fun(struct node*p,struct node**head)
{



    if(p==NULL)
    return NULL;
    if((p->left==NULL)&&(p->right==NULL))
    {
      if(*head==NULL)
      {
          *head=p;
      }
      else
      {
          p->right=*head;
          (*head)->left=p;
          *head=p;
      }
      return NULL;

    }


    p->left=fun(p->left,head);
    p->right=fun(p->right,head);

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
void linkprint(struct node*p)
{
    while(p!=NULL)
    {
        printf("%d",p->info);

        p=p->right;
    }
}

int main()
{
    printf("Hello world!\n");
    struct node*root1;
    struct node*head=NULL;
    struct node*root=insert(1);
    root->left=insert(2);
    root->right=insert(3);
    root->left->left=insert(4);
    root->left->right=insert(5);
    root->right->left=insert(6);

    print(root);
    root1=fun(root,&head);
    printf("\n");
    print(root1);
    printf("\n");
    linkprint(head);
    return 0;
}
