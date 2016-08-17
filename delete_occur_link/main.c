#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct node
{
    int data;
    struct node *next;
};

void fun(struct node*p,int x)
{
    struct node*temp=p;
    while(temp->next!=NULL)
    {
        if(temp->next->data==x)
        {
            //printf("%d",temp->next->data);
            temp->next=temp->next->next;
            //temp=temp->next->next;
            //printf("%d",temp->data);
        }
        else
        {
            temp=temp->next;
        }
    }
    temp->next=NULL;
    //printList(p);

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
    struct node*z;



    push(&start, 2);
    push(&start, 1);
    push(&start, 1);
    push(&start, 1);
    push(&start, 3);
    push(&start, 1);
    push(&start, 5);

    printf("\n Linked list before deleting 1 to the list ");
    printList(start);

    //pairWiseSwap(&start);
    //sum(start);
    fun(start,1);

    printf("\n Linked list after deleting 1 to the list ");
    printList(start);

    getchar();
    return 0;
}
