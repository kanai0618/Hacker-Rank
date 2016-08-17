#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node*next;
};
void insert(struct node**head,int x)
{
    struct node*temp=(struct node*)(malloc(sizeof(struct node)));
    temp->info=x;
    temp->next=*head;
    *head=temp;
}
void sorted(int y,struct node**root)
{
    struct node*temp;
    struct node*p=(struct node*)(malloc(sizeof(struct node)));
    p->info=y;
    temp=*root;
    while(temp!=NULL)
    {
        if(temp->info<y&&temp->next->info<y)
        {
            printf("%d\n",temp->info);
            temp=temp->next;
        }
        else
        {

            //temp=temp->next;
            printf("%d",temp->info);
            p->next=temp->next;
            temp->next=p;


            temp=p;
            break;
        }
    }
//printf("%d",temp->info);
}
void print(struct node*p)
{
    while(p!=NULL)
    {
        printf("%d",p->info);
        p=p->next;
    }
}
int main()
{
    printf("Hello world!\n");
    struct node*head=NULL;
    insert(&head,9);
    insert(&head,7);
    insert(&head,5);
    insert(&head,2);
    insert(&head,1);
    print(head);
    sorted(3,&head);
    printf("\nafter inserting node\n");
    printf("\n");
    print(head);
    return 0;
}
