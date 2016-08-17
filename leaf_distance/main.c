#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left, *right;
};

/* utility that allocates a new Node with the given key  */
struct node* newNode(int key)
{
    struct node* node1 = (struct node*)(malloc(sizeof(struct node)));

    node1->key = key;
    node1->left = node1->right = NULL;
    return (node1);
}

void distance(struct node*p,int h,int x,int y)
{
    if((h-y)==x)
    {
        printf("%d",p->key);
    }
    if(p!=NULL)
    {
        distance(p->left,h,x,y+1);
        distance(p->right,h,x,y+1);

    }
}

void print(struct node*p)
{
    if(p!=NULL)
    {
        printf("%d",p->key);
        print(p->left);
        print(p->right);
    }
}




int main()
{
    struct node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    //root->right->left->right = newNode(8);
    distance(root,4,,0);

}
