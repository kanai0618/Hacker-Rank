#include<stdio.h>
int count=0;
int flag=0;

struct node
{
    char data;
    struct node* next;
};
struct node*z;

// Initial parameters to this function are &head and head
/* Push a node to linked list. Note that this function
  changes the head */



int rec(struct node*p)
{


    z=p;
    count++;
    if(count<4)
    {
        rec(p->next);
    }



    //z=z->next;
    if(z!=NULL)
    {


        if(z->data!=p->data)
        {
            flag=1;



        }
        z=z->next;
    }
    if(flag==1)
    {
        return 0;
    }
    else

    {
        return 1;
    }
}

void push(struct node** head_ref, char new_data)
{
    /* allocate node */
    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));

    /* put in the data  */
    new_node->data  = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to pochar to the new node */
    (*head_ref)    = new_node;
}

// A utility function to print a given linked list
void printList(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%c->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

/* Drier program to test above function*/
int main()
{
    /* Start with the empty list */
    struct node* head = NULL;
    char str[] = "abacaba";
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        push(&head, str[i]);
        printList(head);

    }
    //pop(head);
    printf("%d",rec(head));

    return 0;
}
