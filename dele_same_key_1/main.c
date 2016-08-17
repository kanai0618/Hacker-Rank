#include<stdio.h>
#include<stdlib.h>

/* A linked list node */
struct node
{
    int data;
    struct node *next;
};
void push(struct node** head_ref, int new_data)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

/* Function to print nodes in a given linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}

void delet(struct node**p,int x)
{
    struct node*temp=*p;
    struct node*z,*prev=NULL;

    while (temp != NULL && temp->data ==x)
    {
        *p = temp->next;   // Changed head
        free(temp);               // free old head
        temp =*p;         // Change Temp
    }


    while(temp!=NULL)
    {
        if(temp->data==x)
        {
            if(prev==NULL)
            {
                z=temp;

                temp=temp->next;
                free(z);
            }
            else
            {
                z=temp;
                prev->next=temp->next;
                temp=prev->next;
                free(z);

            }
        }
        else
        {
            prev=temp;
            temp=temp->next;
        }
    }
}

/* Druver program to test above function */
int main()
{
    struct node *start = NULL;

    /* The constructed linked list is:
     1->2->3->4->5->6->7 */
    push(&start, 7);
    push(&start, 2);
    push(&start, 3);
    push(&start, 3);
    push(&start, 3);
    push(&start, 2);
    push(&start, 2);

    printf("\n Linked list before calling  rearrange() ");
    printList(start);

   delet(&start,2);

    printf("\n Linked list after calling  rearrange() ");
    printList(start);

    return 0;
}
