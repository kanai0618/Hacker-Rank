#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct node
{
    int data;
    struct node* next;
};

void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));

    /* put in the data  */
    new_node->data  = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}

void rec(struct node**p,int k)
{

    int flag=0,count=0;
    struct node*temp1,temp=*p,prev=NULL,*temp2=*p;


    while(temp!=NULL)

    {
        while(temp!=NULL&&count<k)
        {
            struct node*temp1=temp->next;
            temp->next=prev;
            prev=temp;
            temp=temp1;
            count++;
        }
        temp2->next=temp;

        if(flag==0)
        {
            *p=prev;
            flag=1;
        }
        count=0;
        while(temp!=NULL&&count<k)
        {
            temp=temp->next;
            count++;
        }


    }

}

void print(struct node*p)
{
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
}

/* Drier program to test above function*/
int main()
{
    /* Start with the empty list */
    struct node* head = NULL;

    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);

    push(&head, 2);
    push(&head, 3);
    print(head);
    rec(&head,2);
    print(head);
    /* Create a loop for testing */


    getchar();
}
