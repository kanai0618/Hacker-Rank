#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a[100],b[100],n,flag=0,i=0,k;
    char s[100][100],s1[100];
   while(flag!=1)
   {
       scanf("%s",s1);
       s[i++]=s1;
       printf("%s",s[0]);
       printf("Enter 0 to continue\n");
       scanf("%d",&flag);

   }

   for(k=0;k<i;k++)
   {
       printf("%s",s[k]);
   }

        return 0;
}
