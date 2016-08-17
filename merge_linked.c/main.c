#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct node
{
    int data;
    struct node *next;
};

void sum(struct node*p)
{
    struct node*temp=p;
    struct node*temp1=p;
    int sum=0;
    while(temp!=NULL)
    {
        if(temp->data!=0)
        {
            sum+=temp->data;
            //printf("%d",sum);
        }
        else
        {
            temp1->data=sum;
            temp1->next=temp->next;
            temp1=temp->next;
            sum=0;
        }
        if(temp->next==NULL)
        {
            temp1->data=sum;
            temp1->next=NULL;
            break;
        }
        temp=temp->next;
    }
}
void merge(struct node*p,struct node*q)
{
    struct node*temp1=p;
    struct node*temp2=q;
    struct node*next1,*next2;
    while(temp1!=NULL||temp2!=NULL)
    {
        next1=temp1->next;
        next2=temp2->next;


        temp2->next=next1;
        temp1->next=temp2;
        temp1=next1;
        temp2=next2;
    }
    //q=temp2;
    //printList(temp1);
    //printList(temp2);
}


void push(struct node** head_ref, int new_data)
{

    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));


    new_node->data  = new_data;


    new_node->next = (*head_ref);


    (*head_ref)    = new_node;
}


void printList(struct node *node)
{
    while(node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}


int main()
{
    struct node *start = NULL,*head=NULL;


    push(&head, 8);
    push(&head, 7);
    push(&head, 0);
    push(&head, 6);
    push(&start, 5);
    push(&start, 0);
    push(&start, 3);
    push(&start, 2);


    printf("\n Linked list before calling  merge() ");
    printList(start);
    printf("\n");
    printList(head);

    //pairWiseSwap(&start);
    //sum(start);
    merge(start,head);

    printf("\n Linked list after calling  merge() ");
    printList(start);
    //printList(head);

    getchar();
    return 0;
}
