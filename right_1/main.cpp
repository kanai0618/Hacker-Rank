#include<iostream>
using namespace std;

// A BST node
struct Node
{
    int data;
    struct Node *left, *right;
};

// A utility function to create a new Binary Tree Node
struct Node *newNode(int item)
{
    struct Node *temp =  new Node;
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

void right(struct node*p,int count,int max)
{
    if(p==NULL)
        return ;
    if(count>max)
    {
        cout<<p->data<<endl;

        max=count;
    }
    right(p->left,count+1,max);
    right(p->right,count+1,max);
}
void printInorder(struct Node *root)
{
    if (root == NULL) return;

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

// Driver Program to test above functions
int main()
{
    struct Node *root = newNode(11);
    root->left = newNode(2);
    root->right = newNode(29);
    root->left->left = newNode(1);
    root->left->right = newNode(7);
    root->right->left = newNode(15);
    root->right->right = newNode(40);
    root->right->right->left = newNode(35);

    cout << "Inorder Traversal of given tree\n";
    printInorder(root);

    right(root,1,0);

    cout << "\n\nInorder Traversal of transformed tree\n";
    printInorder(root);

    return 0;
}
