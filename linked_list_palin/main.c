#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct node
{
  int data;
  struct node* next;
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

int palin(struct node*p,int x)
{

    int count=0;
    struct node*temp=p;
    struct node*prev=NULL,*next1,*temp1=p,*curr;

    while(count<x/2)
    {
        temp=temp->next;
        count++;
    }
    curr=temp;
    while(curr!=NULL)
    {
        next1=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next1;
    }

    temp->next=prev;
    temp=prev;
    count=0;
    while(temp!=NULL&&count<x/2)
    {
        if(temp->data!=temp1->data)
            return 0; break;
    }

    return 1;
}



void print(struct node*p)
{
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
}

/* Drier program to test above function*/
int main()
{
  /* Start with the empty list */
  struct node* head = NULL;

  push(&head, 1);
  push(&head, 2);
  push(&head, 3);
  push(&head, 4);
  push(&head, 3);
  push(&head, 2);
  push(&head, 1);
  print(head);
  printf("\n");
  printf("%d",palin(head,7));
  /* Create a loop for testing */


  getchar();
}
