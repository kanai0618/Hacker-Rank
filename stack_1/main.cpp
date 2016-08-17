#include <iostream>
#include <stack>
#include <queue>

using namespace std;

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
void stack1(struct node*p)
{
    stack<node*>s1;
    stack<node*>s2;
    s1.push(p);
    //cout<<s1.top()->info;
    struct node*z;
    while(!s1.empty())
    {
       z=s1.top();
       cout<<z->info<<endl;
        s2.push(z);
        if(z->left)
        {



        s1.push(z->left);
        }
        if(z->right)
        {


        s1.push(z->right);
        }
        //cout<<"hi"<<endl;


    }

    cout<<s2.top()->info;
}


void print(struct node*p)
{
    if(p!=NULL)
    {

        print(p->left);
        cout<<p->info;
        print(p->right);
    }
}
int main()
{


    struct node*start=insert(1);
    start->left=insert(2);
    start->right=insert(3);
    start->left->left=insert(4);
    start->left->right=insert(5);
    print(start);
    stack1(start);
}
