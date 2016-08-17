#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node* next;
};

void push(struct node** head_ref, int new_data)
{

  struct node* new_node =
  (struct node*) malloc(sizeof(struct node));


  new_node->data  = new_data;


  new_node->next = (*head_ref);


  (*head_ref)    = new_node;
}

void rec(struct node**head)
{
    struct node*temp=*head,*curr,*prev=NULL;
    if(temp->next==NULL)
        return ;


    if(temp->next!=NULL)
    {
        prev=temp;

        curr=temp->next;


        rec(&curr);
    }






    prev->next->next=prev;
    prev->next=NULL;
    *head=curr;


}

void print(struct node*p)
{
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
}

int main()
{

  struct node* head = NULL;

  push(&head, 20);
  push(&head, 4);
  push(&head, 15);
  push(&head, 10);
  print(head);
  rec(&head);
  printf("\n");
  print(head);



  getchar();
}
