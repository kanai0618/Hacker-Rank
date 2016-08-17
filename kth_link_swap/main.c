#include <stdio.h>
#include <stdlib.h>

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


void swap(struct node*p,int k)
{
    struct node*temp=p;
    struct node*temp1=p;
    struct node*temp2=p;
    struct node*temp3;
     struct node*temp4;
     struct node*temp5;


    int count=0;
    while(count<k-1)
    {
        temp3=temp;
        temp=temp->next;
        count++;
    }
    temp2=temp;




    while(temp->next!=NULL)
    {
        temp4=temp1;
        temp1=temp1->next;
        temp=temp->next;
    }


 temp3->next=temp1;
 temp4->next=temp2;
 temp5=temp1->next;
 temp1->next=temp2->next;
 temp2->next=temp5;



    //







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

  push(&head, 5);
  push(&head, 10);
  push(&head, 25);
  push(&head, 45);
  push(&head, 3);
  push(&head, 16);
  push(&head, 23);
  push(&head, 51);


  print(head);

  swap(head,3);
  printf("\n");
  print(head);
  /* Create a loop for testing */


  getchar();
}
