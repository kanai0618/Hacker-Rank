#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   char ch, file_name[25],s[10];
   FILE *fp;

   printf("Enter the name of file you wish to see\n");
   gets(file_name);

   fp = fopen(file_name,"r"); // read mode

   if( fp == NULL )
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

   printf("The contents of %s file are :\n", file_name);


   while( ( ch = fgetc(fp) ) != EOF )

      {
          printf("%c",ch);
      }
      printf("Enter the word to search\n");
      gets(s);
      while( ( ch = fgetc(fp) ) != EOF )

      {
          if(strcmp(s,ch)==0)
          {
              printf("word matched\n");
              break;
          }
      }



   fclose(fp);
   return 0;
}
