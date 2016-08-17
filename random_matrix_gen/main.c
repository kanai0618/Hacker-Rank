#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random[3][3];
    int i, o,j;

    srand(time(NULL));
    for(o = 0; o<3; o++)
        for(i = 0; i<3; i++)
            random[o][i] = rand()%8+1;

            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    printf("%d\t",random[i][j]);
                }
                printf("\n");
            }
    return 0;
}
