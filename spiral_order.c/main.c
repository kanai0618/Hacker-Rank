#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node* left;
    struct node* right;
};


void printGivenLevel(struct node* root, int level);
int height(struct node* node);
struct node* newNode(int data);


void printLevelOrder(struct node* root)
{
    int h = height(root);
    int i;
    for(i=1; i<=h; i++)
    {

        if((i%2)==0)
            printGivenLevel(root, i);
        else
            printGivenLevel1(root, i);
    }

}

/* Print nodes at a given level */
void printGivenLevel1(struct node* root, int level)
{
    if(root == NULL)
        return;
    if(level == 1)
        printf("%d ", root->data);

    printGivenLevel(root->right, level-1);
    printGivenLevel(root->left, level-1);


}
void printGivenLevel(struct node* root, int level)
{
    if(root == NULL)
        return;
    if(level == 1)
        printf("%d ", root->data);
    printGivenLevel(root->left, level-1);
    printGivenLevel(root->right, level-1);


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
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    root->right->left  = newNode(6);
    root->right->right = newNode(7);


    printf("Level Order traversal of binary tree is \n");
    printLevelOrder(root);

    getchar();
    return 0;
}