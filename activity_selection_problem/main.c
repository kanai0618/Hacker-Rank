#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int s[10]={1, 3, 0, 5, 8, 5};
    int d[10]={2, 4, 6, 7, 9, 9};


    int count=1,s1,d1,i;
    d1=2;

    printf("0");
    printf("\t");



    for(i=1;i<6;)
    {
        if(s[i]>d1)
        {
            count++;
            printf("%d\t",i);
            d1=d[i];
            i++;
        }
        else
        {
            i++;
        }
    }
    printf("\n");
    printf("%d",count);


    return 0;
}
