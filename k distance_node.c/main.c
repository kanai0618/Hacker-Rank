#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node* left;
    struct node* right;
};

void print(struct node*p,int k)
{
    if(k==1)
    {
        printf("%d",p->data);
    }
    else
    {
        print(p->left,k-1);
        print(p->right,k-1);
    }
}


struct node* newNode(int data)
{
    struct node* node = (struct node*)
                        malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return(node);
}


/* Driver program to test above functions*/
int main()
{
    struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);
  root->right->left = newNode(8);

  print(root, 3);


    printf("Level Order traversal of binary tree is \n");
    print(root,2);

    getchar();
    return 0;
}
