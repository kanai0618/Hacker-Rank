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
void swap(struct node**head)
{
    struct node*temp=*head,*prev,*temp1=*head,*temp2;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    temp2=prev->next;
    prev->next=temp1->next;
    temp1->next=temp2;
    //prev->next=temp1;

    //*head=temp1;




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

  push(&head, 20);
  push(&head, 4);
  push(&head, 15);
  push(&head, 10);
  print(head);
  swap(&head);
  print(head);
  /* Create a loop for testing */


  getchar();
}
