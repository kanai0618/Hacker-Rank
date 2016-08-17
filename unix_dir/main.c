#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
struct node *link[10],*parent;
char name[20];
char type[15];
int n,inode;
};

typedef struct node node;
int inode_num=0;

void getInput(node *tree)
{
printf("Enter the name: ");
scanf("%s",tree->name);
printf("Enter the type: ");
scanf("%s",tree->type);
tree->inode=inode_num;
inode_num++;
}


void create(int n,int *top,int *end,node *q[25])
{
    int i;
    for(i=0;i<n;i++)
    {
        q[*top]->link[i]=(node*)malloc(sizeof(node));
        q[*top]->link[i]->parent=q[*top];
        getInput(q[*top]->link[i]);
        if(strcmp(q[*top]->link[i]->type,"file")==0)
            q[*top]->link[i]->n=0;
        else
            q[++*end]=q[*top]->link[i];
    }
}

node* cd(node *tree)
{
    node *tree1=tree;
    int choice,i,j=0,k;
    char direc[25],temp[10];
    printf("\n1. cd ..\n2. cd dir_name\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        if(tree1->parent==NULL)
            return tree1;
        return tree1->parent;
    }
    fflush(stdin);
    gets(direc);
    for(i=0;i<=strlen(direc);i++)
    {
        if(direc[i]=='/' || direc[i]=='\0')
        {
            temp[j]='\0';

            for(k=0;k<tree1->n;k++)
            {
                if(strcmp(temp,tree1->link[k]->name)==0)
                {
                    break;
                }
            }
            if(k==tree1->n)
            {
                printf("Path not found\n");
                tree1=tree;
                break;
            }
            tree1=tree1->link[k];
            j=0;
        }
        else
        {
            temp[j++]=direc[i];
        }
    }
    return tree1;
}

void ls(node *tree)
{
    node *tree1;
int i,choice;
char filename[25];
if(tree->n==0)
{
    printf("\nEmpty directory\n");
    return;
}
printf("1. ls\n2. ls -i \n3. ls -li\n4. ls filename\n");
scanf("%d",&choice);
switch(choice)
{
    case 1:
        printf("Name\tType\n");
        for(i=0;i<tree->n;i++)
            printf("%s\t%s\n",tree->link[i]->name,tree->link[i]->type);
        break;

    case 2:
        printf("Inode\tType\n");
        for(i=0;i<tree->n;i++)
            printf("%d\t%s\n",tree->link[i]->inode,tree->link[i]->type);
        break;

    case 3:
        printf("Name\tInode\tType\n");
        for(i=0;i<tree->n;i++)
            printf("%s\t%d\t%s\n",tree->link[i]->name,tree->link[i]->inode,tree->link[i]->type);
        break;

    case 4:
        printf("Enter the filename\n");
        fflush(stdin);
        gets(filename);
        for(i=0;i<tree->n;i++)
        {
            if(strcmp(filename,tree->link[i]->name)==0)
            {
                tree1=tree->link[i];
                break;
            }
        }
        printf("Name\tType\n");
        for(i=0;i<tree1->n;i++)
            printf("%s\t%s\n",tree1->link[i]->name,tree1->link[i]->type);
        break;

    default:
        printf("Invalid Entry");
}
}

void pwd(node *tree)
{
    node *temp1=tree;
    char temp[10][10];
    int i=0;
    while(temp1!=NULL)
    {
        strcpy(temp[i++],temp1->name);
        temp1=temp1->parent;
    }
    for(--i;i>=0;i--)
    {
        printf("%s/",temp[i]);
    }
    printf("\n");
}

int main()

{
int top=0,end=0,n,choice;
char file_name[10];

node *tree=(node *)malloc(sizeof(node));
node *q[25],*temp;
printf("Enter the root directory: ");
gets(tree->name);
strcpy(tree->type,"directory");
tree->parent=NULL;

node *curr_dir=tree;

q[0]=tree;
do
{
    printf("Presenet Directory: %s\nNo. of files in the presenet directory: ",q[top]->name);
    scanf("%d",&n);
    q[top]->n=n;
    create(n,&top,&end,q);
top++;
}while(top<=end);

do
{
printf("\nEnter the operation to be performed\n");
printf("1.cd\t2.ls\t3.pwd\n");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    curr_dir=cd(curr_dir);
    break;

    case 2:
    ls(curr_dir);
    break;

    case 3:
    pwd(curr_dir);
    break;

    case 4:
        break;
}

}while(choice!=4);
return 0;
}
