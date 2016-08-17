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

void print(struct node*p)
{
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
}
struct node*delet(struct node*p,int x)
{

 struct node*temp=p,*z,*curr;int i;

 if(temp==NULL)
 {
     struct node*cr=(struct node*)(malloc(sizeof(struct node)));
     cr->data=x;
     cr->next=NULL;
     temp=cr;
     return temp;
 }
 else
 {
     struct node*cr=(struct node*)(malloc(sizeof(struct node)));
     cr->data=x;
     cr->next=temp;
     temp=cr;
 }

 return temp;

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

  /* Create a loop for testing */
  head=delet(head,3);
  print(head);

  getchar();
}
