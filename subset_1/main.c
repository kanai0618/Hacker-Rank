#include <stdio.h>
#include <stdlib.h>


void PrintSubsets()
{
int source[4] = {1,2,3,4};
int currentSubset = 15;
int tmp,i;
while(currentSubset)
{
printf("(");
tmp = currentSubset;
for( i = 0; i<4; i++)
{
if (tmp & 1)
printf("%d ", source[i]);
tmp >>= 1;
}
printf(")\n");
currentSubset--;
}
}

int main()
{
    printf("Hello world!\n");


    PrintSubsets();



    return 0;
}


