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
    temp->next=*head;
    *head=temp;
    temp->info=x;
}
void delet(struct node**head,int x)
{
    struct node*prev=*head;
    struct node*temp=(*head)->next;
    struct node*temp1;

    if(prev->info==x)
    {

            while(prev->info==x)
            {

               temp1=prev;
               prev=prev->next;
               free(temp1);
               *head=prev;
            }

    }
    temp=prev;

    while(temp->next!=NULL)
    {
        if(temp->info==x)
        {
            while((temp->info==x)&&(temp->next!=NULL))
            {
                prev->next=temp->next;
                temp=temp->next;
            }
            if(temp->next==NULL)
            {
                prev->next=NULL;
            }

        }
        else
        {
            prev=temp;
            temp=temp->next;
        }


    }
    //*head=prev;
}
void print(struct node*p)
{
    while(p!=NULL)
    {
        printf("%d\t",p->info);
        p=p->next;
    }
}
int main()
{
    printf("Hello world!\n");
    struct node*head=NULL;
    insert(&head,1);
    insert(&head,1);
    insert(&head,1);
    insert(&head,3);
    insert(&head,1);
    insert(&head,2);
    insert(&head,1);
    insert(&head,1);
    insert(&head,1);
    print(head);
    printf("\n");
    delet(&head,1);
    print(head);
    return 0;
}
