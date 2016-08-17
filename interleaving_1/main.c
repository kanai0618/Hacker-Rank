#include <stdio.h>
#include <stdlib.h>

void rec(char *s,char *s1,int m,int n,int i,char *d)
{

    if((m==0)&&(n==0))
    {
        printf("%s\n",d);
    }
    if(m>0)
    {
        d[i]=s[0];
        rec(s+1,s1,m-1,n,i+1,d);
    }
    if(n>0)
    {
        d[i]=s1[0];
        rec(s,s1+1,m,n-1,i+1,d);
    }
}




int main()
{
    printf("Hello world!\n");
    char *d= (char*)malloc((2+2+1)*sizeof(char));

   // Set the terminator for the output string
   d[4] = '\0';
    char *s="AB";
    char *s1="CD";
    rec(s,s1,2,2,0,d);



    return 0;
}
