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
        struct node*curr=*head,*prev=*head,*Next,*temp;
        int count=0;
        while(count<4)
        {
            curr=curr->next;
            count++;
        }

    while(true)
    {
        Next=curr->next;
        temp=prev->next;
        prev->next=curr;
        if(Next==NULL)
        {
           curr->next=NULL;
           break;
        }

        curr->next=temp;
        prev=temp;
        curr=Next;
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
    push(&start, 3);
    push(&start, 4);
    push(&start, 4);
    push(&start, 3);
    push(&start, 2);
    push(&start, 1);

    printf("\n Linked list before swaping() ");
    printList(start);

    pairWiseSwap(&start);

    printf("\n Linked list after swaping() ");
    printList(start);

    getchar();
    return 0;
}
