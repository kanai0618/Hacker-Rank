#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int a[5][5],i=3,j=0,k;


    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
i=4;j=0;



    while(i<5&&j<4&&i>=0)
    {

        for(k=0;k<=i;k++)
        {
            printf("%d\n",a[k][j]);
        }
        for(k=j+1;k<4;k++)
        {
            printf("%d\n",a[i][k]);
        }
        printf("\t");

        i--;
        j++;


    }





    return 0;
}
