#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");


    int a[10]={2, 0, 1, 4, 5, 3},i,n=6,b[10];

    for(i=0;i<n;i++)
    {
        b[a[i]]=i;

    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}
