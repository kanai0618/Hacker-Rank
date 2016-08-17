#include <iostream>

using namespace std;
#include<queue>
struct node
{
    int info;
    struct node*left;
    struct node*right;
};

struct node*insert(int x)
{
    struct node*temp=new node;
    temp->left=NULL;
    temp->right=NULL;
    temp->info=x;
    return temp;
}


void level(struct node*p)
{
    if(p==NULL) return ;
    if(((p->left)==NULL)&&(p->right==NULL))
    {
        cout<<p->info;
    }
    queue<node*>q;
    q.push(p);
    int nodecount=1;
    while(nodecount>0)
    {
        int nodecount=q.size();
        struct node*front1=q.front();cout<<front1->info<<endl;
        q.pop();
        if(front1->left!=NULL) q.push(front1->left);
        if(front1->right!=NULL) q.push(front1->right);
        nodecount--;


    }


}


void print(struct node*p)
{
    if(p!=NULL)
    {
        print(p->left);

        //printf("%d",p->info);
        cout<<p->info;
        print(p->right);

    }
}


int main()
{
    struct node*root=insert(1);
    root->left=insert(2);
    root->right=insert(3);
    root->left->right=insert(4);
    root->left->left=insert(5);
    //print(root);
    level(root);
}
