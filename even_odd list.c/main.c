#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void push (struct node** head_ref, int new_data)
{

    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));


    new_node->data  = new_data;


    new_node->next = (*head_ref);


    (*head_ref)    = new_node;
}
void print(struct node*p)
{
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
}
void separate(struct node*p)
{ struct node*temp=p;
struct node*temp1=NULL,*temp2=NULL;
struct node*ptr1=NULL,*ptr2=NULL;
    while(temp!=NULL)
    {
        if(((temp->data)%2)==0)
        {
            if(temp1==NULL)
            {
                temp1=temp;
                ptr1=temp;
            }
            else
            {
                temp1->next=temp;
                temp1=temp;
            }
        }
        else
        {
            if(temp2==NULL)
            {
                temp2=temp;
                ptr2=temp;
            }
            else
            {
                temp2->next=temp;
                temp2=temp;
            }
        }
        temp=temp->next;
    }
    temp1->next=NULL;
    print(ptr1);

    printf("\n");
    temp2->next=NULL;
    print(ptr2);
}


int main(void)
{
    struct node *head = NULL;
    //push(&head, 0);
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    push(&head, 6);

    print(head);
    printf("\n");
    separate(head);
}
