#include <stdio.h>
#include <stdlib.h>

void fun(int a[10][10])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    printf("Hello world!\n");


    int a[10][10],i,j;


    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    fun(a);
    return 0;
}
