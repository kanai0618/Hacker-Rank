#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int count,j;

    for(count=0;count<8;count++)
    {
        for(j=2;j>=0;j--)
        {
           if(count&(1<<j))
           {
               printf("1");
           }
           else
           {
               printf("0");
           }
        }
        printf("\n");
    }


    return 0;
}
