#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
struct node *link[10],*parent;
char name[20];
char type[15];
FILE *fp;
int n;
};

typedef struct node node;

void getInput(node *tree)
{
printf("Enter the name: ");
scanf("%s",tree->name);
printf("Enter the type: ");
scanf("%s",tree->type);
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
		q[++*end]=q[*top]->link[i];
	}
}

void printDetails(node *queue[25],int top)
{
	printf("Name: %s\n",queue[top]->name);
	printf("Type: %s\n",queue[top]->type);
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
	scanf("%s",direc);
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
int i;
if(tree->n==0)
{
    printf("\nEmpty directory\n");
    return;
}
printf("Name\tType\n");
for(i=0;i<tree->n;i++)
{
	printf("%s\t%s\n",tree->link[i]->name,tree->link[i]->type);
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

int isFileAvailable(node *dir,char file_name[10])
{
    int i;
    for(i=0;i<dir->n;i++)
    {
        if(strcmp(dir->link[i]->name,file_name)==0)
            return 1;
    }
    return 0;
}

void printLines(char file_name[10],int lines)
{
    FILE *fp=fopen(file_name,"r");
    int count=0;
    char ch;
    while((!feof(fp)) && (count<=lines))
    {
        fscanf(fp,"%c",&ch);
        while(ch!='\n' && !feof(fp))
        {
            printf("%c",ch);
            fscanf(fp,"%c",&ch);
        }
        printf("\n");
        count++;
    }
}

void head(node *dir,char file_name[10],int lines)
{
    int i;
    if(isFileAvailable(dir,file_name)==1)
        printLines(file_name,lines);
    else
        printf("\nFile not found\n");
}

int TotalLines(char file_name[10])
{
    int totalLines=0;
    char ch;
    FILE *fp=fopen(file_name,"r");
    do
    {
        fscanf(fp,"%c",&ch);
        if(ch=='\n')
            totalLines++;
    }while(!feof(fp));
    fclose(fp);
    return totalLines;
}

void cat(node *dir,char file_name[10])
{
    int i,totalLines;
    if(isFileAvailable(dir,file_name)==1)
    {
        totalLines=TotalLines(file_name);
        printLines(file_name,totalLines);
    }

    else
        printf("\nFile not found\n");
}

void printTailLines(char file_name[10],int totalLines,int lines)
{
    int count=-1;
    char ch;
    FILE *fp;
    if(lines>=totalLines)
    {
        printLines(file_name,totalLines);
        return;
    }

    fp=fopen(file_name,"r");
    fscanf(fp,"%c",&ch);
    while(count!=(totalLines-lines))
    {
        if(ch=='\n')
            count++;
        fscanf(fp,"%c",&ch);
    }
    while(!feof(fp))
    {
        printf("%c",ch);
        fscanf(fp,"%c",&ch);
    }
    fclose(fp);
}


void tail(node *dir,char file_name[10],int lines)
{
    int i,totalLines;
    if(isFileAvailable(dir,file_name)==1)
    {
            totalLines=TotalLines(file_name);
            printTailLines(file_name,totalLines,lines);
    }
    else
        printf("File Not found");
}

int LineNum(node *dir,char file_name[10],char word[10])
{
    int i=0,linenum=0;
    char ch;
    char line[25];
    FILE *fp=fopen(file_name,"r");
    while(!feof(fp))
    {
        fscanf(fp,"%c",&ch);
        while(ch!='\n')
        {
            line[i++]=ch;
            fscanf(fp,"%c",&ch);
        }
        line[i]='\0';
        if(strstr(line,word)!=NULL)
        {
            return linenum;
        }
        i=0;
        linenum++;
    }
    return -1;
}

void grep(node *dir,char file_name[10],char word[10])
{
    int i,linenum;
    if(isFileAvailable(dir,file_name)==1)
    {
            linenum=LineNum(dir,file_name,word);
            if(linenum==-1)
                printf("Word not found\n");
            else
                printf("Word found in the line: %d",linenum);
    }
    else
        printf("\nFile not found\n");
}

void find(node *tree,char search[10])
{
	int i;
	if(tree->n==0)
	{
		if(strcmp(search,tree->name)==0)
			pwd(tree);
		return;
	}

	for(i=0;i<tree->n;i++)
	{
		find(tree->link[i],search);
	}
	return;
}


//***main***
int main()

{
FILE *fp;
int top=0,end=-1,n,choice,lines;
char file_name[10];
node *tree=(node *)malloc(sizeof(node));
node *q[25],*temp;

strcpy(tree->name,"root");
strcpy(tree->type,"dir");
tree->parent=NULL;
node *curr_dir=tree;
q[++end]=tree;

do
{
if(strcmp(q[top]->type,"file")==0)
{
    printf("File %s\n",q[top]->name);
    fp=fopen(q[top]->name,"w");
    char ch;
    scanf("%c",&ch);
    while(ch!='$')
    {
        fprintf(fp,"%c",ch);
        scanf("%c",&ch);
    }
    fclose(fp);
}
else
{
    printf("Current Directory: %s\nEnter the number of sub-directories: ",q[top]->name);
    scanf("%d",&n);
    q[top]->n=n;
    create(n,&top,&end,q);
}
top++;
}while(top<=end);

do
{
printf("\nEnter the operation to be performed\n");
printf("1.cd\t2.ls\t3.find\n4.tail\t5.grep\t6.head\n7.cat\t8.pwd\t9.exit\n");
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
	printf("Enter the file name\n");
	scanf("%s",file_name);
	find(tree,file_name);
	break;

    case 4:
        printf("Enter the file name\n");
        scanf("%s",file_name);
        printf("Enter the number of lines to be printed: ");
        scanf("%d",&lines);
        tail(curr_dir,file_name,lines);
        break;

    case 5:
        printf("Enter the file name\n");
        scanf("%s",file_name);
        char word[10];
        printf("Enter the word to be searched: ");
        scanf("%s",word);
        grep(curr_dir,file_name,word);
        break;

    case 6:
        printf("Enter the file name\n");
        scanf("%s",file_name);
        printf("Enter the number of lines to be printed: ");
        scanf("%d",&lines);
        head(curr_dir,file_name,lines);
        break;

    case 7:
        printf("Enter the file name\n");
        scanf("%s",file_name);
        cat(curr_dir,file_name);
        break;

	case 8:
	pwd(curr_dir);
	break;

	case 9:
	break;

}

}while(choice!=9);
return 0;
}

