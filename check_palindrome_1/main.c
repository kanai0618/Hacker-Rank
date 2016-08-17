#include<stdio.h>
#include<stdlib.h>

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

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

struct node*minimum(struct node*p)
{
 struct node*temp;
 if(p==NULL) return NULL;
 if((p->left==NULL)&&(p->right==NULL)) return p;
 else
 {
     if(p->left)
     {
         while(p->left)
         {
             p=p->left;
         }
         return p;
     }
     else
     {
         if(p->right)
         {
             if(p->right->left)
             {  temp=p->right->left;
                 while(temp->left)
             {
                 temp=temp->left;
             }
             return temp;
             }
             else
             {
                 return p;
             }
         }
     }
 }



}


void inOrder(struct node* node)
{
  if (node == NULL)
    return;

  inOrder(node->left);
  printf("%d ", node->data);

  inOrder(node->right);
}


/* Driver program to test mirror() */
int main()
{
  struct node *root = newNode(5);
  //root->left        = newNode(3);
  root->right       = newNode(8);
  root->right->left=newNode(7);
  root->right->left->left=newNode(6);


  //root->left->left  = newNode(1);
  //root->left->right = newNode(2);

  /* Print inorder traversal of the input tree */
  printf("\n Inorder traversal of the constructed tree is \n");
  //inOrder(root);

  /* Convert tree to its mirror */
  printf("%d",minimum(root)->data);


  /* Print inorder traversal of the mirror tree */
  printf("\n Inorder traversal of the mirror tree is \n");
  //inOrder(root);

  getchar();
  return 0;
}
