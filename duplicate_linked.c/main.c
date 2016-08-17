#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct node
{
    int data;
    struct node *next;
};

void removeDup(struct node*p)
{
    struct node*cur=p;
    //struct node*tmp;

    if (cur)
    {
        struct node* tmp = cur->next;
        if (tmp && cur->data == tmp->data)
        {
            cur->next = tmp->next;
            free(tmp);
            removeDup(cur);
        }

        else
            removeDup(cur->next);
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
    struct node *start = NULL,*head=NULL;


    push(&start, 4);
    push(&start, 1);
    push(&start, 1);
    push(&start, 3);
    push(&start, 2);


    printf("\n Linked list before calling  merge() ");
    printList(start);


    //pairWiseSwap(&start);
    //sum(start);
    removeDup(start);

    printf("\n Linked list after calling  merge() ");
    printList(start);
    //printList(head);

    getchar();
    return 0;
}

