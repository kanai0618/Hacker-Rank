#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i;
    int *a=(int *)(malloc(sizeof(int)*10));
    for(i=0;i<10;i++)
    {
        a[i]=i;
    }
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
