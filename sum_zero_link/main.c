#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct node
{
    int data;
    struct node *next;
};


void pairWiseSwap(struct node **head)
{

    if (*head == NULL || (*head)->next == NULL)
        return;
    struct node*curr=*head,*prev=*head,*Next,*temp,*temp1=NULL;
    int sum=0;

    while(curr!=NULL)
    {
        if(curr->next==NULL)
        {
            curr->data=sum+curr->data;

            temp1->next=curr;
            //temp1->next=NULL;
            break;
        }

        if(curr->data!=0)
        {
            sum+=curr->data;
            curr=curr->next;
        }
        else
        {
            curr->data=sum;
            if(temp1==NULL)
            {
                temp1=curr;
                *head=curr;
            }
            else
            {
                temp1->next=curr;
                temp1=curr;
            }
            sum=0;
            curr=curr->next;
        }


    }




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
    struct node *start = NULL;


    push(&start, 1);
    push(&start, 2);
    push(&start, 0);
    push(&start, 1);
    push(&start, 4);
    push(&start, 0);
    push(&start, 1);
    push(&start, 1);
    push(&start, 9);

    printf("\n Linked list before swaping() ");
    printList(start);

    pairWiseSwap(&start);

    printf("\n Linked list after swaping() ");
    printList(start);

    getchar();
    return 0;
}
