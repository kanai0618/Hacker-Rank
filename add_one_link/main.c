#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int carry=0;
int flag=0;

struct node
{
    int data;
    struct node *next;
};

struct node*fun(struct node*p)
{
    int z;
    if(p->next!=NULL)
    {
        fun(p->next);
    }
    if((carry==1)&&(flag==0))
    {
        z=p->data+carry;
        //printf("%d",z);
        if((z)>=10)
        {
            p->data=(z)%10;
            //printf("%d",p->data);
            carry=1;

        }
        else
        {
            p->data=z;
            //printf("%d",p->data);
            flag=1;

        }
    }
    if((flag==0)&&(carry==0))
    {
        z=p->data+1;
        if((z)>=10)
        {
            //printf("%d",z);
            p->data=(z)%10;
            //printf("%d",p->data);
            carry=1;
        }
        else
        {
            p->data=z;
            //printf("%d",p->data);
            flag=1;
        }

    }

    //printList(p);
    return p;
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



    push(&start, 1);
    push(&start, 1);
    push(&start, 3);
    push(&start, 1);
    push(&start, 5);

    printf("\n Linked list before adding 1 to the list ");
    printList(start);

    //pairWiseSwap(&start);
    //sum(start);
    z=fun(start);

    printf("\n Linked list after adding 1 to the list ");
    printList(z);

    getchar();
    return 0;
}
