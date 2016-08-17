#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

int isBSTUtil(struct node* node);

/* Returns true if the given tree is a binary search tree
 (efficient version). */
int isBST(struct node* node)
{
  return(isBSTUtil(node));
}

/* Returns true if the given tree is a BST and its
   values are >= min and <= max. */
int isBSTUtil(struct node* node)
{

  /* an empty tree is BST */
  if (node==NULL)
     return 1;
     if(node->left==NULL&&node->right==NULL)
        return 1;

  /* false if this node violates the min/max constraint */
  /*if (node->data < min || node->data > max)
     return 0;*/

  /* otherwise check the subtrees recursively,
   tightening the min or max constraint */
  return
    (node->left->data<node->data)&&(node->right->data>node->data)&&isBSTUtil(node->left) &&  // Allow only distinct values
    isBSTUtil(node->right);  // Allow only distinct values
}

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
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
  struct node *root = newNode(4);
  root->left        = newNode(2);
  root->right       = newNode(5);
  root->left->left  = newNode(6);
  root->left->right = newNode(3);

  if(isBST(root))
    printf("Is BST");
  else
    printf("Not a BST");

  getchar();
  return 0;
}
