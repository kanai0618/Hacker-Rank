#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*next;
};

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

void subtract(struct node*p)
{
    int a[100],i=0,k=0;
    struct node*temp=p,*temp1=p;
    while(p!=NULL)
    {
        a[i++]=p->data;
        p=p->next;
    }


    while(temp!=NULL&&k<i/2)
    {
        //printf("%d",temp->data);
        temp->data=temp->data-a[i-k-1];

        k++;
        temp=temp->next;
    }
    while(temp1!=NULL)
    {
        printf("%d\t",temp1->data);
        temp1=temp1->next;
    }
}
int main()
{
    struct node *start = NULL;


    push(&start, 1);
    push(&start, 2);
    push(&start, 3);
    push(&start, 4);
    push(&start, 5);
    push(&start, 6);
    push(&start, 7);

    printf("\n Linked list before calling  pairWiseSwap() ");
    printList(start);
    printf("\n");
    subtract(start);



    getchar();
    return 0;
}

