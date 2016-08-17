#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch, file_name[25];
   char s[10];
   int i,count=0,k,count1=0;
   FILE *fp,*fp1;

   printf("Enter the name of file you wish to see\n");
   gets(file_name);

   fp = fopen(file_name,"r"); // read mode
   fp1=fopen(file_name,"r");

   if( fp == NULL )
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }



   while( !feof(fp))

      {

            ch = fgetc(fp);
            if(ch=='\n')
            {
                count++;
                printf("\n");
            }
            printf("%c",ch);
      }
    printf(" Total Lines in File%d\n",count);
    printf(" Total Lines in File\n",count);
    printf("Enter the number of lines you want from last\n");
   scanf("%d",&k);
   if(k>count)
   {
       while( ( ch = fgetc(fp1) ) != EOF )
      printf("%c",ch);
   }
   else
   {
       while(!feof(fp1))
       {

           if(ch=='\n')
           {
               count1++;
               printf("\n");


           }
           if((count-count1-1)<=k)
               {
                   printf("%c",ch);


               }

               ch=fgetc(fp1);

       }
   }


   fclose(fp);
   return 0;
}
