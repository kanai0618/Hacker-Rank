#include <stdio.h>
#include <stdlib.h>
//struct node*start=NULL;


struct node
{
    int info;
    struct node*next;
};
struct node*start=NULL;

void insert(int x)
{
    struct node*temp=(struct node*)(malloc(sizeof(struct node)));
    //struct node*start=NULL;
    temp->info=x;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        temp->next=start;
        start=temp;
    }
    //print(start);
}
void print(struct node*p)
{
    while(p!=NULL)
    {
        printf("%d",p->info);
        p=p->next;
    }
}
int main()
{
    printf("Hello world!\n");
    //struct node*start=NULL;

    insert(1);
    insert(2);
    print(start);
    return 0;
}
