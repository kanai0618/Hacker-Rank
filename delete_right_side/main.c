#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<stdlib.h>
int flag=0;
/* A linked list node */
struct node
{
 int data;
 struct node *next;
};


void moveToFront(struct node**p)
{
    //if(p==NULL) return ;


    struct node*temp=*p,*temp1,*temp3,*head;

    int max=temp->data;


    while(temp->next!=NULL)
    {
        temp1=temp->next;

        if(max>=(temp1->data))
        {
 //printf("%d",max);
            temp3=temp1;
            temp->next=temp1->next;
            temp=temp;
            //printf("%d",temp->data);


            free(temp3);
        }
        else
        {
            max=temp1->data;
                temp=temp->next;
        }

    }



}


/* UTILITY FUNCTIONS */
/* Function to add a node at the begining of Linked List */
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


/* Function to print nodes in a given linked list */
void printList(struct node *node)
{
  while(node != NULL)
  {
    printf("%d ", node->data);
    node = node->next;
  }
}

/* Druver program to test above function */
int main()
{
  struct node *start = NULL;

  /* The constructed linked list is:
   1->2->3->4->5 */
   push(&start, 12);
   push(&start, 15);
   push(&start, 10);
  push(&start, 11);
  push(&start, 5);
  push(&start, 6);
  push(&start, 2);
  push(&start, 3);

  printf("\n Linked list before moving last to front ");
  printList(start);

  moveToFront(&start);

  printf("\n Linked list after removing last to front ");
  printList(start);

  getchar();
}
