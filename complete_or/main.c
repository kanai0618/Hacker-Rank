#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return(node);
}


int complete(struct node*p)
{
    if(p==NULL)
        return 1;
    if((p->left!=NULL)&&(p->right==NULL))
        return 1;
    if((p->left==NULL)&&(p->right!=NULL))
        return 0;
    return complete(p->left)&&complete(p->right);
}

 void print(struct node*p)
 {
     if(p!=NULL)
     {
         printf("%d",p->data);
         print(p->left);
         print(p->right);
     }
 }



 int main()
 {
     struct node *root  = newNode(1);
  root->left         = newNode(2);
  root->right        = newNode(3);
  root->left->left   = newNode(4);
  root->left->right  = newNode(5);
  root->right->left = newNode(6);
  print(root);


  printf("%d",complete(root));
 }
