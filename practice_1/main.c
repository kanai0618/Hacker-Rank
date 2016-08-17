#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    char s[100]="AB CC ",s1[100],*s2;
    int i,k=0,m=0;



    for(i=0;i<strlen(s)+k;)
    {


        if(s[i]==' ')
        {
            s[m++]='a';s[m++]='b';s[m++]='c';
            //k=k+3;
            //m++;
            //i=i+3;
            i=i+3;

        }
        else
        {
            s1[m++]=s[i];
            i++;
        }
    }
   s1[m]='\0';
    printf("%s",s1);
    return 0;
}
