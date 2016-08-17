#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
struct node *hashqueue[27],*sibling;

char name[20];

char start;

int type;       // type is 0-dir or 1-file

};

typedef struct node node;


void nullme(node *tree)
{
int i;
tree->sibling=NULL;
for(i=0;i<27;i++)
tree->hashqueue[i]=NULL;
return;
}


void Insert_nary_hash(node * parent,node * child)
{
   // printf("\n\n %s %s",parent->name,child->name);
   if((child->start>='a' && child->start<='z'))
   {
       if(parent->hashqueue[(child->start)-'a']==NULL)
             parent->hashqueue[(child->start)-'a']=child;
       else
           {
               parent=parent->hashqueue[(child->start)-'a'];
             //  printf("\n\n                   sibil %s ",parent->name);
               while(parent->sibling!=NULL)
               {
                  // printf("\n\n                   sibil %s ",parent->name);
                   parent=parent->sibling;
               }
                parent->sibling=child;
           }
   }
   else if((child->start>='A' && child->start<='Z')){
   if(parent->hashqueue[(child->start)-'A']==NULL)
          parent->hashqueue[(child->start)-'A']=child;
     else
           {
               parent=parent->hashqueue[(child->start)-'A'];
               while(parent->sibling!=NULL)
               {
                   parent=parent->sibling;
               }
                parent->sibling=child;
           }
   }
   else
   {
       if(parent->hashqueue[26]==NULL)
             parent->hashqueue[26]=child;
             else
             {
               parent=parent->hashqueue[26];
               while(parent->sibling!=NULL)
               {
                   parent=parent->sibling;
               }
                parent->sibling=child;
             }
   }
}

node *Ext_dir(node * curr_dir,char names[20])
{
    node *t;
    int b;
    if(names[0]>='a' && names[0]<='z' ){
          t=curr_dir->hashqueue[names[0]-'a'];
     b=names[0]-'a';
    }
   else if(names[0]>='A' && names[0]<='Z'){
          t=curr_dir->hashqueue[names[0]-'A'];
   b=names[0]-'A';
   }
    else{
      t=curr_dir->hashqueue[26];
    b=26;
    }
    printf("\n\n Going to the %d HasH Queue\n\n",b);
    while(t!=NULL)
    {
        printf("\n  --->%s",t->name);
        if(strcmp(t->name,names)==0)
          return t;
        else
          t=t->sibling;

    }
    return NULL;
}
void Extract_Name(node *root,char **p)
{
    node *n;
    char arr[10];
    int i;
    do
    {
        i=0;
         while(**p!='/' && **p!='\0')
         {
            arr[i++]=**p;
            (*p)++;
           p=&(*p);
         }
         arr[i]='\0';
         if(**p!='\0')
         (*p)++;
         if(strcmp(root->name,arr)==0)
           n=root;
        else
           n=Ext_dir(n,arr);

    }
    while(**p!='\0');
}



int main()
{
FILE *fp;
int top=0,end=0,n,i,choice,lines;
char c,file_name[10],buff[10],ch,path[20],*p;
node *tree=(node *)malloc(sizeof(node));
node *q[25],*temp;

strcpy(tree->name,"root");
tree->type=0;
tree->start='r';
nullme(tree);
node *curr_dir=tree;
q[end++]=tree;
do
{
    printf("Current Dir : %s\n \n Number of (directory and file ) : ",q[top]->name);
    scanf("%d",&n);

     for(i=1;i<=n;i++)
     {
         node *t=(node *)malloc(sizeof(node));
         printf("\nFile/Directory %d name : ",i);
         scanf("%s",&t->name);
         t->start=t->name[0];
         printf("\nFile/Directory %d Type : ",i);
         scanf("%d",&t->type);
         nullme(t);

         if(t->type==0)
           q[end++]=t;

         Insert_nary_hash(q[top],t);
     }
top++;
}while(top<end);
printf("Enter the Path Name you want to search\n");
scanf("%s",&path);


p=path;
Extract_Name(tree,&p);
return 0;
}
