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
void pair(struct node*p)
{
    struct node*prev=p;
    struct node*temp1;
    struct node*curr=p->next;
    while (true)
    {
        struct node *next = curr->next;
        curr->next = prev; // Change next of current as previous node

        // If next NULL or next is the last node
        if (next == NULL || next->next == NULL)
        {
            prev->next = next;
            break;
        }

        // Change next of previous to next next
        prev->next = next->next;

        // Update previous and curr
        prev = next;
        curr = prev->next;
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


    //push(&start, 8);
    push(&start, 7);
    push(&start, 0);
    push(&start, 6);
    push(&start, 5);
    push(&start, 0);
    push(&start, 3);
    push(&start, 2);
    push(&start, 1);

    printf("\n Linked list before calling  pairWiseSwap() ");
    printList(start);

    //pairWiseSwap(&start);
    //sum(start);

    pair(start);

    printf("\n Linked list after calling  pairWiseSwap() ");
    printList(start);

    getchar();
    return 0;
}
