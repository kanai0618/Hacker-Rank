#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/* A linked list node */
struct node
{
    int data;
    struct node *next;
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
void printList(struct node *node)
{
    while(node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}
/* Function to pairwise swap elements of a linked list */
void addlist(struct node*p,struct node*q)
{
    struct node*result=NULL,*temp1=p,*temp2=q;

    while((temp1!=NULL)||(temp2!=NULL))
    {
        printf("\n");
        //printf("%d\t%d\n",temp1->data,temp2->data);
        if((temp1->next==NULL)&&(temp2!=NULL))
        {
            while(temp2!=NULL)
            {
                printf("%d",temp2->data);
                push(&result,temp2->data);
                temp2=temp2->next;
            }
        }

        else if((temp2->next==NULL)&&(temp1!=NULL))
        {
            while(temp1!=NULL)
            {
                printf("%d",temp1->data);
                push(&result,temp1->data);
                temp1=temp1->next;
            }
        }
        else if(temp1->data<temp2->data)
        {
            printf("%d",temp1->data);
            push(&result,temp1->data);
            temp1=temp1->next;
        }
        else
        {
            printf("%d",temp2->data);
            push(&result,temp2->data);
            temp2=temp2->next;
        }
    }
    printList(result);
}

/* Function to add a node at the begining of Linked List */

/* Function to print nodes in a given linked list */


/* Druver program to test above function */
int main()
{
    struct node *start = NULL,*start1=NULL;

    /* The constructed linked list is:
     1->2->3->4->5->6->7 */
    push(&start, 7);
    push(&start, 6);
    push(&start, 2);
    //push(&start1, 9);
    push(&start1, 5);
    push(&start1, 3);
    push(&start1, 1);

    printf("\n Linked list before calling  pairWiseSwap() ");
    printList(start1);
    printf("\n");
    printList(start);

    addlist(start1,start);

    printf("\n Linked list after calling  pairWiseSwap() ");
    //printList(start);

    getchar();
    return 0;
}
