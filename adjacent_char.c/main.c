#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[100];
    int i,j,k,true=1,count=0;

    printf("Hello world!\n");


    printf("Enter the string\n");


    gets(s);
    k=strlen(s);

    while(true)
    {
        for(i=0;i<k;i++)
        {
            if(s[i]==s[i+1])
            {

                count++;
                while(s[i]!='\0')
                {
                    s[i]=s[i+2];
                    i++;
                }
                s[i]='\0';
                printf("%s\n",s);
                 k=k-2;


            }



        }
        if(count==0)
        { printf("After deleting the adjacent same element \n");
        if(strlen(s)>=1)
        {


            printf("%s\n",s);
        }
        else
        {
            printf("-1");
        }
            true=0;
        }
        count=0;
    }

    return 0;
}
