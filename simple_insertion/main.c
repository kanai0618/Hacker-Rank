#include <stdio.h>
#include <stdlib.h>


struct node

{
    int info;
    struct node*next;
};


void insert(struct node**head,int x)
{
    if(*head==NULL)
    {
        struct node*temp=(struct node*)(malloc(sizeof(struct node*)));
        temp->info=x;
        temp->next=NULL;
        *head=temp;
    }
    else
    {
        struct node*temp1=*head;
         struct node*temp=(struct node*)(malloc(sizeof(struct node*)));
        temp->info=x;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
        temp->next=NULL;
    }
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
    insert(&head,1);
    insert(&head,2);
    print(head);
    return 0;
}
