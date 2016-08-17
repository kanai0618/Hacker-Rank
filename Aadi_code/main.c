#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 25
struct node
{
    int inode;
    char name[20];
    int type;
    int childcount;
    struct node* parent;
    struct node* children[max];
};
struct node *current;
struct node *dir[max],*file[max];
int dirrear=-1,filerear=-1,dirfront=0,filefront=0,inodea=1,countdir=0;
void dirinsert(struct node *n)
{

    ++dirrear;
    dir[dirrear]=n;
}
void fileinsert(struct node *n)
{
    ++filerear;
    file[filerear]=n;
}
struct node* createdir()
{
    struct node *root=(struct node*)malloc(sizeof(struct node));
    strcpy(root->name,"C:");
    printf("No. of sub directories:");
    scanf("%d",&root->childcount);
    dirinsert(root);
    current=dir[0];
    current->parent=NULL;
    current->inode=inodea;
    inodea++;
    return current;
}
void create(struct node *root)
{
    printf("\nNew Node\n");
    printf("Name:");
    scanf("%s",root->name);
    printf("No. of sub directories:");
    scanf("%d",&root->childcount);
    if(root->childcount==0)
    {
        printf("file created\n");
        root->type=1;
        root->inode=inodea;
        inodea++;
        fileinsert(root);
    }
    else
    {
        printf("directory created\n");
        root->type=1;
        root->inode=inodea;
        inodea++;
        dirinsert(root);
    }
}
int main()
{
    int i,check=0,choice;
    char namecheck[20];
    struct node* root;
    printf("Directory creation!!\n");
    root=createdir();
    while(dirrear>=countdir)
    {
        root=dir[countdir];
        current=root;
        for(i=0;i<root->childcount;i++)
        {
            root->children[i]=(struct node*)malloc(sizeof(struct node));
            create(root->children[i]);
            root->children[i]->parent=root;
        }
        countdir++;
    }
    while(check==0)
    {
        printf("select option:\n 1)cd\n2)cd..\n3)ls\n4)ls -i\n5)ls -li\n6)Exit");
        scanf("%d",choice);
        switch(choice)
        {
        case 1:
            {
                printf("Enter the directory name:");
                scanf("%s",namecheck);
                int j;
                for(j=0;j<current->childcount;j++)
                {
                    if((strcmp(current->children[j]->name,namecheck)==0)&&((current->children[i]->childcount)!=0))
                    {
                        current=current->children[i];
                        break;
                    }
                    else
                        printf("Directory Not present");
                }
            }
        case 2:
            {
                if(current->parent==NULL)
                    printf("Root Direcctory reached");
                else
                    current=current->parent;
            }
        case 3:
            {
                printf("Enter the directory name:");
                scanf("%s",namecheck);
                int j,k;
                for(j=0;j<current->childcount;j++)
                {
                    if((strcmp(current->children[j]->name,namecheck)==0)&&((current->children[i]->childcount)!=0))
                    {
                        struct node *temp=current->children[j];
                        for(k=0;k<temp->childcount;k++)
                        {
                            printf("\nSubdirectory Name:%s\t Subdirectory Type:%d",temp->children[i]->name,temp->children[i]->type);
                        }
                        break;
                    }
                    else
                        printf("Directory Not present");
                }


            }
        case 4:
            {
                int j;
                struct node *temp=current;
                for(i=0;i<temp->childcount;i++)
                {
                    printf("\nInode:%d",temp->inode);
                }
            }
        case 5:
            {
                int j;
                struct node *temp=current;
                for(i=0;i<temp->childcount;i++)
                {
                    printf("\nChild Name:%s\t Inode:%d",temp->name,temp->inode);
                }
            }
        case 6:
            check=1;
        }
    }
}

