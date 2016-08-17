#include <stdio.h>
#include <stdlib.h>

void rec(char *s,int k,int l)

{
        int temp;
         if(k==l)return;
         rec(*s,k+1,l);
         if(*s==' '||*s==NULL)
         {
             if(k==0)
             {

                 temp=k;
             }
             else
             {
              temp=k+1;
              s[k]='\0';
             }
             while(s[temp])
             {
                 printf("%c",s[temp]);
                 temp++;
             }
         }


}

int main()
{
    printf("Hello world!\n");
    char s[]="satya jit nath";
    rec(s,0,14);
    return 0;
}
