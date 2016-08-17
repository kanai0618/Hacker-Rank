#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    char s[10]="ABCDE",s1[10];
    int k=1,i,l,p=0,m=0;


    while(k<5)
    {

        while(p<5)
        {


            for(i=p; i<k+p; i++)
            {
                s1[m]=s[i];
            }
            s1[i]='\0';


            for(l=p+1; l<5; l++)
            {
                printf("%s%c",s1,s[l]);
                printf("\n");
            }
            p++;

        }
        p=0;


        k++;

    }

    return 0;
}
