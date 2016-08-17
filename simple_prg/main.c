#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    char s[10][100];
    int i,j;

    for(i=0;i<7;i++)
    {
        scanf("%s",s[i]);
    }
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        {
            printf("%c",s[i][j]);
        }
    }
    return 0;
}
