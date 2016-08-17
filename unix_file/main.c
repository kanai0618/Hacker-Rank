#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
#define max 25

char filename[10][max];
int q;
char data[10][255];
int filecount=0;
struct superblock
{
    int freeinode[10];
    int freeblock[100];
};
struct inode
{
    int id;
    int type;
    char ownername[max];
    char filename[max];
    int memorysize;
    int noofblocksused;
    int blockaddress[100];
};

int main()
{
    for(q=0;q<10;q++)
    {
       strcpy(filename[q],"\0");
    }
    for(q=0;q<10;q++)
    {
       strcpy(data[q],"\0");
    }

    FILE *fp,*FP;
    struct superblock a;
    struct inode b[10];
    int j,k,i,p;
    char nameofdir[max],nameofdel[max],nameofcopy[max],nameofcopyfrom[max];
    for(i=0;i<10;i++)
    {
        a.freeinode[i]=1;
    }
    for(i=0;i<100;i++)
    {
        a.freeblock[i]=1;
    }
    char owner_name[max],name[max],buffer[255];
    int choice=0,inodecount=10,blockcount=100,tempblk;
    printf("Enter the directory file name:");
    scanf("%s",nameofdir);
    while(choice!=4 && inodecount!=0 && blockcount!=0)
    {
        float block;
        int length;
        printf("Enter the option:\n1)create file\n2)copy file\n3)delete file\n4)exit\n");
        scanf("%d",&choice);
        switch(choice)
    {
    case 1:
        {
        printf("Enter the name of the file owner:");
        scanf("%s",owner_name);
        printf("Enter the name of the file you want to create:");
        scanf("%s",name);
        fp=fopen(name,"a");
        printf("Enter the data you want to store in the file:");
        scanf("%s",buffer);
        printf("\nText:%s\n",buffer);
        length=strlen(buffer);
        length++;
        printf("Size of file:%d\n",length);
        if(length<32)
        block=1;
        else
        {
            block=ceil(length/32);
            printf("number of blocks to be used is:%d",block);
        }
        if(block>blockcount)
        {
            printf("No space available to store!!");
        }
        else
        {
            fprintf(fp,"%s",buffer);
            fclose(fp);
            for(i=0;i<10;i++)
        {
            if(a.freeinode[i]==1)
            {
                a.freeinode[i]=0;
                inodecount--;
                printf("\nInode count after assigning:%d",inodecount);
                printf("\nInode used is:%d",i+1);
                break;
            }

        }
             strcpy(data[i],buffer);
             strcpy(b[i].filename,name);
             strcpy(b[i].ownername,owner_name);
             b[i].noofblocksused=block;
             b[i].id=i+1;
             b[i].memorysize=length;
             b[i].type=1;
             strcpy(filename[i],name);
             printf("filename:%s\n name:%s",filename[i],name);
             for(j=0;j<block;j++)
             {
                 blockcount--;
                 for(k=0;k<100;k++)
                 {
                     if(a.freeblock[k]==1)
                       {
                         a.freeblock[k]=0;
                         b[i].blockaddress[j]=k+1;
                         break;
                       }

                 }
             }
        FP=fopen(nameofdir,"w");
        fprintf(FP,"Super block:\n");
        fprintf(FP,"List of Free inodes:\n");
        for(i=0;i<10;i++)
        {
            if(a.freeinode[i]==1)
            fprintf(FP,"\nInode index free :%d",i+1);
        }
        fprintf(FP,"\nList of free block address:");
        for(i=0;i<100;i++)
        {
            if(a.freeblock[i]==1)
                fprintf(FP,"\nFree block numbers : %d",i+1);
        }
        for(i=0;i<10;i++)
        {
            if(a.freeinode[i]==0)
            {
                fprintf(FP,"Inode id:%d\n",b[i].id);
                fprintf(FP,"owner name:%s\n",b[i].ownername);
                fprintf(FP,"file name:%s\n",b[i].filename);
                fprintf(FP,"file type:%d\n",b[i].type);
                fprintf(FP,"memory size:%d\n",b[i].memorysize);
                fprintf(FP,"Blocks used :\n");
                for(j=0;j<(b[i].noofblocksused);j++)
                    fprintf(FP,"Blocks used:%d",b[i].blockaddress[j]);

            }
        }
        filecount++;
        fclose(FP);
        }

        }
        break;
    case 3:
        {
            printf("Enter the file name you want to delete:");
            scanf("%s",nameofdel);

            for(i=0;i<10;i++)
            {
                if(strcmp(filename[i],nameofdel)==0)
                    {
                        strcpy(filename[i],"\0");
                        a.freeinode[i]=1;
                        strcpy(b[i].filename,"\0");
                        strcpy(b[i].ownername,"\0");
                        for(j=0;j<b[i].noofblocksused;j++)
                        {
                            tempblk=b[i].blockaddress[j]-1;
                            a.freeblock[tempblk]=1;
                            blockcount++;
                        }
                        b[i].id=0;
                        b[i].memorysize=0;;
                        b[i].type=0;
                        strcpy(data[i],"\0");
                        inodecount++;
                        filecount--;
                        remove(nameofdel);
                        break;
                    }
            }
            if(i==10)
                printf("File not found:!!!");
             FP=fopen(nameofdir,"w");
        fprintf(FP,"Super block:\n");
        fprintf(FP,"List of Free inodes:\n");
        for(i=0;i<10;i++)
        {
            if(a.freeinode[i]==1)
            fprintf(FP,"\nInode index free :%d",i+1);
        }
        fprintf(FP,"\nList of free block address:");
        for(i=0;i<100;i++)
        {
            if(a.freeblock[i]==1)
                fprintf(FP,"\nFree block numbers : %d",i+1);
        }
        for(i=0;i<10;i++)
        {
            if(a.freeinode[i]==0)
            {
                fprintf(FP,"Inode id:%d\n",b[i].id);
                fprintf(FP,"owner name:%s\n",b[i].ownername);
                fprintf(FP,"file name:%s\n",b[i].filename);
                fprintf(FP,"file type:%d\n",b[i].type);
                fprintf(FP,"memory size:%d\n",b[i].memorysize);
                fprintf(FP,"Blocks used :\n");
                for(j=0;j<(b[i].noofblocksused);j++)
                    fprintf(FP,"Blocks used:%d",b[i].blockaddress[j]);
            }
        }
        fclose(FP);
        }
        break;
    case 2:
        {
         int check;
        printf("Enter the name of the file you want to copy:");
        scanf("%s",nameofcopy);
        for(i=0;i<10;i++)
        {
            if(strcmp(filename[i],nameofcopy)==0)
            {
                printf("File already present with the same name!!");
                check=0;
            }
        }
        if(check==0)
            break;
        printf("Enter the name of the file to copy from:");
        scanf("%s",nameofcopyfrom);
        for(i=0;i<10;i++)
        {
            if(strcmp(filename[i],nameofcopyfrom)==0)
            {
                printf("File present to copy");
                char tem[255];
                strcpy(tem,data[i]);
                fp=fopen(nameofcopy,"a");
                fprintf(fp,"%s",tem);
                for(p=0;p<10;p++)
                   {
                      if(a.freeinode[p]==1)
                          {
                             a.freeinode[p]=0;
                             inodecount--;
                             printf("\nInode count after assigning:%d",inodecount);
                             printf("\nInode used is:%d",p+1);
                             break;
                          }
                  }
             strcpy(data[p],tem);
             strcpy(b[p].filename,nameofcopy);
             strcpy(b[p].ownername,b[i].ownername);
             b[p].noofblocksused=b[i].noofblocksused;
             b[p].id=p+1;
             b[p].memorysize=b[i].memorysize;
             b[p].type=1;
             strcpy(filename[p],nameofcopy);
             filecount++;
             for(j=0;j<(b[i].noofblocksused);j++)
             {
                 blockcount--;
                 for(k=0;k<100;k++)
                 {
                     if(a.freeblock[k]==1)
                       {
                         a.freeblock[k]=0;
                         b[p].blockaddress[j]=k+1;
                         break;
                       }

                 }
             }

                break;
            }

        }
        fclose(fp);
        if(i==10)
            printf("File to copy from not present");
        FP=fopen(nameofdir,"w");
        fprintf(FP,"Super block:\n");
        fprintf(FP,"List of Free inodes:\n");
        for(i=0;i<10;i++)
        {
            if(a.freeinode[i]==1)
            fprintf(FP,"\nInode index free :%d",i+1);
        }
        fprintf(FP,"\nList of free block address:");
        for(i=0;i<100;i++)
        {
            if(a.freeblock[i]==1)
                fprintf(FP,"\nFree block numbers : %d",i+1);
        }
        for(i=0;i<10;i++)
        {
            if(a.freeinode[i]==0)
            {
                fprintf(FP,"Inode id:%d\n",b[i].id);
                fprintf(FP,"owner name:%s\n",b[i].ownername);
                fprintf(FP,"file name:%s\n",b[i].filename);
                fprintf(FP,"file type:%d\n",b[i].type);
                fprintf(FP,"memory size:%d\n",b[i].memorysize);
                for(j=0;j<(b[i].noofblocksused);j++)
                    fprintf(FP,"Blocks used:%d",b[i].blockaddress[j]);
            }
        }
        fclose(FP);
        break;
    }


}
}
}
