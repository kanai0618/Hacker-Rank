#include<stdio.h>

int l=0;
// A BST node
struct Node
{
    int data;
    struct Node *left, *right;
};

// A utility function to create a new Binary Tree Node
struct Node *newNode(int item)
{
    struct Node *temp = (struct NOde*)(malloc(sizeof(struct Node)));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}


int check(struct Node*p,int i,int *max,int *flag,int *l)
{


    if((p->left!=NULL)&&(p->right==NULL))
    {
        *l=1;
    }
    if((p->left==NULL)&&(p->right==NULL))
    {
        if(*flag)
        {
            *max=i;
            printf("%d",*max);
            *flag=0;
        }
        else
        {
            printf("%d",i);
            if(i!=*max)
            {
                printf("%d",i);
                *l=1;
            }
        }
    }

    if((p->left!=NULL))
    {check(p->left,i+1,max,flag,l);}
    if(p->right!=NULL)
    {


    check(p->right,i+1,max,flag,l);}
    return *l;
}
void printInorder(struct Node *root)
{
    if (root == NULL) return;

    printInorder(root->left);
    printf("%d\t",root->data);
    printInorder(root->right);
}

// Driver Program to test above functions
int main()
{
    int max=0;
    int flag=1;
    struct Node *root = newNode(11);
    root->left = newNode(2);
    root->right = newNode(29);
    root->left->left = newNode(1);
    root->left->right = newNode(7);
    root->right->left = newNode(15);
    //root->right->right = newNode(40);
    //root->right->right->left = newNode(35);


    //cout << "Inorder Traversal of given tree\n";
    printInorder(root);
    if(check(root,0,&max,&flag,&l)==1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }




    //cout << "\n\nInorder Traversal of transformed tree\n";
    //printInorder(root);

    return 0;
}
