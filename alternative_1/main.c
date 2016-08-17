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

void alternative(struct node*p)
{
    struct node*temp=p;
    struct node*temp1=p->next;
    while(temp->next!=NULL)
    {

        if(temp1->next==NULL)
        {
            temp->next=NULL;
            break;
        }
        temp->next=temp1->next;
        temp=temp1->next;
        temp1=temp->next;
    }
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
  //push(&head, 5);
  push(&head, 2);
  print(head);
  alternative(head);
  printf("\nalternative node\n");
    print(head);
  /* Create a loop for testing */


  getchar();
}
