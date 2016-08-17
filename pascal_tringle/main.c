#include <stdio.h>
#include <stdlib.h>


void pascal(int x)
{
    int a[100][100],i,j;
    a[0][0]=1;

    for(i=1;i<=x;i++)
    {
        a[i][0]=1;a[i][i]=1;
        for(j=1;j<i;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0;i<=x;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("1");
        printf("\n");
    }


}

int main()
{
    printf("Hello world!\n");
    pascal(10);
    return 0;
}
