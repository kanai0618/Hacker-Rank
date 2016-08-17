#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node*left;
    struct node*right;
}*head=NULL;


struct node*insert(struct node**head,int x)
{

    if(*head==NULL)
    {
        struct node*temp=(struct node*)(malloc(sizeof(struct node)));
        temp->info=x;
        temp->left=NULL;
        temp->right=NULL;
        *head=temp;
    }
    else

    {
        struct node*temp=(struct node*)(malloc(sizeof(struct node)));
        temp->info=x;
        struct node*temp1=*head;
        while(temp1->right!=NULL)
        {
            temp1=temp1->right;
        }

        temp->left=temp1;
        temp1->right=temp;
        temp->right=NULL;
        temp1=temp;

    }
    return *head;

}
void print(struct node*p)
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
    head=insert(&head,1);
    head=insert(&head,2);
    head=insert(&head,3);
    head=insert(&head,4);
    head=insert(&head,5);
    print(head);
    return 0;
}
