#include <stdio.h>
#include <stdlib.h>




#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct Node
{
    int key;
    struct Node *left, *right;
};


struct Node *newNode(int k)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->key = k;
    node->right = node->left = NULL;
    return node;
}
int isbst(struct Node*p)
{
    if(p->left==NULL&&p->right==NULL)

        return 1;

    if(((p->key>p->left->key)&&(p->key<p->right->key))&&isbst(p->left)&&isbst(p->right))
        return 1;

    //return 0;

}


int main()
{
    struct Node* root = NULL;
    root = newNode(50);
    root->left = newNode(30);
    root->right = newNode(140);
    root->left->left=newNode(40);
    root->left->right=newNode(70);
    root->right->left=newNode(130);
    root->right->right=newNode(170);


    printf("%d\n",isbst(root));

    return(0);
}

