#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    char a[100]="GEEKSFORGEEKS";
    int i=0,j=12,t=1,k;



    while(t<=6)
    {



        if(i==j)
        {
            for(k=0; k<i; k++)
            {
                printf(" ");
            }
            printf("%c",a[i]);
            i--;
            j++;
            break;
        }
        else
        {
            for(k=0; k<i; k++)
            {
                printf(" ");
            }
            printf("%c",a[i]);

            for(k=i; k<j; k++)
            {
                printf(" ");
            }
            printf("%c",a[j]);
            i++;
            j--;
        }
        printf("\n");

        t++;
    }

    while(t<=13)
    {





            for(k=0; k<i; k++)
            {
                printf(" ");
            }
            printf("%c",a[i]);

            for(k=i; k<j; k++)
            {
                printf(" ");
            }
            printf("%c",a[j]);
            i--;
            j++;

        printf("\n");

        t++;
    }


    return 0;
}
