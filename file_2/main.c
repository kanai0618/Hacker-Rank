#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch, file_name[25];
   char s[10];
   int i;
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
   printf("\n");

   printf("Enter the word to search\n");
   scanf("%s",s);

   while( !feof(fp))

      {
           for(i=0; i<strlen(s); i++){
            ch = fgetc(fp);
            if(ch != s[i])
                break;
            }
    if(i ==strlen(s))
    {
        printf("got it\n");
    }

      }

   fclose(fp);
   return 0;
}
