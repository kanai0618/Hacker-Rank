#include<stdio.h>
#include<stdlib.h>
int carry=0;

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

struct node*add(struct node*head,struct node*head1)
{
    int sum=0;
    if(head==NULL)
        return head1;
    if(head1==NULL)
        return head;
     if(head==NULL&&head1==NULL)
            return NULL;

    if(head->next&&head1->next)
    {
        add(head->next,head1->next);
    }

    /*if(head1->next)
    {
        add(head,head1->next);
    }*/
    if(head)
        sum+=head->data;
    if(head1)
        sum+=head1->data;
   if(sum>=10)
   {
       head->data=sum%10+carry;
       carry=1;
   }
   else
   {
       head->data=sum+carry;
       carry=0;
   }


    return head;
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

    push(&head, 7);
    push(&head, 7);
    push(&head, 6);

    print(head);
    struct node*head1=NULL;
    push(&head1,7);
    push(&head1,3);
    push(&head1,3);
    //push(&head1,40);
    printf("\n");
    print(head1);

    head=add(head,head1);
    printf("\n");
    print(head);



    getchar();
}
