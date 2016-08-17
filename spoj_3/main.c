#include <stdio.h>
#include <stdlib.h>

int max=0;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

/*Function protoypes*/
int printGivenLevel(struct node* root, int level,int count);
int height(struct node* node);
struct node* newNode(int data);

/* Function to print level order traversal a tree*/
int printLevelOrder(struct node* root)
{
  int h = height(root);
  int i,z,count=0;
  for(i=1; i<=h; i++)
    z=printGivenLevel(root, i,0);
    printf("%d\n",z);
    return z;
}

/* Print nodes at a given level */
int printGivenLevel(struct node* root, int level,int count)
{
  if(root == NULL)
    return;
  if(level == 1)
  {


    printf("%d ", root->data);
    count++;
    if(count>max)
    {
        max=count;
        //count=0;
    }

  }
  else if (level > 1)
  {
    printGivenLevel(root->left, level-1,count);
    printGivenLevel(root->right, level-1,count);
  }
   return max;
}

/* Compute the "height" of a tree -- the number of
    nodes along the longest path from the root node
    down to the farthest leaf node.*/
int height(struct node* node)
{
   if (node==NULL)
       return 0;
   else
   {
     /* compute the height of each subtree */
     int lheight = height(node->left);
     int rheight = height(node->right);

     /* use the larger one */
     if (lheight > rheight)
         return(lheight+1);
     else return(rheight+1);
   }
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
  int z;
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  //root->left->left  = newNode(4);
  root->left->right = newNode(5);
  root->right->left = newNode(6);
  root->right->right = newNode(7);


  printf("Level Order traversal of binary tree is \n");
  z=printLevelOrder(root);
  printf("%d",z);

  getchar();
  return 0;
}
